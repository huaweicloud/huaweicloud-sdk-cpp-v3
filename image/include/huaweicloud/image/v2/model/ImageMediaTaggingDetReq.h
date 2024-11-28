
#ifndef HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingDetReq_H_
#define HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingDetReq_H_


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
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_IMAGE_V2_EXPORT  ImageMediaTaggingDetReq
    : public ModelBase
{
public:
    ImageMediaTaggingDetReq();
    virtual ~ImageMediaTaggingDetReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ImageMediaTaggingDetReq members

    /// <summary>
    /// 与url二选一  图像数据，base64编码，要求base64编码后大小不超过10M，最短边至少1px，最长边最大10000px，支持JPG、PNG、BMP、WEBP格式。 
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一  图片的URL路径，目前支持：  - 公网HTTP/HTTPS URL  - 华为云OBS提供的URL，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权。详请参见[[配置OBS服务的访问权限](https://support.huaweicloud.com/api-moderation/moderation_03_0020.html)](tag:hc)[[配置OBS服务的访问权限](https://support.huaweicloud.com/intl/zh-cn/api-moderation/moderation_03_0020.html)](tag:hk)。  &gt; - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 &gt; - 请保证被检测图片所在的存储服务稳定可靠，建议您使用华为云OBS存储。 &gt; - lmage不支持跨区域OBS，OBS的区域需要和服务保持一致。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// zh：返回标签的语言类型为中文。  en：返回标签的语言类型为英文。  默认值为zh。
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 置信度的阈值（0~100），低于此置信数的标签，将不会返回。  默认值：20。  最小值：0。  最大值：100。
    /// </summary>

    float getThreshold() const;
    bool thresholdIsSet() const;
    void unsetthreshold();
    void setThreshold(float value);

    /// <summary>
    /// 最多返回的tag数（取值范围：1~50），默认值： 10
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string language_;
    bool languageIsSet_;
    float threshold_;
    bool thresholdIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMAGE_V2_MODEL_ImageMediaTaggingDetReq_H_
