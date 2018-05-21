using namespace cv;
using namespace std;

cv::RotatedRect fit_ellipse(std::vector<cv::Point2f> edgePoints, cv::Mat_<float> mPupilSobelX, cv::Mat_<float> mPupilSobelY);
//RotatedRect fit_ellipse(vector<Point2f> edgePoints, Mat_<float> mPupilSobelX, Mat_<float> mPupilSobelY);