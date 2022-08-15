
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MacaoIdCardRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MacaoIdCardRequestBody_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_OCR_V1_EXPORT  MacaoIdCardRequestBody
    : public ModelBase
{
public:
    MacaoIdCardRequestBody();
    virtual ~MacaoIdCardRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MacaoIdCardRequestBody members

    /// <summary>
    /// 与url二选一。 图像数据，base64编码，要求base64编码后大小不超过10M。图片最小边不小于15像素，最长边不超过8192像素。支持JPG/PNG/BMP/TIFF格式。 图片Base64编码示例 如/9j/4AAQSkZJRgABAg...，带有多余前缀会产生The image format is not supported报错。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一。  图片的url路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/intl/en-us/api-ocr/ocr_03_0132.html)&gt;。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// front：身份证正面 back：身份证背面  如果参数值为空或无该参数，系统自动识别，建议填写，准确率更高。 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 是否返回头像内容开关，可选值如下所示： - true: 返回身份证头像照片的 base64 编码 - false: 不返回身份证头像照片的 base64 编码 未传入该参数时默认为“false”，即不返回身份证头像照片的 base64 编码。 
    /// </summary>

    bool isReturnPortraitImage() const;
    bool returnPortraitImageIsSet() const;
    void unsetreturnPortraitImage();
    void setReturnPortraitImage(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string side_;
    bool sideIsSet_;
    bool returnPortraitImage_;
    bool returnPortraitImageIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MacaoIdCardRequestBody_H_
