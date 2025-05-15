
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardRequestBody_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  CambodianIdCardRequestBody
    : public ModelBase
{
public:
    CambodianIdCardRequestBody();
    virtual ~CambodianIdCardRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CambodianIdCardRequestBody members

    /// <summary>
    /// 与url二选一。  图片的Base64编码，要求单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片尺寸不小于15像素，最长边不超过8192像素，支持JPG/PNG/BMP/TIF格式。 
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一。  单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片尺寸不小于15像素，最长边不超过8192像素，支持JPG/PNG/BMP/TIF格式。 图片的url路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/intl/zh-cn/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    /// 是否返回头像内容开关，可选值如下所示： - true: 返回身份证头像照片的 base64 编码 - false: 不返回身份证头像照片的 base64 编码 未传入该参数时默认为“false”，即不返回身份证头像照片的 base64 编码。 
    /// </summary>

    bool isReturnPortraitImage() const;
    bool returnPortraitImageIsSet() const;
    void unsetreturnPortraitImage();
    void setReturnPortraitImage(bool value);

    /// <summary>
    /// 是否返回头像坐标的开关，可选值如下所示： - true: 返回身份证头像的位置坐标 - false: 不返回身份证头像的位置坐标 未传入该参数时默认为“false”，即不返回身份证的头像坐标。 
    /// </summary>

    bool isReturnPortraitLocation() const;
    bool returnPortraitLocationIsSet() const;
    void unsetreturnPortraitLocation();
    void setReturnPortraitLocation(bool value);

    /// <summary>
    /// 是否返回身份证类型的开关，可选值如下所示： - true:返回身份证的类型，类型包括身份证原件以及身份证复印件 - false：不返回身份证的类型 
    /// </summary>

    bool isReturnIdcardType() const;
    bool returnIdcardTypeIsSet() const;
    void unsetreturnIdcardType();
    void setReturnIdcardType(bool value);

    /// <summary>
    /// 返回身份证边框完整性的告警结果的开关，可选值如下所示 - true：打开身份证图像边框完整性告警功能  - false：关闭身份证图像边框完整性告警功能 
    /// </summary>

    bool isDetectBorderIntegrity() const;
    bool detectBorderIntegrityIsSet() const;
    void unsetdetectBorderIntegrity();
    void setDetectBorderIntegrity(bool value);

    /// <summary>
    /// 返回身份证内部是否有被遮挡的告警结果的开关，可选值如下所示 - true：打开身份证内部是否有被遮挡的告警功能  - false：关闭身份证内部是否有被遮挡的告警功能 
    /// </summary>

    bool isDetectBlockingWithinBorder() const;
    bool detectBlockingWithinBorderIsSet() const;
    void unsetdetectBlockingWithinBorder();
    void setDetectBlockingWithinBorder(bool value);

    /// <summary>
    /// 返回身份证模糊告警结果的开关，可选值如下所示 - true:打开身份证是否模糊的告警功能 - false：关闭身份证是否模糊的告警功能 
    /// </summary>

    bool isDetectBlur() const;
    bool detectBlurIsSet() const;
    void unsetdetectBlur();
    void setDetectBlur(bool value);

    /// <summary>
    /// 返回身份证是否反光的告警结果的开关，可选值如下所示 - true：打开身份证是否反光的告警功能  - false：关闭身份证是否反光的告警功能 
    /// </summary>

    bool isDetectGlare() const;
    bool detectGlareIsSet() const;
    void unsetdetectGlare();
    void setDetectGlare(bool value);

    /// <summary>
    /// 返回身份证四点原图的base64编码 - true: 返回身份证原图的base64编码  - false：不返回身份证原图的base64编码 
    /// </summary>

    bool isReturnAdjustedImage() const;
    bool returnAdjustedImageIsSet() const;
    void unsetreturnAdjustedImage();
    void setReturnAdjustedImage(bool value);

    /// <summary>
    /// 返回身份证人像是否被篡改的告警结果的开关，可选值如下所示 - true:  打开身份证人像是否被篡改的告警功能  - false：关闭身份证人像被篡改的告警功能 不支持精细化的P图 
    /// </summary>

    bool isDetectTampering() const;
    bool detectTamperingIsSet() const;
    void unsetdetectTampering();
    void setDetectTampering(bool value);

    /// <summary>
    /// 返回判断身份证图像是否经过翻拍告警的开关，可选值如下所示 - true:打开判断身份证图像是否经过翻拍告警的功能  - false:关闭判断身份证图像是否经过翻拍告警的功能 
    /// </summary>

    bool isDetectReproduce() const;
    bool detectReproduceIsSet() const;
    void unsetdetectReproduce();
    void setDetectReproduce(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    bool returnPortraitImage_;
    bool returnPortraitImageIsSet_;
    bool returnPortraitLocation_;
    bool returnPortraitLocationIsSet_;
    bool returnIdcardType_;
    bool returnIdcardTypeIsSet_;
    bool detectBorderIntegrity_;
    bool detectBorderIntegrityIsSet_;
    bool detectBlockingWithinBorder_;
    bool detectBlockingWithinBorderIsSet_;
    bool detectBlur_;
    bool detectBlurIsSet_;
    bool detectGlare_;
    bool detectGlareIsSet_;
    bool returnAdjustedImage_;
    bool returnAdjustedImageIsSet_;
    bool detectTampering_;
    bool detectTamperingIsSet_;
    bool detectReproduce_;
    bool detectReproduceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardRequestBody_H_
