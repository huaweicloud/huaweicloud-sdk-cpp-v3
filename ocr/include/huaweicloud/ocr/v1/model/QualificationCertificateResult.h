
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCertificateResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCertificateResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/QualificationCategory.h>
#include <string>
#include <vector>
#include <huaweicloud/ocr/v1/model/QualificationConfidence.h>

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
class HUAWEICLOUD_OCR_V1_EXPORT  QualificationCertificateResult
    : public ModelBase
{
public:
    QualificationCertificateResult();
    virtual ~QualificationCertificateResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QualificationCertificateResult members

    /// <summary>
    /// 身份证号（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getIdNumber() const;
    bool idNumberIsSet() const;
    void unsetidNumber();
    void setIdNumber(const std::string& value);

    /// <summary>
    /// 考核时间（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getAssessmentDate() const;
    bool assessmentDateIsSet() const;
    void unsetassessmentDate();
    void setAssessmentDate(const std::string& value);

    /// <summary>
    /// 从业资格证号。 
    /// </summary>

    std::string getCertificateNumber() const;
    bool certificateNumberIsSet() const;
    void unsetcertificateNumber();
    void setCertificateNumber(const std::string& value);

    /// <summary>
    /// 档案号（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getFileNumber() const;
    bool fileNumberIsSet() const;
    void unsetfileNumber();
    void setFileNumber(const std::string& value);

    /// <summary>
    /// 福路通号（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getUnionCardNumber() const;
    bool unionCardNumberIsSet() const;
    void unsetunionCardNumber();
    void setUnionCardNumber(const std::string& value);

    /// <summary>
    /// 继续教育信息（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getContinuingEducationInfo() const;
    bool continuingEducationInfoIsSet() const;
    void unsetcontinuingEducationInfo();
    void setContinuingEducationInfo(const std::string& value);

    /// <summary>
    /// 性别（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getSex() const;
    bool sexIsSet() const;
    void unsetsex();
    void setSex(const std::string& value);

    /// <summary>
    /// 联系电话（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getPhoneNumber() const;
    bool phoneNumberIsSet() const;
    void unsetphoneNumber();
    void setPhoneNumber(const std::string& value);

    /// <summary>
    /// 登记时间（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getRegistrationDate() const;
    bool registrationDateIsSet() const;
    void unsetregistrationDate();
    void setRegistrationDate(const std::string& value);

    /// <summary>
    /// 单位（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getWorkUnit() const;
    bool workUnitIsSet() const;
    void unsetworkUnit();
    void setWorkUnit(const std::string& value);

    /// <summary>
    /// 诚信考核信息（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getIntegrityAssessmentInfo() const;
    bool integrityAssessmentInfoIsSet() const;
    void unsetintegrityAssessmentInfo();
    void setIntegrityAssessmentInfo(const std::string& value);

    /// <summary>
    /// 国籍（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getNationality() const;
    bool nationalityIsSet() const;
    void unsetnationality();
    void setNationality(const std::string& value);

    /// <summary>
    /// 姓名。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 住址。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 准驾车型（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getDrivingClass() const;
    bool drivingClassIsSet() const;
    void unsetdrivingClass();
    void setDrivingClass(const std::string& value);

    /// <summary>
    /// 发证机关（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getIssuingAuthority() const;
    bool issuingAuthorityIsSet() const;
    void unsetissuingAuthority();
    void setIssuingAuthority(const std::string& value);

    /// <summary>
    /// 出生日期（非必有，依赖对应从业资格证板式）。 
    /// </summary>

    std::string getBirthDate() const;
    bool birthDateIsSet() const;
    void unsetbirthDate();
    void setBirthDate(const std::string& value);

    /// <summary>
    /// 从业资格列表。 
    /// </summary>

    std::vector<QualificationCategory>& getQualificationCategoryList();
    bool qualificationCategoryListIsSet() const;
    void unsetqualificationCategoryList();
    void setQualificationCategoryList(const std::vector<QualificationCategory>& value);

    /// <summary>
    /// 
    /// </summary>

    QualificationConfidence getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const QualificationConfidence& value);


protected:
    std::string idNumber_;
    bool idNumberIsSet_;
    std::string assessmentDate_;
    bool assessmentDateIsSet_;
    std::string certificateNumber_;
    bool certificateNumberIsSet_;
    std::string fileNumber_;
    bool fileNumberIsSet_;
    std::string unionCardNumber_;
    bool unionCardNumberIsSet_;
    std::string continuingEducationInfo_;
    bool continuingEducationInfoIsSet_;
    std::string sex_;
    bool sexIsSet_;
    std::string phoneNumber_;
    bool phoneNumberIsSet_;
    std::string registrationDate_;
    bool registrationDateIsSet_;
    std::string workUnit_;
    bool workUnitIsSet_;
    std::string integrityAssessmentInfo_;
    bool integrityAssessmentInfoIsSet_;
    std::string nationality_;
    bool nationalityIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string drivingClass_;
    bool drivingClassIsSet_;
    std::string issuingAuthority_;
    bool issuingAuthorityIsSet_;
    std::string birthDate_;
    bool birthDateIsSet_;
    std::vector<QualificationCategory> qualificationCategoryList_;
    bool qualificationCategoryListIsSet_;
    QualificationConfidence confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_QualificationCertificateResult_H_
