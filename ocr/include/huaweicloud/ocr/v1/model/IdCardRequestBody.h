
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardRequestBody_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardRequestBody_H_


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
class HUAWEICLOUD_OCR_V1_EXPORT  IdCardRequestBody
    : public ModelBase
{
public:
    IdCardRequestBody();
    virtual ~IdCardRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdCardRequestBody members

    /// <summary>
    /// 与url二选一。  图片的Base64编码，要求单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于15px，最长边不超过8192px。支持JPEG、JPG、PNG、BMP、TIFF格式。  图片文件Base64编码字符串，点击[这里](https://support.huaweicloud.com/ocr_faq/ocr_01_0032.html)查看详细获取方式。   
    /// </summary>

    std::string getImage() const;
    bool imageIsSet() const;
    void unsetimage();
    void setImage(const std::string& value);

    /// <summary>
    /// 与image二选一。  单个图片其对应的Base64编码不超过10MB。文件在Base64编码后会大于文件原本大小，请注意做好边界判断，建议文件大小不超过7MB。 图片最小边不小于15px，最长边不超过8192px。支持JPEG、JPG、PNG、BMP、TIFF格式。 图片的URL路径，目前支持： - 公网http/https url - OBS提供的url，使用OBS数据需要进行授权。包括对服务授权、临时授权、匿名公开授权，详情参见[配置OBS访问权限](https://support.huaweicloud.com/api-ocr/ocr_03_0132.html)。 &gt; 说明： - 接口响应时间依赖于图片的下载时间，如果图片下载时间过长，会返回接口调用失败。 - 请保证被检测图片所在的存储服务稳定可靠，推荐使用OBS服务存储图片数据。 - url中不能存在中文字符，若存在，中文需要进行utf8编码。 
    /// </summary>

    std::string getUrl() const;
    bool urlIsSet() const;
    void unseturl();
    void setUrl(const std::string& value);

    /// <summary>
    ///  - front：身份证人像面。 - back：身份证国徽面。 - double_side：身份证双面信息 &gt; 说明： 如果参数值为空或无该参数，系统自动识别，建议填写，准确率更高。 
    /// </summary>

    std::string getSide() const;
    bool sideIsSet() const;
    void unsetside();
    void setSide(const std::string& value);

    /// <summary>
    /// 返回校验身份证号等信息的开关，默认false，可选值如下所示：  - true：返回校验信息  - false：不返回校验信息 
    /// </summary>

    bool isReturnVerification() const;
    bool returnVerificationIsSet() const;
    void unsetreturnVerification();
    void setReturnVerification(bool value);

    /// <summary>
    /// 识别到的文字块的区域位置信息。可选值包括：  - true：返回各个文字块区域  - false：不返回各个文字块区域  如果无该参数，系统默认不返回文字块区域。如果输入参数不是Boolean类型，则会报非法参数错误。 
    /// </summary>

    bool isReturnTextLocation() const;
    bool returnTextLocationIsSet() const;
    void unsetreturnTextLocation();
    void setReturnTextLocation(bool value);

    /// <summary>
    /// 返回判断身份证图像是否经过翻拍的开关，默认false，可选值如下所示：  - true ：开启判断身份证图像是否经过翻拍功能  - false：关闭判断身份证图像是否经过翻拍功能 
    /// </summary>

    bool isDetectReproduce() const;
    bool detectReproduceIsSet() const;
    void unsetdetectReproduce();
    void setDetectReproduce(bool value);

    /// <summary>
    /// 返回判断身份证图像是否是黑白复印件的开关，默认false，可选值如下所示：  - true ：开启判断身份证图像是否是复印件功能  - false : 关闭身份证图像是否是复印件功能 
    /// </summary>

    bool isDetectCopy() const;
    bool detectCopyIsSet() const;
    void unsetdetectCopy();
    void setDetectCopy(bool value);

    /// <summary>
    /// 返回头像位置信息的开关，默认false，可选值如下所示：  - true ：开启返回头像位置信息的功能 - false : 关闭返回头像位置信息的功能 
    /// </summary>

    bool isReturnPortraitLocation() const;
    bool returnPortraitLocationIsSet() const;
    void unsetreturnPortraitLocation();
    void setReturnPortraitLocation(bool value);

    /// <summary>
    /// 返回头像图片信息（base64码）的开关，默认false，可选值如下所示：  - true ：开启头像图片信息（base64码）的功能 - false : 关闭头像图片信息（base64码）的功能 
    /// </summary>

    bool isReturnPortraitImage() const;
    bool returnPortraitImageIsSet() const;
    void unsetreturnPortraitImage();
    void setReturnPortraitImage(bool value);

    /// <summary>
    /// 返回身份证卡面（base64码）的开关，默认false，可选值如下所示：  - true ：开启身份证卡面（base64码）的功能 - false : 关闭身份证卡面（base64码）的功能 
    /// </summary>

    bool isReturnAdjustedImage() const;
    bool returnAdjustedImageIsSet() const;
    void unsetreturnAdjustedImage();
    void setReturnAdjustedImage(bool value);

    /// <summary>
    /// 身份证图像PS告警功能开关，默认false，可选值如下：  - true ：开启身份证图像PS告警功能 - false : 关闭身份证图像告警功能 
    /// </summary>

    bool isDetectTampering() const;
    bool detectTamperingIsSet() const;
    void unsetdetectTampering();
    void setDetectTampering(bool value);

    /// <summary>
    /// 身份证图像边框完整性告警功能开关，默认false，可选值如下：  - true ：打开身份证图像边框完整性告警功能 - false : 关闭身份证图像边框完整性告警功能 
    /// </summary>

    bool isDetectBorderIntegrity() const;
    bool detectBorderIntegrityIsSet() const;
    void unsetdetectBorderIntegrity();
    void setDetectBorderIntegrity(bool value);

    /// <summary>
    /// 身份证图像边框内部是否有异物遮挡的告警功能开关，默认false，可选值如下：  - true ：开启身份证边框内部异物遮挡告警功能 - false : 关闭身份证边框内部异物遮挡告警功能 
    /// </summary>

    bool isDetectBlockingWithinBorder() const;
    bool detectBlockingWithinBorderIsSet() const;
    void unsetdetectBlockingWithinBorder();
    void setDetectBlockingWithinBorder(bool value);

    /// <summary>
    /// 身份证图像模糊告警功能的开关，默认false，可选值如下：  - true ：开启身份证图像模糊告警功能 - false : 关闭身份证图像模糊告警功能 
    /// </summary>

    bool isDetectBlur() const;
    bool detectBlurIsSet() const;
    void unsetdetectBlur();
    void setDetectBlur(bool value);

    /// <summary>
    /// 临时身份证告警功能开关，默认false，可选值如下：  - true ：开启临时身份证告警功能 - false : 关闭临时身份证告警功能 
    /// </summary>

    bool isDetectInterim() const;
    bool detectInterimIsSet() const;
    void unsetdetectInterim();
    void setDetectInterim(bool value);

    /// <summary>
    /// 身份证反光告警功能开关，默认false，可选值如下：  - true ：开启身份证反光告警功能  - false : 关闭身份证反光告警功能 
    /// </summary>

    bool isDetectGlare() const;
    bool detectGlareIsSet() const;
    void unsetdetectGlare();
    void setDetectGlare(bool value);


protected:
    std::string image_;
    bool imageIsSet_;
    std::string url_;
    bool urlIsSet_;
    std::string side_;
    bool sideIsSet_;
    bool returnVerification_;
    bool returnVerificationIsSet_;
    bool returnTextLocation_;
    bool returnTextLocationIsSet_;
    bool detectReproduce_;
    bool detectReproduceIsSet_;
    bool detectCopy_;
    bool detectCopyIsSet_;
    bool returnPortraitLocation_;
    bool returnPortraitLocationIsSet_;
    bool returnPortraitImage_;
    bool returnPortraitImageIsSet_;
    bool returnAdjustedImage_;
    bool returnAdjustedImageIsSet_;
    bool detectTampering_;
    bool detectTamperingIsSet_;
    bool detectBorderIntegrity_;
    bool detectBorderIntegrityIsSet_;
    bool detectBlockingWithinBorder_;
    bool detectBlockingWithinBorderIsSet_;
    bool detectBlur_;
    bool detectBlurIsSet_;
    bool detectInterim_;
    bool detectInterimIsSet_;
    bool detectGlare_;
    bool detectGlareIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardRequestBody_H_
