#ifndef UUID2278497357248
#define UUID2278497357248

/**
  * RandomForestClassifier(base_estimator=DecisionTreeClassifier(), bootstrap=True, ccp_alpha=0.0, class_name=RandomForestClassifier, class_weight=None, criterion=gini, estimator_params=('criterion', 'max_depth', 'min_samples_split', 'min_samples_leaf', 'min_weight_fraction_leaf', 'max_features', 'max_leaf_nodes', 'min_impurity_decrease', 'random_state', 'ccp_alpha'), max_depth=10, max_features=auto, max_leaf_nodes=None, max_samples=None, min_impurity_decrease=0.0, min_samples_leaf=1, min_samples_split=2, min_weight_fraction_leaf=0.0, n_estimators=5, n_jobs=None, num_outputs=2, oob_score=False, package_name=everywhereml.sklearn.ensemble, random_state=None, template_folder=everywhereml/sklearn/ensemble, verbose=0, warm_start=False)
 */
class RandomForestClassifier {
    public:

        /**
         * Predict class from features
         */
        int predict(float *x) {
            int predictedValue = 0;
            size_t startedAt = micros();

            
                    
            uint16_t votes[2] = { 0 };
            uint8_t classIdx = 0;
            float classScore = 0;

            
                tree0(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree1(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree2(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree3(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            
                tree4(x, &classIdx, &classScore);
                votes[classIdx] += classScore;
            

            // return argmax of votes
            uint8_t maxClassIdx = 0;
            float maxVote = votes[0];

            for (uint8_t i = 1; i < 2; i++) {
                if (votes[i] > maxVote) {
                    maxClassIdx = i;
                    maxVote = votes[i];
                }
            }

            predictedValue = maxClassIdx;

                    

            latency = micros() - startedAt;

            return (lastPrediction = predictedValue);
        }

        
            

            /**
             * Predict class label
             */
            String predictLabel(float *x) {
                return getLabelOf(predict(x));
            }

            /**
             * Get label of last prediction
             */
            String getLabel() {
                return getLabelOf(lastPrediction);
            }

            /**
             * Get label of given class
             */
            String getLabelOf(int8_t idx) {
                switch (idx) {
                    case -1:
                        return "ERROR";
                    
                        case 0:
                            return "Backgrond";
                    
                        case 1:
                            return "Starbucks";
                    
                    default:
                        return "UNKNOWN";
                }
            }


            /**
             * Get latency in micros
             */
            uint32_t latencyInMicros() {
                return latency;
            }

            /**
             * Get latency in millis
             */
            uint16_t latencyInMillis() {
                return latency / 1000;
            }
            

    protected:
        float latency = 0;
        int lastPrediction = 0;

        
            

        
            
                /**
                 * Random forest's tree #0
                 */
                void tree0(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[97] <= 0.0019424998899921775) {
                            
                                
                        if (x[4] <= 0.1018287967890501) {
                            
                                
                        *classIdx = 0;
                        *classScore = 502.0;
                        return;

                            
                        }
                        else {
                            
                                
                        if (x[12] <= 0.006169479340314865) {
                            
                                
                        *classIdx = 0;
                        *classScore = 502.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 494.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[130] <= 0.013918086886405945) {
                            
                                
                        *classIdx = 0;
                        *classScore = 502.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 494.0;
                        return;

                            
                        }

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #1
                 */
                void tree1(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[131] <= 0.0026529862079769373) {
                            
                                
                        if (x[64] <= 0.02471250668168068) {
                            
                                
                        *classIdx = 0;
                        *classScore = 501.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 495.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 495.0;
                        return;

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #2
                 */
                void tree2(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[41] <= 0.005850076209753752) {
                            
                                
                        if (x[131] <= 0.04293741658329964) {
                            
                                
                        *classIdx = 0;
                        *classScore = 498.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 498.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 498.0;
                        return;

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #3
                 */
                void tree3(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[128] <= 0.0012701647356152534) {
                            
                                
                        if (x[63] <= 0.026580852456390858) {
                            
                                
                        if (x[122] <= 0.3383149094879627) {
                            
                                
                        if (x[60] <= 0.04770985618233681) {
                            
                                
                        *classIdx = 0;
                        *classScore = 483.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 513.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 513.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[0] <= 0.9195657670497894) {
                            
                                
                        *classIdx = 1;
                        *classScore = 513.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 0;
                        *classScore = 483.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 513.0;
                        return;

                            
                        }

                }
            
        
            
                /**
                 * Random forest's tree #4
                 */
                void tree4(float *x, uint8_t *classIdx, float *classScore) {
                    
                        if (x[129] <= 0.001427695737220347) {
                            
                                
                        if (x[122] <= 0.09841711446642876) {
                            
                                
                        if (x[108] <= 0.4209860856644809) {
                            
                                
                        *classIdx = 0;
                        *classScore = 488.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 508.0;
                        return;

                            
                        }

                            
                        }
                        else {
                            
                                
                        if (x[47] <= 0.07195373252034187) {
                            
                                
                        *classIdx = 0;
                        *classScore = 488.0;
                        return;

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 508.0;
                        return;

                            
                        }

                            
                        }

                            
                        }
                        else {
                            
                                
                        *classIdx = 1;
                        *classScore = 508.0;
                        return;

                            
                        }

                }
            
        


            
};



static RandomForestClassifier classifier;


#endif