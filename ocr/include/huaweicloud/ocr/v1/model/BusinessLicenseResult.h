
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_BusinessLicenseResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_BusinessLicenseResult_H_


#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  BusinessLicenseResult
    : public ModelBase
{
public:
    BusinessLicenseResult();
    virtual ~BusinessLicenseResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BusinessLicenseResult members

    /// <summary>
    /// - 老版本营业执照对应注册号。 - 新三证合一版本营业执照对应社会保障号。 
    /// </summary>

    std::string getRegistrationNumber() const;
    bool registrationNumberIsSet() const;
    void unsetregistrationNumber();
    void setRegistrationNumber(const std::string& value);

    /// <summary>
    /// 企业名称。 
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 公司/企业类型/主体类型/类型。 
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 住所/营业场所/企业住所/主要经营场所/经营场所。 
    /// </summary>

    std::string getAddress() const;
    bool addressIsSet() const;
    void unsetaddress();
    void setAddress(const std::string& value);

    /// <summary>
    /// 法定代表人/负责人/执行事务合伙人/投资人/经营者。 
    /// </summary>

    std::string getLegalRepresentative() const;
    bool legalRepresentativeIsSet() const;
    void unsetlegalRepresentative();
    void setLegalRepresentative(const std::string& value);

    /// <summary>
    /// 注册资本/出资额。 
    /// </summary>

    std::string getRegisteredCapital() const;
    bool registeredCapitalIsSet() const;
    void unsetregisteredCapital();
    void setRegisteredCapital(const std::string& value);

    /// <summary>
    /// 组成形式。 
    /// </summary>

    std::string getOrganizationForm() const;
    bool organizationFormIsSet() const;
    void unsetorganizationForm();
    void setOrganizationForm(const std::string& value);

    /// <summary>
    /// 成立日期/注册日期。 
    /// </summary>

    std::string getFoundDate() const;
    bool foundDateIsSet() const;
    void unsetfoundDate();
    void setFoundDate(const std::string& value);

    /// <summary>
    /// 营业期限。 
    /// </summary>

    std::string getBusinessTerm() const;
    bool businessTermIsSet() const;
    void unsetbusinessTerm();
    void setBusinessTerm(const std::string& value);

    /// <summary>
    /// 经营范围。 
    /// </summary>

    std::string getBusinessScope() const;
    bool businessScopeIsSet() const;
    void unsetbusinessScope();
    void setBusinessScope(const std::string& value);

    /// <summary>
    /// 发照日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 相关字段的置信度信息，置信度越大，表示本次识别的对应字段的可靠性越高，在统计意义上，置信度越大，准确率越高。 置信度由算法给出，不直接等价于对应字段的准确率。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string registrationNumber_;
    bool registrationNumberIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string type_;
    bool typeIsSet_;
    std::string address_;
    bool addressIsSet_;
    std::string legalRepresentative_;
    bool legalRepresentativeIsSet_;
    std::string registeredCapital_;
    bool registeredCapitalIsSet_;
    std::string organizationForm_;
    bool organizationFormIsSet_;
    std::string foundDate_;
    bool foundDateIsSet_;
    std::string businessTerm_;
    bool businessTermIsSet_;
    std::string businessScope_;
    bool businessScopeIsSet_;
    std::string issueDate_;
    bool issueDateIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_BusinessLicenseResult_H_
