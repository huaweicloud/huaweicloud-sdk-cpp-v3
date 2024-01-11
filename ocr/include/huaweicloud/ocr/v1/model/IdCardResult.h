
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/IdcardFrontResult.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/ocr/v1/model/IdcardBackResult.h>
#include <huaweicloud/ocr/v1/model/IdcardScoreInfoResult.h>
#include <string>
#include <huaweicloud/ocr/v1/model/IdcardVerificationResult.h>
#include <vector>

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
class HUAWEICLOUD_OCR_V1_EXPORT  IdCardResult
    : public ModelBase
{
public:
    IdCardResult();
    virtual ~IdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// IdCardResult members

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 性别。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirth() const;
    bool birthIsSet() const;
    void unsetbirth();
    void setBirth(const std::string& value);

    /// <summary>
    /// 民族。 
    /// </summary>

    std::string getEthnicity() const;
    bool ethnicityIsSet() const;
    void unsetethnicity();
    void setEthnicity(const std::string& value);

    /// <summary>
    /// 地址。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 身份证号。 
    /// </summary>

    std::string getNumber() const;
    bool numberIsSet() const;
    void unsetnumber();
    void setNumber(const std::string& value);

    /// <summary>
    /// 发证机关。 
    /// </summary>

    std::string getIssue() const;
    bool issueIsSet() const;
    void unsetissue();
    void setIssue(const std::string& value);

    /// <summary>
    /// 有效起始日期。 
    /// </summary>

    std::string getValidFrom() const;
    bool validFromIsSet() const;
    void unsetvalidFrom();
    void setValidFrom(const std::string& value);

    /// <summary>
    /// 有效结束日期。  &gt; 说明： - 身份证识别支持中华人民共和国居民身份证识别。 
    /// </summary>

    std::string getValidTo() const;
    bool validToIsSet() const;
    void unsetvalidTo();
    void setValidTo(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    IdcardVerificationResult getVerificationResult() const;
    bool verificationResultIsSet() const;
    void unsetverificationResult();
    void setVerificationResult(const IdcardVerificationResult& value);

    /// <summary>
    /// 文本框在原图位置。输出左上、右上、右下、左下四个点坐标。 仅return_text_location设置为true时才返回。 
    /// </summary>

    Object getTextLocation() const;
    bool textLocationIsSet() const;
    void unsettextLocation();
    void setTextLocation(const Object& value);

    /// <summary>
    /// 身份证头像位置信息的结果。 仅在输入参数return_portrait_location为true时，返回该字段，当输入身份证背面时返回为空列表。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 身份证图像是否翻拍告警结果。 - true：表示身份证图片经过翻拍。 - false：表示身份证图片未经过翻拍。 仅在输入参数detect_reproduce为true时，返回该字段。 
    /// </summary>

    bool isDetectReproduceResult() const;
    bool detectReproduceResultIsSet() const;
    void unsetdetectReproduceResult();
    void setDetectReproduceResult(bool value);

    /// <summary>
    /// 身份证图像是否黑白复印件告警结果。 - true：表示身份证图片是复印件。 - false”表示身份证图片是原件。 仅在输入参数detect_copy为true时，返回该字段。 
    /// </summary>

    bool isDetectCopyResult() const;
    bool detectCopyResultIsSet() const;
    void unsetdetectCopyResult();
    void setDetectCopyResult(bool value);

    /// <summary>
    /// 身份证图片是否PS告警结果。 - true：表示身份证经过PS。 - false：表示未经过PS。 仅在传入参数detect_tampering为true时，返回该字段。 
    /// </summary>

    bool isDetectTamperingResult() const;
    bool detectTamperingResultIsSet() const;
    void unsetdetectTamperingResult();
    void setDetectTamperingResult(bool value);

    /// <summary>
    /// 身份证图片边框完整性告警结果。 - true：表示边框不完整 - false：表示边框完整。 仅在输入参数detect_border_integrity为true时，返回该字段。 
    /// </summary>

    bool isDetectBorderIntegrityResult() const;
    bool detectBorderIntegrityResultIsSet() const;
    void unsetdetectBorderIntegrityResult();
    void setDetectBorderIntegrityResult(bool value);

    /// <summary>
    /// 身份证图像框内是否存在遮挡的告警结果。 - true：表示边框内部存在遮挡。 - false：表示边框内部不存在遮挡。 仅在输入参数detect_blocking_within_border为true时，返回该字段。 
    /// </summary>

    bool isDetectBlockingWithinBorderResult() const;
    bool detectBlockingWithinBorderResultIsSet() const;
    void unsetdetectBlockingWithinBorderResult();
    void setDetectBlockingWithinBorderResult(bool value);

    /// <summary>
    /// 身份证模糊告警结果。 - true：表示身份证图片较模糊。 - false：表示身份证清晰。 仅在输入参数detect_blur为true时，返回该字段。 
    /// </summary>

    bool isDetectBlurResult() const;
    bool detectBlurResultIsSet() const;
    void unsetdetectBlurResult();
    void setDetectBlurResult(bool value);

    /// <summary>
    /// 临时身份证告警结果。 - true：表示是临时身份证。 - false：表示非临时身份证。 仅在输入参数detect_interim为true时，返回该字段。 
    /// </summary>

    bool isDetectInterimResult() const;
    bool detectInterimResultIsSet() const;
    void unsetdetectInterimResult();
    void setDetectInterimResult(bool value);

    /// <summary>
    /// 身份证反光告警结果。 - true：表示身份证图片存在反光。 - false：表示是身份证不存在反光。 仅在输入参数detect_glare为true时，返回该字段。 
    /// </summary>

    bool isDetectGlareResult() const;
    bool detectGlareResultIsSet() const;
    void unsetdetectGlareResult();
    void setDetectGlareResult(bool value);

    /// <summary>
    /// 
    /// </summary>

    IdcardScoreInfoResult getScoreInfo() const;
    bool scoreInfoIsSet() const;
    void unsetscoreInfo();
    void setScoreInfo(const IdcardScoreInfoResult& value);

    /// <summary>
    /// 
    /// </summary>

    IdcardFrontResult getFront() const;
    bool frontIsSet() const;
    void unsetfront();
    void setFront(const IdcardFrontResult& value);

    /// <summary>
    /// 
    /// </summary>

    IdcardBackResult getBack() const;
    bool backIsSet() const;
    void unsetback();
    void setBack(const IdcardBackResult& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string birth_;
    bool birthIsSet_;
    std::string ethnicity_;
    bool ethnicityIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string number_;
    bool numberIsSet_;
    std::string issue_;
    bool issueIsSet_;
    std::string validFrom_;
    bool validFromIsSet_;
    std::string validTo_;
    bool validToIsSet_;
    IdcardVerificationResult verificationResult_;
    bool verificationResultIsSet_;
    Object textLocation_;
    bool textLocationIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    bool detectReproduceResult_;
    bool detectReproduceResultIsSet_;
    bool detectCopyResult_;
    bool detectCopyResultIsSet_;
    bool detectTamperingResult_;
    bool detectTamperingResultIsSet_;
    bool detectBorderIntegrityResult_;
    bool detectBorderIntegrityResultIsSet_;
    bool detectBlockingWithinBorderResult_;
    bool detectBlockingWithinBorderResultIsSet_;
    bool detectBlurResult_;
    bool detectBlurResultIsSet_;
    bool detectInterimResult_;
    bool detectInterimResultIsSet_;
    bool detectGlareResult_;
    bool detectGlareResultIsSet_;
    IdcardScoreInfoResult scoreInfo_;
    bool scoreInfoIsSet_;
    IdcardFrontResult front_;
    bool frontIsSet_;
    IdcardBackResult back_;
    bool backIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_IdCardResult_H_
