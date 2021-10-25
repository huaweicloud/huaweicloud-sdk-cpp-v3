
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ocr/v1/model/BeneficiaryItem.h>
#include <huaweicloud/ocr/v1/model/InsurancePolicyDetail.h>
#include <huaweicloud/ocr/v1/model/InsurantItem.h>
#include <string>
#include <huaweicloud/ocr/v1/model/InsuranceItem.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  InsurancePolicyResult
    : public ModelBase
{
public:
    InsurancePolicyResult();
    virtual ~InsurancePolicyResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// InsurancePolicyResult members

    /// <summary>
    /// 发卡行。 
    /// </summary>

    std::string getBankName() const;
    bool bankNameIsSet() const;
    void unsetbankName();
    void setBankName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getBillNumber() const;
    bool billNumberIsSet() const;
    void unsetbillNumber();
    void setBillNumber(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getCompany() const;
    bool companyIsSet() const;
    void unsetcompany();
    void setCompany(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getEffectiveDate() const;
    bool effectiveDateIsSet() const;
    void unseteffectiveDate();
    void setEffectiveDate(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getApplicantName() const;
    bool applicantNameIsSet() const;
    void unsetapplicantName();
    void setApplicantName(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getApplicantSex() const;
    bool applicantSexIsSet() const;
    void unsetapplicantSex();
    void setApplicantSex(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getApplicantBirthday() const;
    bool applicantBirthdayIsSet() const;
    void unsetapplicantBirthday();
    void setApplicantBirthday(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getApplicantIdType() const;
    bool applicantIdTypeIsSet() const;
    void unsetapplicantIdType();
    void setApplicantIdType(const InsurancePolicyDetail& value);

    /// <summary>
    /// 
    /// </summary>

    InsurancePolicyDetail getApplicantIdNumber() const;
    bool applicantIdNumberIsSet() const;
    void unsetapplicantIdNumber();
    void setApplicantIdNumber(const InsurancePolicyDetail& value);

    /// <summary>
    /// 被保人列表（第一个默认为主被保人）。 
    /// </summary>

    std::vector<InsurantItem>& getInsurantList();
    bool insurantListIsSet() const;
    void unsetinsurantList();
    void setInsurantList(const std::vector<InsurantItem>& value);

    /// <summary>
    /// 受益人列表。 
    /// </summary>

    std::vector<BeneficiaryItem>& getBeneficiaryList();
    bool beneficiaryListIsSet() const;
    void unsetbeneficiaryList();
    void setBeneficiaryList(const std::vector<BeneficiaryItem>& value);

    /// <summary>
    /// 保险项目信息列表。 
    /// </summary>

    std::vector<InsuranceItem>& getInsuranceList();
    bool insuranceListIsSet() const;
    void unsetinsuranceList();
    void setInsuranceList(const std::vector<InsuranceItem>& value);


protected:
    std::string bankName_;
    bool bankNameIsSet_;
    InsurancePolicyDetail billNumber_;
    bool billNumberIsSet_;
    InsurancePolicyDetail company_;
    bool companyIsSet_;
    InsurancePolicyDetail effectiveDate_;
    bool effectiveDateIsSet_;
    InsurancePolicyDetail applicantName_;
    bool applicantNameIsSet_;
    InsurancePolicyDetail applicantSex_;
    bool applicantSexIsSet_;
    InsurancePolicyDetail applicantBirthday_;
    bool applicantBirthdayIsSet_;
    InsurancePolicyDetail applicantIdType_;
    bool applicantIdTypeIsSet_;
    InsurancePolicyDetail applicantIdNumber_;
    bool applicantIdNumberIsSet_;
    std::vector<InsurantItem> insurantList_;
    bool insurantListIsSet_;
    std::vector<BeneficiaryItem> beneficiaryList_;
    bool beneficiaryListIsSet_;
    std::vector<InsuranceItem> insuranceList_;
    bool insuranceListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_InsurancePolicyResult_H_
