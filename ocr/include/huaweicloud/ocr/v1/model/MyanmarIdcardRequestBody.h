
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardRequestBody_H_

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
class HUAWEICLOUD_OCR_V1_EXPORT  MyanmarIdcardRequestBody
    : public ModelBase
{
public:
    MyanmarIdcardRequestBody();
    virtual ~MyanmarIdcardRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// MyanmarIdcardRequestBody members

    /// <summary>
    /// 与url二选一  图像数据，base64编码，要求base64编码后大小不超过10MB。图片最小边不小于15px，最长边不超过4096px，支持JPEG、JPG、PNG、BMP、TIFF格式。
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/intl/zh-cn/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// - true：输出为unicode格式 - false：输出为zawgyi格式 如果参数值为空或无该参数，默认输出为zawgyi格式。 
    /// </summary>

    bool isConvertUnicode() const;
    bool convertUnicodeIsSet() const;
    void unsetconvertUnicode();
    void setConvertUnicode(bool value);

    /// <summary>
    /// 是否返回置信度的开关，可选值如下所示。 - true：返回置信度 - false：不返回置信度 如果无该参数，系统默认不返回置信度。如果输入参数不是Boolean类型，则会报非法参数错误。 
    /// </summary>

    bool isReturnConfidence() const;
    bool returnConfidenceIsSet() const;
    void unsetreturnConfidence();
    void setReturnConfidence(bool value);

    /// <summary>
    /// 是否返回头像内容开关，可选值如下所示： - true：返回身份证头像照片的 base64 编码 - false：不返回身份证头像照片的 base64 编码 
    /// </summary>

    bool isReturnPortraitImage() const;
    bool returnPortraitImageIsSet() const;
    void unsetreturnPortraitImage();
    void setReturnPortraitImage(bool value);

    /// <summary>
    /// 是否返回头像坐标的开关，可选值如下所示： - true：返回身份证头像的位置 - false：不返回身份证头像的位置 
    /// </summary>

    bool isReturnPortraitLocation() const;
    bool returnPortraitLocationIsSet() const;
    void unsetreturnPortraitLocation();
    void setReturnPortraitLocation(bool value);

    /// <summary>
    /// 是否返回身份证类型的开关，可选值如下所示： - true：返回身份证的类型，类型包括身份证原件以及身份证复印件 - false：不返回身份证的类型 未传入该参数时默认为false，即不返回身份证头像照片的 base64 编码。 
    /// </summary>

    bool isReturnIdcardType() const;
    bool returnIdcardTypeIsSet() const;
    void unsetreturnIdcardType();
    void setReturnIdcardType(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool convertUnicode_;
    bool convertUnicodeIsSet_;
    bool returnConfidence_;
    bool returnConfidenceIsSet_;
    bool returnPortraitImage_;
    bool returnPortraitImageIsSet_;
    bool returnPortraitLocation_;
    bool returnPortraitLocationIsSet_;
    bool returnIdcardType_;
    bool returnIdcardTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_MyanmarIdcardRequestBody_H_
