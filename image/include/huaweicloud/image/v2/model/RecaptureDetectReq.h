
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectReq_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectReq_H_


#include <huaweicloud/image/v2/ImageExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Image {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  RecaptureDetectReq
    : public ModelBase
{
public:
    RecaptureDetectReq();
    virtual ~RecaptureDetectReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RecaptureDetectReq members

    /// <summary>
    /// 与url二选一  图像数据，base64编码，要求base64编码后大小不超过10MB，最短边至少15px，最长边最大4096px，支持JPG、PNG、BMP格式。 
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一  图片的URL路径，目前支持：  - 公网HTTP/HTTPS URL  - 华为云OBS提供的URL，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权。详请参见[配置OBS服务的访问权限](https://support.huaweicloud.com/api-image/image_03_0037.html)。  &gt; - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 &gt; - 请保证被检测图片所在的存储服务稳定可靠，建议您使用华为云OBS存储。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 判断图片真实或虚假的阈值，默认值为0.95，取值范围（0~1），输入非该范围内值算法即取默认值。
    /// </summary>

    float getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(float value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    float threshold_;
    bool thresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_RecaptureDetectReq_H_
