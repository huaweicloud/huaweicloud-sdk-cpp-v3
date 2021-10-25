
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationConfidence_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationConfidence_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/ocr/v1/model/QualificationCategoryConfidence.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  QualificationConfidence
    : public ModelBase
{
public:
    QualificationConfidence();
    virtual ~QualificationConfidence();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QualificationConfidence members

    /// <summary>
    /// 身份证号置信度。 
    /// </summary>

    float getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(float value);

    /// <summary>
    /// 考核时间置信度。 
    /// </summary>

    float getAssessmentDate() const;
    bool assessmentDateIsSet() const;
    void unsetassessmentDate();
    void setAssessmentDate(float value);

    /// <summary>
    /// 从业资格证号置信度。 
    /// </summary>

    float getCertificateNumber() const;
    bool certificateNumberIsSet() const;
    void unsetcertificateNumber();
    void setCertificateNumber(float value);

    /// <summary>
    /// 档案号置信度。 
    /// </summary>

    float getFileNumber() const;
    bool fileNumberIsSet() const;
    void unsetfileNumber();
    void setFileNumber(float value);

    /// <summary>
    /// 福路通号置信度。 
    /// </summary>

    float getUnionCardNumber() const;
    bool unionCardNumberIsSet() const;
    void unsetunionCardNumber();
    void setUnionCardNumber(float value);

    /// <summary>
    /// 继续教育信息置信度。 
    /// </summary>

    float getContinuingEducationInfo() const;
    bool continuingEducationInfoIsSet() const;
    void unsetcontinuingEducationInfo();
    void setContinuingEducationInfo(float value);

    /// <summary>
    /// 性别置信度。 
    /// </summary>

    float getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(float value);

    /// <summary>
    /// 联系电话置信度。 
    /// </summary>

    float getPhoneNumber() const;
    bool phoneNumberIsSet() const;
    void unsetphoneNumber();
    void setPhoneNumber(float value);

    /// <summary>
    /// 登记时间置信度。 
    /// </summary>

    float getRegistrationDate() const;
    bool registrationDateIsSet() const;
    void unsetregistrationDate();
    void setRegistrationDate(float value);

    /// <summary>
    /// 单位置信度。 
    /// </summary>

    float getWorkUnit() const;
    bool workUnitIsSet() const;
    void unsetworkUnit();
    void setWorkUnit(float value);

    /// <summary>
    /// 诚信考核信息置信度。 
    /// </summary>

    float getIntegrityAssessmentInfo() const;
    bool integrityAssessmentInfoIsSet() const;
    void unsetintegrityAssessmentInfo();
    void setIntegrityAssessmentInfo(float value);

    /// <summary>
    /// 国籍置信度。 
    /// </summary>

    float getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(float value);

    /// <summary>
    /// 姓名置信度。 
    /// </summary>

    float getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(float value);

    /// <summary>
    /// 住址置信度。 
    /// </summary>

    float getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(float value);

    /// <summary>
    /// 准驾车型置信度。 
    /// </summary>

    float getDrivingClass() const;
    bool drivingClassIsSet() const;
    void unsetdrivingClass();
    void setDrivingClass(float value);

    /// <summary>
    /// 发证机关置信度。 
    /// </summary>

    float getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(float value);

    /// <summary>
    /// 出生日期置信度。 
    /// </summary>

    float getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(float value);

    /// <summary>
    /// 从业资格列表置信度。 
    /// </summary>

    std::vector<QualificationCategoryConfidence>& getQualificationCategoryList();
    bool qualificationCategoryListIsSet() const;
    void unsetqualificationCategoryList();
    void setQualificationCategoryList(const std::vector<QualificationCategoryConfidence>& value);


protected:
    float idNumber_;
    bool idNumberIsSet_;
    float assessmentDate_;
    bool assessmentDateIsSet_;
    float certificateNumber_;
    bool certificateNumberIsSet_;
    float fileNumber_;
    bool fileNumberIsSet_;
    float unionCardNumber_;
    bool unionCardNumberIsSet_;
    float continuingEducationInfo_;
    bool continuingEducationInfoIsSet_;
    float sex_;
    bool sexIsSet_;
    float phoneNumber_;
    bool phoneNumberIsSet_;
    float registrationDate_;
    bool registrationDateIsSet_;
    float workUnit_;
    bool workUnitIsSet_;
    float integrityAssessmentInfo_;
    bool integrityAssessmentInfoIsSet_;
    float nationality_;
    bool nationalityIsSet_;
    float name_;
    bool nameIsSet_;
    float address_;
    bool addressIsSet_;
    float drivingClass_;
    bool drivingClassIsSet_;
    float issuingAuthority_;
    bool issuingAuthorityIsSet_;
    float birthDate_;
    bool birthDateIsSet_;
    std::vector<QualificationCategoryConfidence> qualificationCategoryList_;
    bool qualificationCategoryListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationConfidence_H_
