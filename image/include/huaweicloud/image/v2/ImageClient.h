#ifndef HUAWEICLOUD_SDK_IMAGE_V2_ImageClient_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_ImageClient_H_

#include <huaweicloud/image/v2/ImageExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/image/v2/model/CelebrityRecognitionReq.h>
#include <huaweicloud/image/v2/model/ImageMainObjectDetectionReq.h>
#include <huaweicloud/image/v2/model/ImageMediaTaggingDetReq.h>
#include <huaweicloud/image/v2/model/ImageMediaTaggingReq.h>
#include <huaweicloud/image/v2/model/ImageTaggingReq.h>
#include <huaweicloud/image/v2/model/RecaptureDetectReq.h>
#include <huaweicloud/image/v2/model/RunCelebrityRecognitionRequest.h>
#include <huaweicloud/image/v2/model/RunCelebrityRecognitionResponse.h>
#include <huaweicloud/image/v2/model/RunImageMainObjectDetectionRequest.h>
#include <huaweicloud/image/v2/model/RunImageMainObjectDetectionResponse.h>
#include <huaweicloud/image/v2/model/RunImageMediaTaggingDetRequest.h>
#include <huaweicloud/image/v2/model/RunImageMediaTaggingDetResponse.h>
#include <huaweicloud/image/v2/model/RunImageMediaTaggingRequest.h>
#include <huaweicloud/image/v2/model/RunImageMediaTaggingResponse.h>
#include <huaweicloud/image/v2/model/RunImageTaggingRequest.h>
#include <huaweicloud/image/v2/model/RunImageTaggingResponse.h>
#include <huaweicloud/image/v2/model/RunRecaptureDetectRequest.h>
#include <huaweicloud/image/v2/model/RunRecaptureDetectResponse.h>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Image::V2::Model;

class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageClient : public Client
{
public:

    ImageClient();

    virtual ~ImageClient();

    static ClientBuilder<ImageClient> newBuilder();

    // 名人识别
    //
    // 分析并识别图片中包含的政治人物、明星及网红人物，返回人物信息及人脸坐标。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunCelebrityRecognitionResponse> runCelebrityRecognition(
        RunCelebrityRecognitionRequest &request
    );
    // 主体识别
    //
    // 检测图像中的主要内容，返回主要内容的坐标信息，这里的主要内容包括两方面：bounding_box和main_object_box
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunImageMainObjectDetectionResponse> runImageMainObjectDetection(
        RunImageMainObjectDetectionRequest &request
    );
    // 标签识别
    //
    // 自然图像的语义内容非常丰富，一个图像包含多个标签内容，图像标签服务准确识别自然图片中数百种场景、上千种通用物体及其属性，让智能相册管理、照片检索和分类、基于场景内容或者物体的广告推荐等功能更加直观。使用时用户发送待处理图片，返回图片标签内容及相应置信度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunImageMediaTaggingResponse> runImageMediaTagging(
        RunImageMediaTaggingRequest &request
    );
    // 媒资图像标签检测
    //
    // 自然图像的语义内容非常丰富，一个图像包含多个标签内容，图像标签服务准确识别自然图片中数百种场景、上千种通用物体及其属性，让智能相册管理、照片检索和分类、基于场景内容或者物体的广告推荐等功能更加直观。使用时用户发送待处理图片，返回图片标签内容及相应的位置坐标。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunImageMediaTaggingDetResponse> runImageMediaTaggingDet(
        RunImageMediaTaggingDetRequest &request
    );
    // 图像标签
    //
    // 自然图像的语义内容非常丰富，一个图像包含多个标签内容，图像标签服务准确识别自然图片中数百种场景、上千种通用物体及其属性，让智能相册管理、照片检索和分类、基于场景内容或者物体的广告推荐等功能更加直观。使用时用户发送待处理图片，返回图片标签内容及相应置信度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunImageTaggingResponse> runImageTagging(
        RunImageTaggingRequest &request
    );
    // 翻拍识别
    //
    // 零售行业通常根据零售店的销售量进行销售奖励，拍摄售出商品的条形码上传后台是常用的统计方式。翻拍识别利用深度神经网络算法判断条形码图片为原始拍摄，还是经过二次翻拍、打印翻拍等手法二次处理的图片。利用翻拍识别，可以检测出经过二次处理的不合规范图片，使得统计数据更准确、有效。。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunRecaptureDetectResponse> runRecaptureDetect(
        RunRecaptureDetectRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_IMAGE_V2_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Image::V2::ImageClient>;

#endif // HUAWEICLOUD_SDK_IMAGE_V2_ImageClient_H_

