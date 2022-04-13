#import <Foundation/Foundation.h>

// ! Project version number
FOUNDATION_EXPORT double opencv2VersionNumber;

// ! Project version string
FOUNDATION_EXPORT const unsigned char opencv2VersionString[];

#import <opencv2/ArrayUtil.h>
#import <opencv2/ByteVector.h>
#import <opencv2/CVObjcUtil.h>
#import <opencv2/Converters.h>
#import <opencv2/CvType.h>
#import <opencv2/DMatch.h>
#import <opencv2/Double2.h>
#import <opencv2/Double3.h>
#import <opencv2/DoubleVector.h>
#import <opencv2/Float4.h>
#import <opencv2/Float6.h>
#import <opencv2/FloatVector.h>
#import <opencv2/Int4.h>
#import <opencv2/IntVector.h>
#import <opencv2/KeyPoint.h>
#import <opencv2/Mat.h>
#import <opencv2/MatOfByte.h>
#import <opencv2/MatOfDMatch.h>
#import <opencv2/MatOfDouble.h>
#import <opencv2/MatOfFloat.h>
#import <opencv2/MatOfFloat4.h>
#import <opencv2/MatOfFloat6.h>
#import <opencv2/MatOfInt.h>
#import <opencv2/MatOfInt4.h>
#import <opencv2/MatOfKeyPoint.h>
#import <opencv2/MatOfPoint2f.h>
#import <opencv2/MatOfPoint2i.h>
#import <opencv2/MatOfPoint3.h>
#import <opencv2/MatOfPoint3f.h>
#import <opencv2/MatOfRect2d.h>
#import <opencv2/MatOfRect2i.h>
#import <opencv2/MatOfRotatedRect.h>
#import <opencv2/MinMaxLocResult.h>
#import <opencv2/Point2d.h>
#import <opencv2/Point2f.h>
#import <opencv2/Point2i.h>
#import <opencv2/Point3d.h>
#import <opencv2/Point3f.h>
#import <opencv2/Point3i.h>
#import <opencv2/Range.h>
#import <opencv2/Rect2d.h>
#import <opencv2/Rect2f.h>
#import <opencv2/Rect2i.h>
#import <opencv2/RotatedRect.h>
#import <opencv2/Scalar.h>
#import <opencv2/Size2d.h>
#import <opencv2/Size2f.h>
#import <opencv2/Size2i.h>
#import <opencv2/TermCriteria.h>
#import <opencv2/Core.h>
#import <opencv2/Algorithm.h>
#import <opencv2/TickMeter.h>
#import <opencv2/Moments.h>
#import <opencv2/Imgproc.h>
#import <opencv2/CLAHE.h>
#import <opencv2/GeneralizedHough.h>
#import <opencv2/GeneralizedHoughBallard.h>
#import <opencv2/GeneralizedHoughGuil.h>
#import <opencv2/LineSegmentDetector.h>
#import <opencv2/Subdiv2D.h>
#import <opencv2/IntelligentScissorsMB.h>
#import <opencv2/Ml.h>
#import <opencv2/ANN_MLP.h>
#import <opencv2/Boost.h>
#import <opencv2/DTrees.h>
#import <opencv2/EM.h>
#import <opencv2/KNearest.h>
#import <opencv2/LogisticRegression.h>
#import <opencv2/NormalBayesClassifier.h>
#import <opencv2/ParamGrid.h>
#import <opencv2/RTrees.h>
#import <opencv2/SVM.h>
#import <opencv2/SVMSGD.h>
#import <opencv2/StatModel.h>
#import <opencv2/TrainData.h>
#import <opencv2/Photo.h>
#import <opencv2/AlignExposures.h>
#import <opencv2/AlignMTB.h>
#import <opencv2/CalibrateCRF.h>
#import <opencv2/CalibrateDebevec.h>
#import <opencv2/CalibrateRobertson.h>
#import <opencv2/MergeDebevec.h>
#import <opencv2/MergeExposures.h>
#import <opencv2/MergeMertens.h>
#import <opencv2/MergeRobertson.h>
#import <opencv2/Tonemap.h>
#import <opencv2/TonemapDrago.h>
#import <opencv2/TonemapMantiuk.h>
#import <opencv2/TonemapReinhard.h>
#import <opencv2/Dnn.h>
#import <opencv2/ClassificationModel.h>
#import <opencv2/DetectionModel.h>
#import <opencv2/DictValue.h>
#import <opencv2/KeypointsModel.h>
#import <opencv2/Layer.h>
#import <opencv2/Model.h>
#import <opencv2/Net.h>
#import <opencv2/SegmentationModel.h>
#import <opencv2/TextDetectionModel.h>
#import <opencv2/TextDetectionModel_DB.h>
#import <opencv2/TextDetectionModel_EAST.h>
#import <opencv2/TextRecognitionModel.h>
#import <opencv2/Features2d.h>
#import <opencv2/AKAZE.h>
#import <opencv2/AffineFeature.h>
#import <opencv2/AgastFeatureDetector.h>
#import <opencv2/BFMatcher.h>
#import <opencv2/BOWImgDescriptorExtractor.h>
#import <opencv2/BOWKMeansTrainer.h>
#import <opencv2/BOWTrainer.h>
#import <opencv2/BRISK.h>
#import <opencv2/DescriptorMatcher.h>
#import <opencv2/FastFeatureDetector.h>
#import <opencv2/Feature2D.h>
#import <opencv2/FlannBasedMatcher.h>
#import <opencv2/GFTTDetector.h>
#import <opencv2/KAZE.h>
#import <opencv2/MSER.h>
#import <opencv2/ORB.h>
#import <opencv2/SIFT.h>
#import <opencv2/SimpleBlobDetector.h>
#import <opencv2/SimpleBlobDetectorParams.h>
#import <opencv2/Mat+Converters.h>
#import <opencv2/Imgcodecs.h>
#import <opencv2/CvCamera2.h>
#import <opencv2/Videoio.h>
#import <opencv2/VideoCapture.h>
#import <opencv2/VideoWriter.h>
#import <opencv2/Calib3d.h>
#import <opencv2/CirclesGridFinderParameters.h>
#import <opencv2/StereoBM.h>
#import <opencv2/StereoMatcher.h>
#import <opencv2/StereoSGBM.h>
#import <opencv2/UsacParams.h>
#import <opencv2/Objdetect.h>
#import <opencv2/BaseCascadeClassifier.h>
#import <opencv2/CascadeClassifier.h>
#import <opencv2/HOGDescriptor.h>
#import <opencv2/QRCodeDetector.h>
#import <opencv2/Video.h>
#import <opencv2/BackgroundSubtractor.h>
#import <opencv2/BackgroundSubtractorKNN.h>
#import <opencv2/BackgroundSubtractorMOG2.h>
#import <opencv2/DISOpticalFlow.h>
#import <opencv2/DenseOpticalFlow.h>
#import <opencv2/FarnebackOpticalFlow.h>
#import <opencv2/KalmanFilter.h>
#import <opencv2/SparseOpticalFlow.h>
#import <opencv2/SparsePyrLKOpticalFlow.h>
#import <opencv2/Tracker.h>
#import <opencv2/TrackerDaSiamRPN.h>
#import <opencv2/TrackerDaSiamRPNParams.h>
#import <opencv2/TrackerGOTURN.h>
#import <opencv2/TrackerGOTURNParams.h>
#import <opencv2/TrackerMIL.h>
#import <opencv2/TrackerMILParams.h>
#import <opencv2/VariationalRefinement.h>