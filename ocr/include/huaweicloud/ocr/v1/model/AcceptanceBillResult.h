
#ifndef HUAWEICLOUD_SDK_OCR_V1_MODEL_AcceptanceBillResult_H_
#define HUAWEICLOUD_SDK_OCR_V1_MODEL_AcceptanceBillResult_H_

#include <huaweicloud/ocr/v1/OcrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_OCR_V1_EXPORT  AcceptanceBillResult
    : public ModelBase
{
public:
    AcceptanceBillResult();
    virtual ~AcceptanceBillResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AcceptanceBillResult members

    /// <summary>
    /// 出票日期。 
    /// </summary>

    std::string getIssueDate() const;
    bool issueDateIsSet() const;
    void unsetissueDate();
    void setIssueDate(const std::string& value);

    /// <summary>
    /// 汇票到期日。 
    /// </summary>

    std::string getDueDate() const;
    bool dueDateIsSet() const;
    void unsetdueDate();
    void setDueDate(const std::string& value);

    /// <summary>
    /// 票据状态。 
    /// </summary>

    std::string getBillStatus() const;
    bool billStatusIsSet() const;
    void unsetbillStatus();
    void setBillStatus(const std::string& value);

    /// <summary>
    /// 票据号码。 
    /// </summary>

    std::string getBillNumber() const;
    bool billNumberIsSet() const;
    void unsetbillNumber();
    void setBillNumber(const std::string& value);

    /// <summary>
    /// 出票人全称。 
    /// </summary>

    std::string getIssuerFullName() const;
    bool issuerFullNameIsSet() const;
    void unsetissuerFullName();
    void setIssuerFullName(const std::string& value);

    /// <summary>
    /// 出票人账号。 
    /// </summary>

    std::string getIssuerAccount() const;
    bool issuerAccountIsSet() const;
    void unsetissuerAccount();
    void setIssuerAccount(const std::string& value);

    /// <summary>
    /// 出票人开户银行。 
    /// </summary>

    std::string getIssuerBankName() const;
    bool issuerBankNameIsSet() const;
    void unsetissuerBankName();
    void setIssuerBankName(const std::string& value);

    /// <summary>
    /// 出票人开户行号。 
    /// </summary>

    std::string getIssuerBankNumber() const;
    bool issuerBankNumberIsSet() const;
    void unsetissuerBankNumber();
    void setIssuerBankNumber(const std::string& value);

    /// <summary>
    /// 收款人全称。 
    /// </summary>

    std::string getPayeeFullName() const;
    bool payeeFullNameIsSet() const;
    void unsetpayeeFullName();
    void setPayeeFullName(const std::string& value);

    /// <summary>
    /// 收款人账号。 
    /// </summary>

    std::string getPayeeAccount() const;
    bool payeeAccountIsSet() const;
    void unsetpayeeAccount();
    void setPayeeAccount(const std::string& value);

    /// <summary>
    /// 收款人开户银行。 
    /// </summary>

    std::string getPayeeBankName() const;
    bool payeeBankNameIsSet() const;
    void unsetpayeeBankName();
    void setPayeeBankName(const std::string& value);

    /// <summary>
    /// 收款人开户行号。 
    /// </summary>

    std::string getPayeeBankNumber() const;
    bool payeeBankNumberIsSet() const;
    void unsetpayeeBankNumber();
    void setPayeeBankNumber(const std::string& value);

    /// <summary>
    /// 出票保证人名称。 
    /// </summary>

    std::string getIssuanceGuarantorName() const;
    bool issuanceGuarantorNameIsSet() const;
    void unsetissuanceGuarantorName();
    void setIssuanceGuarantorName(const std::string& value);

    /// <summary>
    /// 出票保证人地址。 
    /// </summary>

    std::string getIssuanceGuarantorAddress() const;
    bool issuanceGuarantorAddressIsSet() const;
    void unsetissuanceGuarantorAddress();
    void setIssuanceGuarantorAddress(const std::string& value);

    /// <summary>
    /// 出票保证人账号。 
    /// </summary>

    std::string getIssuanceGuarantorAccount() const;
    bool issuanceGuarantorAccountIsSet() const;
    void unsetissuanceGuarantorAccount();
    void setIssuanceGuarantorAccount(const std::string& value);

    /// <summary>
    /// 出票保证日期。 
    /// </summary>

    std::string getIssuanceGuaranteeDate() const;
    bool issuanceGuaranteeDateIsSet() const;
    void unsetissuanceGuaranteeDate();
    void setIssuanceGuaranteeDate(const std::string& value);

    /// <summary>
    /// 出票保证人开户行行号。 
    /// </summary>

    std::string getIssuanceGuarantorBankNumber() const;
    bool issuanceGuarantorBankNumberIsSet() const;
    void unsetissuanceGuarantorBankNumber();
    void setIssuanceGuarantorBankNumber(const std::string& value);

    /// <summary>
    /// 出票保证人开户行名称。 
    /// </summary>

    std::string getIssuanceGuarantorBankName() const;
    bool issuanceGuarantorBankNameIsSet() const;
    void unsetissuanceGuarantorBankName();
    void setIssuanceGuarantorBankName(const std::string& value);

    /// <summary>
    /// 大写票据金额。 
    /// </summary>

    std::string getAmountInWords() const;
    bool amountInWordsIsSet() const;
    void unsetamountInWords();
    void setAmountInWords(const std::string& value);

    /// <summary>
    /// 小写票据金额。 
    /// </summary>

    std::string getAmountInFigures() const;
    bool amountInFiguresIsSet() const;
    void unsetamountInFigures();
    void setAmountInFigures(const std::string& value);

    /// <summary>
    /// 承兑人全称。 
    /// </summary>

    std::string getAcceptorFullName() const;
    bool acceptorFullNameIsSet() const;
    void unsetacceptorFullName();
    void setAcceptorFullName(const std::string& value);

    /// <summary>
    /// 承兑人账号。 
    /// </summary>

    std::string getAcceptorAccount() const;
    bool acceptorAccountIsSet() const;
    void unsetacceptorAccount();
    void setAcceptorAccount(const std::string& value);

    /// <summary>
    /// 承兑人开户行行号。 
    /// </summary>

    std::string getAcceptorBankNumber() const;
    bool acceptorBankNumberIsSet() const;
    void unsetacceptorBankNumber();
    void setAcceptorBankNumber(const std::string& value);

    /// <summary>
    /// 承兑人开户行名称。 
    /// </summary>

    std::string getAcceptorBankName() const;
    bool acceptorBankNameIsSet() const;
    void unsetacceptorBankName();
    void setAcceptorBankName(const std::string& value);

    /// <summary>
    /// 交易合同号。 
    /// </summary>

    std::string getContractNumber() const;
    bool contractNumberIsSet() const;
    void unsetcontractNumber();
    void setContractNumber(const std::string& value);

    /// <summary>
    /// 能否转让。 
    /// </summary>

    std::string getAssignability() const;
    bool assignabilityIsSet() const;
    void unsetassignability();
    void setAssignability(const std::string& value);

    /// <summary>
    /// 出票人承诺。 
    /// </summary>

    std::string getIssuerCommitment() const;
    bool issuerCommitmentIsSet() const;
    void unsetissuerCommitment();
    void setIssuerCommitment(const std::string& value);

    /// <summary>
    /// 承兑人承诺。 
    /// </summary>

    std::string getAcceptorCommitment() const;
    bool acceptorCommitmentIsSet() const;
    void unsetacceptorCommitment();
    void setAcceptorCommitment(const std::string& value);

    /// <summary>
    /// 承兑日期。 
    /// </summary>

    std::string getAcceptanceDate() const;
    bool acceptanceDateIsSet() const;
    void unsetacceptanceDate();
    void setAcceptanceDate(const std::string& value);

    /// <summary>
    /// 承兑保证人名称。 
    /// </summary>

    std::string getAcceptanceGuarantorName() const;
    bool acceptanceGuarantorNameIsSet() const;
    void unsetacceptanceGuarantorName();
    void setAcceptanceGuarantorName(const std::string& value);

    /// <summary>
    /// 承兑保证人地址。 
    /// </summary>

    std::string getAcceptanceGuarantorAddress() const;
    bool acceptanceGuarantorAddressIsSet() const;
    void unsetacceptanceGuarantorAddress();
    void setAcceptanceGuarantorAddress(const std::string& value);

    /// <summary>
    /// 承兑保证人账号。 
    /// </summary>

    std::string getAcceptanceGuarantorAccount() const;
    bool acceptanceGuarantorAccountIsSet() const;
    void unsetacceptanceGuarantorAccount();
    void setAcceptanceGuarantorAccount(const std::string& value);

    /// <summary>
    /// 承兑保证日期。 
    /// </summary>

    std::string getAcceptanceGuaranteeDate() const;
    bool acceptanceGuaranteeDateIsSet() const;
    void unsetacceptanceGuaranteeDate();
    void setAcceptanceGuaranteeDate(const std::string& value);

    /// <summary>
    /// 承兑保证人开户行行号。 
    /// </summary>

    std::string getAcceptanceGuarantorBankNumber() const;
    bool acceptanceGuarantorBankNumberIsSet() const;
    void unsetacceptanceGuarantorBankNumber();
    void setAcceptanceGuarantorBankNumber(const std::string& value);

    /// <summary>
    /// 承兑保证人开户行名称。 
    /// </summary>

    std::string getAcceptanceGuarantorBankName() const;
    bool acceptanceGuarantorBankNameIsSet() const;
    void unsetacceptanceGuarantorBankName();
    void setAcceptanceGuarantorBankName(const std::string& value);

    /// <summary>
    /// 出票人评级主体。 
    /// </summary>

    std::string getIssuerRatingEntity() const;
    bool issuerRatingEntityIsSet() const;
    void unsetissuerRatingEntity();
    void setIssuerRatingEntity(const std::string& value);

    /// <summary>
    /// 出票人信用等级。 
    /// </summary>

    std::string getIssuerCreditRating() const;
    bool issuerCreditRatingIsSet() const;
    void unsetissuerCreditRating();
    void setIssuerCreditRating(const std::string& value);

    /// <summary>
    /// 出票人评级到期日。 
    /// </summary>

    std::string getIssuerRatingDueDate() const;
    bool issuerRatingDueDateIsSet() const;
    void unsetissuerRatingDueDate();
    void setIssuerRatingDueDate(const std::string& value);

    /// <summary>
    /// 承兑人评级主体。 
    /// </summary>

    std::string getAcceptorRatingEntity() const;
    bool acceptorRatingEntityIsSet() const;
    void unsetacceptorRatingEntity();
    void setAcceptorRatingEntity(const std::string& value);

    /// <summary>
    /// 承兑人信用等级。 
    /// </summary>

    std::string getAcceptorCreditRating() const;
    bool acceptorCreditRatingIsSet() const;
    void unsetacceptorCreditRating();
    void setAcceptorCreditRating(const std::string& value);

    /// <summary>
    /// 承兑人评级到期日。 
    /// </summary>

    std::string getAcceptorRatingDueDate() const;
    bool acceptorRatingDueDateIsSet() const;
    void unsetacceptorRatingDueDate();
    void setAcceptorRatingDueDate(const std::string& value);

    /// <summary>
    /// 票据包号。 
    /// </summary>

    std::string getBillPackageNumber() const;
    bool billPackageNumberIsSet() const;
    void unsetbillPackageNumber();
    void setBillPackageNumber(const std::string& value);

    /// <summary>
    /// 备注。   
    /// </summary>

    std::string getRemarks() const;
    bool remarksIsSet() const;
    void unsetremarks();
    void setRemarks(const std::string& value);

    /// <summary>
    /// 各个字段的置信度。 
    /// </summary>

    Object getConfidence() const;
    bool confidenceIsSet() const;
    void unsetconfidence();
    void setConfidence(const Object& value);


protected:
    std::string issueDate_;
    bool issueDateIsSet_;
    std::string dueDate_;
    bool dueDateIsSet_;
    std::string billStatus_;
    bool billStatusIsSet_;
    std::string billNumber_;
    bool billNumberIsSet_;
    std::string issuerFullName_;
    bool issuerFullNameIsSet_;
    std::string issuerAccount_;
    bool issuerAccountIsSet_;
    std::string issuerBankName_;
    bool issuerBankNameIsSet_;
    std::string issuerBankNumber_;
    bool issuerBankNumberIsSet_;
    std::string payeeFullName_;
    bool payeeFullNameIsSet_;
    std::string payeeAccount_;
    bool payeeAccountIsSet_;
    std::string payeeBankName_;
    bool payeeBankNameIsSet_;
    std::string payeeBankNumber_;
    bool payeeBankNumberIsSet_;
    std::string issuanceGuarantorName_;
    bool issuanceGuarantorNameIsSet_;
    std::string issuanceGuarantorAddress_;
    bool issuanceGuarantorAddressIsSet_;
    std::string issuanceGuarantorAccount_;
    bool issuanceGuarantorAccountIsSet_;
    std::string issuanceGuaranteeDate_;
    bool issuanceGuaranteeDateIsSet_;
    std::string issuanceGuarantorBankNumber_;
    bool issuanceGuarantorBankNumberIsSet_;
    std::string issuanceGuarantorBankName_;
    bool issuanceGuarantorBankNameIsSet_;
    std::string amountInWords_;
    bool amountInWordsIsSet_;
    std::string amountInFigures_;
    bool amountInFiguresIsSet_;
    std::string acceptorFullName_;
    bool acceptorFullNameIsSet_;
    std::string acceptorAccount_;
    bool acceptorAccountIsSet_;
    std::string acceptorBankNumber_;
    bool acceptorBankNumberIsSet_;
    std::string acceptorBankName_;
    bool acceptorBankNameIsSet_;
    std::string contractNumber_;
    bool contractNumberIsSet_;
    std::string assignability_;
    bool assignabilityIsSet_;
    std::string issuerCommitment_;
    bool issuerCommitmentIsSet_;
    std::string acceptorCommitment_;
    bool acceptorCommitmentIsSet_;
    std::string acceptanceDate_;
    bool acceptanceDateIsSet_;
    std::string acceptanceGuarantorName_;
    bool acceptanceGuarantorNameIsSet_;
    std::string acceptanceGuarantorAddress_;
    bool acceptanceGuarantorAddressIsSet_;
    std::string acceptanceGuarantorAccount_;
    bool acceptanceGuarantorAccountIsSet_;
    std::string acceptanceGuaranteeDate_;
    bool acceptanceGuaranteeDateIsSet_;
    std::string acceptanceGuarantorBankNumber_;
    bool acceptanceGuarantorBankNumberIsSet_;
    std::string acceptanceGuarantorBankName_;
    bool acceptanceGuarantorBankNameIsSet_;
    std::string issuerRatingEntity_;
    bool issuerRatingEntityIsSet_;
    std::string issuerCreditRating_;
    bool issuerCreditRatingIsSet_;
    std::string issuerRatingDueDate_;
    bool issuerRatingDueDateIsSet_;
    std::string acceptorRatingEntity_;
    bool acceptorRatingEntityIsSet_;
    std::string acceptorCreditRating_;
    bool acceptorCreditRatingIsSet_;
    std::string acceptorRatingDueDate_;
    bool acceptorRatingDueDateIsSet_;
    std::string billPackageNumber_;
    bool billPackageNumberIsSet_;
    std::string remarks_;
    bool remarksIsSet_;
    Object confidence_;
    bool confidenceIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_OCR_V1_MODEL_AcceptanceBillResult_H_
