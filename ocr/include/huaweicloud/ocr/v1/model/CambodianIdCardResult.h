
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/ocr/v1/model/CambodianIdCardScoreInformationResult.h>
#include <string>
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
class HUAWEICLOUD_OCR_V1_EXPORT  CambodianIdCardResult
    : public ModelBase
{
public:
    CambodianIdCardResult();
    virtual ~CambodianIdCardResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CambodianIdCardResult members

    /// <summary>
    /// 身份证号码。 
    /// </summary>

    std::string getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(const std::string& value);

    /// <summary>
    /// 高棉语版姓名。 
    /// </summary>

    std::string getNameKh() const;
    bool nameKhIsSet() const;
    void unsetnameKh();
    void setNameKh(const std::string& value);

    /// <summary>
    /// 英文姓名。 
    /// </summary>

    std::string getNameEn() const;
    bool nameEnIsSet() const;
    void unsetnameEn();
    void setNameEn(const std::string& value);

    /// <summary>
    /// 出生日期。 
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 性别。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 身高。 
    /// </summary>

    std::string getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(const std::string& value);

    /// <summary>
    /// 出生地。 
    /// </summary>

    std::string getBirthPlace() const;
    bool birthPlaceIsSet() const;
    void unsetbirthPlace();
    void setBirthPlace(const std::string& value);

    /// <summary>
    /// 地址，以空格分隔。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 签发起始日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 签发结束日期。 
    /// </summary>

    std::string getExpiryDate() const;
    bool expiryDateIsSet() const;
    void unsetexpiryDate();
    void setExpiryDate(const std::string& value);

    /// <summary>
    /// 图片中的个人特征。 
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 机器码第一行。 
    /// </summary>

    std::string getMachineCode1() const;
    bool machineCode1IsSet() const;
    void unsetmachineCode1();
    void setMachineCode1(const std::string& value);

    /// <summary>
    /// 机器码第二行。 
    /// </summary>

    std::string getMachineCode2() const;
    bool machineCode2IsSet() const;
    void unsetmachineCode2();
    void setMachineCode2(const std::string& value);

    /// <summary>
    /// 机器码第三行。 
    /// </summary>

    std::string getMachineCode3() const;
    bool machineCode3IsSet() const;
    void unsetmachineCode3();
    void setMachineCode3(const std::string& value);

    /// <summary>
    /// 头像的base64编码。 当输入参数“return_portrait_image”为“true”时，才返回该参数。 
    /// </summary>

    std::string getPortraitImage() const;
    bool portraitImageIsSet() const;
    void unsetportraitImage();
    void setPortraitImage(const std::string& value);

    /// <summary>
    /// 头像在原图上的位置。 当输入参数“return_portrait_location”为“true”时，才返回该参数。以列表形式显示，包含头像区域四个顶点的二维坐标（x,y），坐标原点为图片左上角，x轴沿水平方向，y轴沿竖直方向。 
    /// </summary>

    std::vector<std::vector<int32_t>>& getPortraitLocation();
    bool portraitLocationIsSet() const;
    void unsetportraitLocation();
    void setPortraitLocation(const std::vector<std::vector<int32_t>>& value);

    /// <summary>
    /// 身份证的类型。当输入参数\&quot;idcard_type \&quot;为\&quot;true\&quot;时，才返回该参数。取值如下所示： - normal：身份证原件 - copy：复印的身份证 
    /// </summary>

    std::string getIdcardType() const;
    bool idcardTypeIsSet() const;
    void unsetidcardType();
    void setIdcardType(const std::string& value);

    /// <summary>
    /// 身份证原图的base64编码。 当输入参数\&quot;return_adjusted_image\&quot;为\&quot;true\&quot;时，才返回该参数。 
    /// </summary>

    std::string getAdjustedImage() const;
    bool adjustedImageIsSet() const;
    void unsetadjustedImage();
    void setAdjustedImage(const std::string& value);

    /// <summary>
    /// 身份证图片边框完整性告警结果，\&quot;true\&quot;表示边框不完整，\&quot;false\&quot;表示边框完整。仅在输入参数detect_border_integrity为true时，返回该字段。 
    /// </summary>

    bool isDetectBorderIntegrityResult() const;
    bool detectBorderIntegrityResultIsSet() const;
    void unsetdetectBorderIntegrityResult();
    void setDetectBorderIntegrityResult(bool value);

    /// <summary>
    /// 身份证图像框内是否存在遮挡的告警结果，\&quot;true\&quot;表示边框内部存在遮挡，\&quot;false\&quot;表示边框内部完整。仅在输入参数detect_blocking_within_border为true时，返回该字段。 
    /// </summary>

    bool isDetectBlockingWithinBorderResult() const;
    bool detectBlockingWithinBorderResultIsSet() const;
    void unsetdetectBlockingWithinBorderResult();
    void setDetectBlockingWithinBorderResult(bool value);

    /// <summary>
    /// 身份证模糊告警结果，\&quot;true\&quot;表示图片模糊，\&quot;false\&quot;表示身份证清晰。仅在输入参数detect_blur为true时，返回该字段。 
    /// </summary>

    bool isDetectBlurResult() const;
    bool detectBlurResultIsSet() const;
    void unsetdetectBlurResult();
    void setDetectBlurResult(bool value);

    /// <summary>
    /// 身份证反光告警结果，\&quot;true\&quot;表示身份证反光，\&quot;false\&quot;表示是身份证无反光。仅在输入参数detect_glare为true时，返回该字段。 
    /// </summary>

    bool isDetectGlareResult() const;
    bool detectGlareResultIsSet() const;
    void unsetdetectGlareResult();
    void setDetectGlareResult(bool value);

    /// <summary>
    /// 身份证人像被篡改的告警结果，\&quot;true\&quot;表示身份证人像被篡改，\&quot;false\&quot;表示是身份证人像未被篡改。仅在输入参数detect_tampering为true时，返回该字段。 
    /// </summary>

    bool isDetectTamperingResult() const;
    bool detectTamperingResultIsSet() const;
    void unsetdetectTamperingResult();
    void setDetectTamperingResult(bool value);

    /// <summary>
    /// 
    /// </summary>

    CambodianIdCardScoreInformationResult getScoreInfo() const;
    bool scoreInfoIsSet() const;
    void unsetscoreInfo();
    void setScoreInfo(const CambodianIdCardScoreInformationResult& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string idNumber_;
    bool idNumberIsSet_;
    std::string nameKh_;
    bool nameKhIsSet_;
    std::string nameEn_;
    bool nameEnIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string height_;
    bool heightIsSet_;
    std::string birthPlace_;
    bool birthPlaceIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string expiryDate_;
    bool expiryDateIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string machineCode1_;
    bool machineCode1IsSet_;
    std::string machineCode2_;
    bool machineCode2IsSet_;
    std::string machineCode3_;
    bool machineCode3IsSet_;
    std::string portraitImage_;
    bool portraitImageIsSet_;
    std::vector<std::vector<int32_t>> portraitLocation_;
    bool portraitLocationIsSet_;
    std::string idcardType_;
    bool idcardTypeIsSet_;
    std::string adjustedImage_;
    bool adjustedImageIsSet_;
    bool detectBorderIntegrityResult_;
    bool detectBorderIntegrityResultIsSet_;
    bool detectBlockingWithinBorderResult_;
    bool detectBlockingWithinBorderResultIsSet_;
    bool detectBlurResult_;
    bool detectBlurResultIsSet_;
    bool detectGlareResult_;
    bool detectGlareResultIsSet_;
    bool detectTamperingResult_;
    bool detectTamperingResultIsSet_;
    CambodianIdCardScoreInformationResult scoreInfo_;
    bool scoreInfoIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_CambodianIdCardResult_H_
