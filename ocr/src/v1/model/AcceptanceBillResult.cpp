

#include "huaweicloud/ocr/v1/model/AcceptanceBillResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AcceptanceBillResult::AcceptanceBillResult()
{
    issueDate_ = "";
    issueDateIsSet_ = false;
    dueDate_ = "";
    dueDateIsSet_ = false;
    billStatus_ = "";
    billStatusIsSet_ = false;
    billNumber_ = "";
    billNumberIsSet_ = false;
    issuerFullName_ = "";
    issuerFullNameIsSet_ = false;
    issuerAccount_ = "";
    issuerAccountIsSet_ = false;
    issuerBankName_ = "";
    issuerBankNameIsSet_ = false;
    issuerBankNumber_ = "";
    issuerBankNumberIsSet_ = false;
    payeeFullName_ = "";
    payeeFullNameIsSet_ = false;
    payeeAccount_ = "";
    payeeAccountIsSet_ = false;
    payeeBankName_ = "";
    payeeBankNameIsSet_ = false;
    payeeBankNumber_ = "";
    payeeBankNumberIsSet_ = false;
    issuanceGuarantorName_ = "";
    issuanceGuarantorNameIsSet_ = false;
    issuanceGuarantorAddress_ = "";
    issuanceGuarantorAddressIsSet_ = false;
    issuanceGuarantorAccount_ = "";
    issuanceGuarantorAccountIsSet_ = false;
    issuanceGuaranteeDate_ = "";
    issuanceGuaranteeDateIsSet_ = false;
    issuanceGuarantorBankNumber_ = "";
    issuanceGuarantorBankNumberIsSet_ = false;
    issuanceGuarantorBankName_ = "";
    issuanceGuarantorBankNameIsSet_ = false;
    amountInWords_ = "";
    amountInWordsIsSet_ = false;
    amountInFigures_ = "";
    amountInFiguresIsSet_ = false;
    acceptorFullName_ = "";
    acceptorFullNameIsSet_ = false;
    acceptorAccount_ = "";
    acceptorAccountIsSet_ = false;
    acceptorBankNumber_ = "";
    acceptorBankNumberIsSet_ = false;
    acceptorBankName_ = "";
    acceptorBankNameIsSet_ = false;
    contractNumber_ = "";
    contractNumberIsSet_ = false;
    assignability_ = "";
    assignabilityIsSet_ = false;
    issuerCommitment_ = "";
    issuerCommitmentIsSet_ = false;
    acceptorCommitment_ = "";
    acceptorCommitmentIsSet_ = false;
    acceptanceDate_ = "";
    acceptanceDateIsSet_ = false;
    acceptanceGuarantorName_ = "";
    acceptanceGuarantorNameIsSet_ = false;
    acceptanceGuarantorAddress_ = "";
    acceptanceGuarantorAddressIsSet_ = false;
    acceptanceGuarantorAccount_ = "";
    acceptanceGuarantorAccountIsSet_ = false;
    acceptanceGuaranteeDate_ = "";
    acceptanceGuaranteeDateIsSet_ = false;
    acceptanceGuarantorBankNumber_ = "";
    acceptanceGuarantorBankNumberIsSet_ = false;
    acceptanceGuarantorBankName_ = "";
    acceptanceGuarantorBankNameIsSet_ = false;
    issuerRatingEntity_ = "";
    issuerRatingEntityIsSet_ = false;
    issuerCreditRating_ = "";
    issuerCreditRatingIsSet_ = false;
    issuerRatingDueDate_ = "";
    issuerRatingDueDateIsSet_ = false;
    acceptorRatingEntity_ = "";
    acceptorRatingEntityIsSet_ = false;
    acceptorCreditRating_ = "";
    acceptorCreditRatingIsSet_ = false;
    acceptorRatingDueDate_ = "";
    acceptorRatingDueDateIsSet_ = false;
    billPackageNumber_ = "";
    billPackageNumberIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
    confidenceIsSet_ = false;
}

AcceptanceBillResult::~AcceptanceBillResult() = default;

void AcceptanceBillResult::validate()
{
}

web::json::value AcceptanceBillResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(dueDateIsSet_) {
        val[utility::conversions::to_string_t("due_date")] = ModelBase::toJson(dueDate_);
    }
    if(billStatusIsSet_) {
        val[utility::conversions::to_string_t("bill_status")] = ModelBase::toJson(billStatus_);
    }
    if(billNumberIsSet_) {
        val[utility::conversions::to_string_t("bill_number")] = ModelBase::toJson(billNumber_);
    }
    if(issuerFullNameIsSet_) {
        val[utility::conversions::to_string_t("issuer_full_name")] = ModelBase::toJson(issuerFullName_);
    }
    if(issuerAccountIsSet_) {
        val[utility::conversions::to_string_t("issuer_account")] = ModelBase::toJson(issuerAccount_);
    }
    if(issuerBankNameIsSet_) {
        val[utility::conversions::to_string_t("issuer_bank_name")] = ModelBase::toJson(issuerBankName_);
    }
    if(issuerBankNumberIsSet_) {
        val[utility::conversions::to_string_t("issuer_bank_number")] = ModelBase::toJson(issuerBankNumber_);
    }
    if(payeeFullNameIsSet_) {
        val[utility::conversions::to_string_t("payee_full_name")] = ModelBase::toJson(payeeFullName_);
    }
    if(payeeAccountIsSet_) {
        val[utility::conversions::to_string_t("payee_account")] = ModelBase::toJson(payeeAccount_);
    }
    if(payeeBankNameIsSet_) {
        val[utility::conversions::to_string_t("payee_bank_name")] = ModelBase::toJson(payeeBankName_);
    }
    if(payeeBankNumberIsSet_) {
        val[utility::conversions::to_string_t("payee_bank_number")] = ModelBase::toJson(payeeBankNumber_);
    }
    if(issuanceGuarantorNameIsSet_) {
        val[utility::conversions::to_string_t("issuance_guarantor_name")] = ModelBase::toJson(issuanceGuarantorName_);
    }
    if(issuanceGuarantorAddressIsSet_) {
        val[utility::conversions::to_string_t("issuance_guarantor_address")] = ModelBase::toJson(issuanceGuarantorAddress_);
    }
    if(issuanceGuarantorAccountIsSet_) {
        val[utility::conversions::to_string_t("issuance_guarantor_account")] = ModelBase::toJson(issuanceGuarantorAccount_);
    }
    if(issuanceGuaranteeDateIsSet_) {
        val[utility::conversions::to_string_t("issuance_guarantee_date")] = ModelBase::toJson(issuanceGuaranteeDate_);
    }
    if(issuanceGuarantorBankNumberIsSet_) {
        val[utility::conversions::to_string_t("issuance_guarantor_bank_number")] = ModelBase::toJson(issuanceGuarantorBankNumber_);
    }
    if(issuanceGuarantorBankNameIsSet_) {
        val[utility::conversions::to_string_t("issuance_guarantor_bank_name")] = ModelBase::toJson(issuanceGuarantorBankName_);
    }
    if(amountInWordsIsSet_) {
        val[utility::conversions::to_string_t("amount_in_words")] = ModelBase::toJson(amountInWords_);
    }
    if(amountInFiguresIsSet_) {
        val[utility::conversions::to_string_t("amount_in_figures")] = ModelBase::toJson(amountInFigures_);
    }
    if(acceptorFullNameIsSet_) {
        val[utility::conversions::to_string_t("acceptor_full_name")] = ModelBase::toJson(acceptorFullName_);
    }
    if(acceptorAccountIsSet_) {
        val[utility::conversions::to_string_t("acceptor_account")] = ModelBase::toJson(acceptorAccount_);
    }
    if(acceptorBankNumberIsSet_) {
        val[utility::conversions::to_string_t("acceptor_bank_number")] = ModelBase::toJson(acceptorBankNumber_);
    }
    if(acceptorBankNameIsSet_) {
        val[utility::conversions::to_string_t("acceptor_bank_name")] = ModelBase::toJson(acceptorBankName_);
    }
    if(contractNumberIsSet_) {
        val[utility::conversions::to_string_t("contract_number")] = ModelBase::toJson(contractNumber_);
    }
    if(assignabilityIsSet_) {
        val[utility::conversions::to_string_t("assignability")] = ModelBase::toJson(assignability_);
    }
    if(issuerCommitmentIsSet_) {
        val[utility::conversions::to_string_t("issuer_commitment")] = ModelBase::toJson(issuerCommitment_);
    }
    if(acceptorCommitmentIsSet_) {
        val[utility::conversions::to_string_t("acceptor_commitment")] = ModelBase::toJson(acceptorCommitment_);
    }
    if(acceptanceDateIsSet_) {
        val[utility::conversions::to_string_t("acceptance_date")] = ModelBase::toJson(acceptanceDate_);
    }
    if(acceptanceGuarantorNameIsSet_) {
        val[utility::conversions::to_string_t("acceptance_guarantor_name")] = ModelBase::toJson(acceptanceGuarantorName_);
    }
    if(acceptanceGuarantorAddressIsSet_) {
        val[utility::conversions::to_string_t("acceptance_guarantor_address")] = ModelBase::toJson(acceptanceGuarantorAddress_);
    }
    if(acceptanceGuarantorAccountIsSet_) {
        val[utility::conversions::to_string_t("acceptance_guarantor_account")] = ModelBase::toJson(acceptanceGuarantorAccount_);
    }
    if(acceptanceGuaranteeDateIsSet_) {
        val[utility::conversions::to_string_t("acceptance_guarantee_date")] = ModelBase::toJson(acceptanceGuaranteeDate_);
    }
    if(acceptanceGuarantorBankNumberIsSet_) {
        val[utility::conversions::to_string_t("acceptance_guarantor_bank_number")] = ModelBase::toJson(acceptanceGuarantorBankNumber_);
    }
    if(acceptanceGuarantorBankNameIsSet_) {
        val[utility::conversions::to_string_t("acceptance_guarantor_bank_name")] = ModelBase::toJson(acceptanceGuarantorBankName_);
    }
    if(issuerRatingEntityIsSet_) {
        val[utility::conversions::to_string_t("issuer_rating_entity")] = ModelBase::toJson(issuerRatingEntity_);
    }
    if(issuerCreditRatingIsSet_) {
        val[utility::conversions::to_string_t("issuer_credit_rating")] = ModelBase::toJson(issuerCreditRating_);
    }
    if(issuerRatingDueDateIsSet_) {
        val[utility::conversions::to_string_t("issuer_rating_due_date")] = ModelBase::toJson(issuerRatingDueDate_);
    }
    if(acceptorRatingEntityIsSet_) {
        val[utility::conversions::to_string_t("acceptor_rating_entity")] = ModelBase::toJson(acceptorRatingEntity_);
    }
    if(acceptorCreditRatingIsSet_) {
        val[utility::conversions::to_string_t("acceptor_credit_rating")] = ModelBase::toJson(acceptorCreditRating_);
    }
    if(acceptorRatingDueDateIsSet_) {
        val[utility::conversions::to_string_t("acceptor_rating_due_date")] = ModelBase::toJson(acceptorRatingDueDate_);
    }
    if(billPackageNumberIsSet_) {
        val[utility::conversions::to_string_t("bill_package_number")] = ModelBase::toJson(billPackageNumber_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool AcceptanceBillResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bill_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bill_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bill_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bill_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_bank_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_bank_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerBankName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_bank_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_bank_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerBankNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payee_full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payee_full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayeeFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payee_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payee_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayeeAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payee_bank_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payee_bank_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayeeBankName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payee_bank_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payee_bank_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPayeeBankNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuance_guarantor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuance_guarantor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuanceGuarantorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuance_guarantor_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuance_guarantor_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuanceGuarantorAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuance_guarantor_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuance_guarantor_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuanceGuarantorAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuance_guarantee_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuance_guarantee_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuanceGuaranteeDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuance_guarantor_bank_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuance_guarantor_bank_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuanceGuarantorBankNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuance_guarantor_bank_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuance_guarantor_bank_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuanceGuarantorBankName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount_in_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount_in_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmountInWords(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount_in_figures"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount_in_figures"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmountInFigures(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_bank_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_bank_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorBankNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_bank_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_bank_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorBankName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contract_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contract_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContractNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignability"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignability(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_commitment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_commitment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerCommitment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_commitment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_commitment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorCommitment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptance_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptance_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptanceDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptance_guarantor_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptance_guarantor_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptanceGuarantorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptance_guarantor_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptance_guarantor_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptanceGuarantorAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptance_guarantor_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptance_guarantor_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptanceGuarantorAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptance_guarantee_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptance_guarantee_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptanceGuaranteeDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptance_guarantor_bank_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptance_guarantor_bank_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptanceGuarantorBankNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptance_guarantor_bank_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptance_guarantor_bank_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptanceGuarantorBankName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_rating_entity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_rating_entity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerRatingEntity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_credit_rating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_credit_rating"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerCreditRating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer_rating_due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer_rating_due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuerRatingDueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_rating_entity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_rating_entity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorRatingEntity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_credit_rating"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_credit_rating"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorCreditRating(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("acceptor_rating_due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("acceptor_rating_due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptorRatingDueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bill_package_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bill_package_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillPackageNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remarks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string AcceptanceBillResult::getIssueDate() const
{
    return issueDate_;
}

void AcceptanceBillResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool AcceptanceBillResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void AcceptanceBillResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string AcceptanceBillResult::getDueDate() const
{
    return dueDate_;
}

void AcceptanceBillResult::setDueDate(const std::string& value)
{
    dueDate_ = value;
    dueDateIsSet_ = true;
}

bool AcceptanceBillResult::dueDateIsSet() const
{
    return dueDateIsSet_;
}

void AcceptanceBillResult::unsetdueDate()
{
    dueDateIsSet_ = false;
}

std::string AcceptanceBillResult::getBillStatus() const
{
    return billStatus_;
}

void AcceptanceBillResult::setBillStatus(const std::string& value)
{
    billStatus_ = value;
    billStatusIsSet_ = true;
}

bool AcceptanceBillResult::billStatusIsSet() const
{
    return billStatusIsSet_;
}

void AcceptanceBillResult::unsetbillStatus()
{
    billStatusIsSet_ = false;
}

std::string AcceptanceBillResult::getBillNumber() const
{
    return billNumber_;
}

void AcceptanceBillResult::setBillNumber(const std::string& value)
{
    billNumber_ = value;
    billNumberIsSet_ = true;
}

bool AcceptanceBillResult::billNumberIsSet() const
{
    return billNumberIsSet_;
}

void AcceptanceBillResult::unsetbillNumber()
{
    billNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerFullName() const
{
    return issuerFullName_;
}

void AcceptanceBillResult::setIssuerFullName(const std::string& value)
{
    issuerFullName_ = value;
    issuerFullNameIsSet_ = true;
}

bool AcceptanceBillResult::issuerFullNameIsSet() const
{
    return issuerFullNameIsSet_;
}

void AcceptanceBillResult::unsetissuerFullName()
{
    issuerFullNameIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerAccount() const
{
    return issuerAccount_;
}

void AcceptanceBillResult::setIssuerAccount(const std::string& value)
{
    issuerAccount_ = value;
    issuerAccountIsSet_ = true;
}

bool AcceptanceBillResult::issuerAccountIsSet() const
{
    return issuerAccountIsSet_;
}

void AcceptanceBillResult::unsetissuerAccount()
{
    issuerAccountIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerBankName() const
{
    return issuerBankName_;
}

void AcceptanceBillResult::setIssuerBankName(const std::string& value)
{
    issuerBankName_ = value;
    issuerBankNameIsSet_ = true;
}

bool AcceptanceBillResult::issuerBankNameIsSet() const
{
    return issuerBankNameIsSet_;
}

void AcceptanceBillResult::unsetissuerBankName()
{
    issuerBankNameIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerBankNumber() const
{
    return issuerBankNumber_;
}

void AcceptanceBillResult::setIssuerBankNumber(const std::string& value)
{
    issuerBankNumber_ = value;
    issuerBankNumberIsSet_ = true;
}

bool AcceptanceBillResult::issuerBankNumberIsSet() const
{
    return issuerBankNumberIsSet_;
}

void AcceptanceBillResult::unsetissuerBankNumber()
{
    issuerBankNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getPayeeFullName() const
{
    return payeeFullName_;
}

void AcceptanceBillResult::setPayeeFullName(const std::string& value)
{
    payeeFullName_ = value;
    payeeFullNameIsSet_ = true;
}

bool AcceptanceBillResult::payeeFullNameIsSet() const
{
    return payeeFullNameIsSet_;
}

void AcceptanceBillResult::unsetpayeeFullName()
{
    payeeFullNameIsSet_ = false;
}

std::string AcceptanceBillResult::getPayeeAccount() const
{
    return payeeAccount_;
}

void AcceptanceBillResult::setPayeeAccount(const std::string& value)
{
    payeeAccount_ = value;
    payeeAccountIsSet_ = true;
}

bool AcceptanceBillResult::payeeAccountIsSet() const
{
    return payeeAccountIsSet_;
}

void AcceptanceBillResult::unsetpayeeAccount()
{
    payeeAccountIsSet_ = false;
}

std::string AcceptanceBillResult::getPayeeBankName() const
{
    return payeeBankName_;
}

void AcceptanceBillResult::setPayeeBankName(const std::string& value)
{
    payeeBankName_ = value;
    payeeBankNameIsSet_ = true;
}

bool AcceptanceBillResult::payeeBankNameIsSet() const
{
    return payeeBankNameIsSet_;
}

void AcceptanceBillResult::unsetpayeeBankName()
{
    payeeBankNameIsSet_ = false;
}

std::string AcceptanceBillResult::getPayeeBankNumber() const
{
    return payeeBankNumber_;
}

void AcceptanceBillResult::setPayeeBankNumber(const std::string& value)
{
    payeeBankNumber_ = value;
    payeeBankNumberIsSet_ = true;
}

bool AcceptanceBillResult::payeeBankNumberIsSet() const
{
    return payeeBankNumberIsSet_;
}

void AcceptanceBillResult::unsetpayeeBankNumber()
{
    payeeBankNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuanceGuarantorName() const
{
    return issuanceGuarantorName_;
}

void AcceptanceBillResult::setIssuanceGuarantorName(const std::string& value)
{
    issuanceGuarantorName_ = value;
    issuanceGuarantorNameIsSet_ = true;
}

bool AcceptanceBillResult::issuanceGuarantorNameIsSet() const
{
    return issuanceGuarantorNameIsSet_;
}

void AcceptanceBillResult::unsetissuanceGuarantorName()
{
    issuanceGuarantorNameIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuanceGuarantorAddress() const
{
    return issuanceGuarantorAddress_;
}

void AcceptanceBillResult::setIssuanceGuarantorAddress(const std::string& value)
{
    issuanceGuarantorAddress_ = value;
    issuanceGuarantorAddressIsSet_ = true;
}

bool AcceptanceBillResult::issuanceGuarantorAddressIsSet() const
{
    return issuanceGuarantorAddressIsSet_;
}

void AcceptanceBillResult::unsetissuanceGuarantorAddress()
{
    issuanceGuarantorAddressIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuanceGuarantorAccount() const
{
    return issuanceGuarantorAccount_;
}

void AcceptanceBillResult::setIssuanceGuarantorAccount(const std::string& value)
{
    issuanceGuarantorAccount_ = value;
    issuanceGuarantorAccountIsSet_ = true;
}

bool AcceptanceBillResult::issuanceGuarantorAccountIsSet() const
{
    return issuanceGuarantorAccountIsSet_;
}

void AcceptanceBillResult::unsetissuanceGuarantorAccount()
{
    issuanceGuarantorAccountIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuanceGuaranteeDate() const
{
    return issuanceGuaranteeDate_;
}

void AcceptanceBillResult::setIssuanceGuaranteeDate(const std::string& value)
{
    issuanceGuaranteeDate_ = value;
    issuanceGuaranteeDateIsSet_ = true;
}

bool AcceptanceBillResult::issuanceGuaranteeDateIsSet() const
{
    return issuanceGuaranteeDateIsSet_;
}

void AcceptanceBillResult::unsetissuanceGuaranteeDate()
{
    issuanceGuaranteeDateIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuanceGuarantorBankNumber() const
{
    return issuanceGuarantorBankNumber_;
}

void AcceptanceBillResult::setIssuanceGuarantorBankNumber(const std::string& value)
{
    issuanceGuarantorBankNumber_ = value;
    issuanceGuarantorBankNumberIsSet_ = true;
}

bool AcceptanceBillResult::issuanceGuarantorBankNumberIsSet() const
{
    return issuanceGuarantorBankNumberIsSet_;
}

void AcceptanceBillResult::unsetissuanceGuarantorBankNumber()
{
    issuanceGuarantorBankNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuanceGuarantorBankName() const
{
    return issuanceGuarantorBankName_;
}

void AcceptanceBillResult::setIssuanceGuarantorBankName(const std::string& value)
{
    issuanceGuarantorBankName_ = value;
    issuanceGuarantorBankNameIsSet_ = true;
}

bool AcceptanceBillResult::issuanceGuarantorBankNameIsSet() const
{
    return issuanceGuarantorBankNameIsSet_;
}

void AcceptanceBillResult::unsetissuanceGuarantorBankName()
{
    issuanceGuarantorBankNameIsSet_ = false;
}

std::string AcceptanceBillResult::getAmountInWords() const
{
    return amountInWords_;
}

void AcceptanceBillResult::setAmountInWords(const std::string& value)
{
    amountInWords_ = value;
    amountInWordsIsSet_ = true;
}

bool AcceptanceBillResult::amountInWordsIsSet() const
{
    return amountInWordsIsSet_;
}

void AcceptanceBillResult::unsetamountInWords()
{
    amountInWordsIsSet_ = false;
}

std::string AcceptanceBillResult::getAmountInFigures() const
{
    return amountInFigures_;
}

void AcceptanceBillResult::setAmountInFigures(const std::string& value)
{
    amountInFigures_ = value;
    amountInFiguresIsSet_ = true;
}

bool AcceptanceBillResult::amountInFiguresIsSet() const
{
    return amountInFiguresIsSet_;
}

void AcceptanceBillResult::unsetamountInFigures()
{
    amountInFiguresIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorFullName() const
{
    return acceptorFullName_;
}

void AcceptanceBillResult::setAcceptorFullName(const std::string& value)
{
    acceptorFullName_ = value;
    acceptorFullNameIsSet_ = true;
}

bool AcceptanceBillResult::acceptorFullNameIsSet() const
{
    return acceptorFullNameIsSet_;
}

void AcceptanceBillResult::unsetacceptorFullName()
{
    acceptorFullNameIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorAccount() const
{
    return acceptorAccount_;
}

void AcceptanceBillResult::setAcceptorAccount(const std::string& value)
{
    acceptorAccount_ = value;
    acceptorAccountIsSet_ = true;
}

bool AcceptanceBillResult::acceptorAccountIsSet() const
{
    return acceptorAccountIsSet_;
}

void AcceptanceBillResult::unsetacceptorAccount()
{
    acceptorAccountIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorBankNumber() const
{
    return acceptorBankNumber_;
}

void AcceptanceBillResult::setAcceptorBankNumber(const std::string& value)
{
    acceptorBankNumber_ = value;
    acceptorBankNumberIsSet_ = true;
}

bool AcceptanceBillResult::acceptorBankNumberIsSet() const
{
    return acceptorBankNumberIsSet_;
}

void AcceptanceBillResult::unsetacceptorBankNumber()
{
    acceptorBankNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorBankName() const
{
    return acceptorBankName_;
}

void AcceptanceBillResult::setAcceptorBankName(const std::string& value)
{
    acceptorBankName_ = value;
    acceptorBankNameIsSet_ = true;
}

bool AcceptanceBillResult::acceptorBankNameIsSet() const
{
    return acceptorBankNameIsSet_;
}

void AcceptanceBillResult::unsetacceptorBankName()
{
    acceptorBankNameIsSet_ = false;
}

std::string AcceptanceBillResult::getContractNumber() const
{
    return contractNumber_;
}

void AcceptanceBillResult::setContractNumber(const std::string& value)
{
    contractNumber_ = value;
    contractNumberIsSet_ = true;
}

bool AcceptanceBillResult::contractNumberIsSet() const
{
    return contractNumberIsSet_;
}

void AcceptanceBillResult::unsetcontractNumber()
{
    contractNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getAssignability() const
{
    return assignability_;
}

void AcceptanceBillResult::setAssignability(const std::string& value)
{
    assignability_ = value;
    assignabilityIsSet_ = true;
}

bool AcceptanceBillResult::assignabilityIsSet() const
{
    return assignabilityIsSet_;
}

void AcceptanceBillResult::unsetassignability()
{
    assignabilityIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerCommitment() const
{
    return issuerCommitment_;
}

void AcceptanceBillResult::setIssuerCommitment(const std::string& value)
{
    issuerCommitment_ = value;
    issuerCommitmentIsSet_ = true;
}

bool AcceptanceBillResult::issuerCommitmentIsSet() const
{
    return issuerCommitmentIsSet_;
}

void AcceptanceBillResult::unsetissuerCommitment()
{
    issuerCommitmentIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorCommitment() const
{
    return acceptorCommitment_;
}

void AcceptanceBillResult::setAcceptorCommitment(const std::string& value)
{
    acceptorCommitment_ = value;
    acceptorCommitmentIsSet_ = true;
}

bool AcceptanceBillResult::acceptorCommitmentIsSet() const
{
    return acceptorCommitmentIsSet_;
}

void AcceptanceBillResult::unsetacceptorCommitment()
{
    acceptorCommitmentIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptanceDate() const
{
    return acceptanceDate_;
}

void AcceptanceBillResult::setAcceptanceDate(const std::string& value)
{
    acceptanceDate_ = value;
    acceptanceDateIsSet_ = true;
}

bool AcceptanceBillResult::acceptanceDateIsSet() const
{
    return acceptanceDateIsSet_;
}

void AcceptanceBillResult::unsetacceptanceDate()
{
    acceptanceDateIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptanceGuarantorName() const
{
    return acceptanceGuarantorName_;
}

void AcceptanceBillResult::setAcceptanceGuarantorName(const std::string& value)
{
    acceptanceGuarantorName_ = value;
    acceptanceGuarantorNameIsSet_ = true;
}

bool AcceptanceBillResult::acceptanceGuarantorNameIsSet() const
{
    return acceptanceGuarantorNameIsSet_;
}

void AcceptanceBillResult::unsetacceptanceGuarantorName()
{
    acceptanceGuarantorNameIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptanceGuarantorAddress() const
{
    return acceptanceGuarantorAddress_;
}

void AcceptanceBillResult::setAcceptanceGuarantorAddress(const std::string& value)
{
    acceptanceGuarantorAddress_ = value;
    acceptanceGuarantorAddressIsSet_ = true;
}

bool AcceptanceBillResult::acceptanceGuarantorAddressIsSet() const
{
    return acceptanceGuarantorAddressIsSet_;
}

void AcceptanceBillResult::unsetacceptanceGuarantorAddress()
{
    acceptanceGuarantorAddressIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptanceGuarantorAccount() const
{
    return acceptanceGuarantorAccount_;
}

void AcceptanceBillResult::setAcceptanceGuarantorAccount(const std::string& value)
{
    acceptanceGuarantorAccount_ = value;
    acceptanceGuarantorAccountIsSet_ = true;
}

bool AcceptanceBillResult::acceptanceGuarantorAccountIsSet() const
{
    return acceptanceGuarantorAccountIsSet_;
}

void AcceptanceBillResult::unsetacceptanceGuarantorAccount()
{
    acceptanceGuarantorAccountIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptanceGuaranteeDate() const
{
    return acceptanceGuaranteeDate_;
}

void AcceptanceBillResult::setAcceptanceGuaranteeDate(const std::string& value)
{
    acceptanceGuaranteeDate_ = value;
    acceptanceGuaranteeDateIsSet_ = true;
}

bool AcceptanceBillResult::acceptanceGuaranteeDateIsSet() const
{
    return acceptanceGuaranteeDateIsSet_;
}

void AcceptanceBillResult::unsetacceptanceGuaranteeDate()
{
    acceptanceGuaranteeDateIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptanceGuarantorBankNumber() const
{
    return acceptanceGuarantorBankNumber_;
}

void AcceptanceBillResult::setAcceptanceGuarantorBankNumber(const std::string& value)
{
    acceptanceGuarantorBankNumber_ = value;
    acceptanceGuarantorBankNumberIsSet_ = true;
}

bool AcceptanceBillResult::acceptanceGuarantorBankNumberIsSet() const
{
    return acceptanceGuarantorBankNumberIsSet_;
}

void AcceptanceBillResult::unsetacceptanceGuarantorBankNumber()
{
    acceptanceGuarantorBankNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptanceGuarantorBankName() const
{
    return acceptanceGuarantorBankName_;
}

void AcceptanceBillResult::setAcceptanceGuarantorBankName(const std::string& value)
{
    acceptanceGuarantorBankName_ = value;
    acceptanceGuarantorBankNameIsSet_ = true;
}

bool AcceptanceBillResult::acceptanceGuarantorBankNameIsSet() const
{
    return acceptanceGuarantorBankNameIsSet_;
}

void AcceptanceBillResult::unsetacceptanceGuarantorBankName()
{
    acceptanceGuarantorBankNameIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerRatingEntity() const
{
    return issuerRatingEntity_;
}

void AcceptanceBillResult::setIssuerRatingEntity(const std::string& value)
{
    issuerRatingEntity_ = value;
    issuerRatingEntityIsSet_ = true;
}

bool AcceptanceBillResult::issuerRatingEntityIsSet() const
{
    return issuerRatingEntityIsSet_;
}

void AcceptanceBillResult::unsetissuerRatingEntity()
{
    issuerRatingEntityIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerCreditRating() const
{
    return issuerCreditRating_;
}

void AcceptanceBillResult::setIssuerCreditRating(const std::string& value)
{
    issuerCreditRating_ = value;
    issuerCreditRatingIsSet_ = true;
}

bool AcceptanceBillResult::issuerCreditRatingIsSet() const
{
    return issuerCreditRatingIsSet_;
}

void AcceptanceBillResult::unsetissuerCreditRating()
{
    issuerCreditRatingIsSet_ = false;
}

std::string AcceptanceBillResult::getIssuerRatingDueDate() const
{
    return issuerRatingDueDate_;
}

void AcceptanceBillResult::setIssuerRatingDueDate(const std::string& value)
{
    issuerRatingDueDate_ = value;
    issuerRatingDueDateIsSet_ = true;
}

bool AcceptanceBillResult::issuerRatingDueDateIsSet() const
{
    return issuerRatingDueDateIsSet_;
}

void AcceptanceBillResult::unsetissuerRatingDueDate()
{
    issuerRatingDueDateIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorRatingEntity() const
{
    return acceptorRatingEntity_;
}

void AcceptanceBillResult::setAcceptorRatingEntity(const std::string& value)
{
    acceptorRatingEntity_ = value;
    acceptorRatingEntityIsSet_ = true;
}

bool AcceptanceBillResult::acceptorRatingEntityIsSet() const
{
    return acceptorRatingEntityIsSet_;
}

void AcceptanceBillResult::unsetacceptorRatingEntity()
{
    acceptorRatingEntityIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorCreditRating() const
{
    return acceptorCreditRating_;
}

void AcceptanceBillResult::setAcceptorCreditRating(const std::string& value)
{
    acceptorCreditRating_ = value;
    acceptorCreditRatingIsSet_ = true;
}

bool AcceptanceBillResult::acceptorCreditRatingIsSet() const
{
    return acceptorCreditRatingIsSet_;
}

void AcceptanceBillResult::unsetacceptorCreditRating()
{
    acceptorCreditRatingIsSet_ = false;
}

std::string AcceptanceBillResult::getAcceptorRatingDueDate() const
{
    return acceptorRatingDueDate_;
}

void AcceptanceBillResult::setAcceptorRatingDueDate(const std::string& value)
{
    acceptorRatingDueDate_ = value;
    acceptorRatingDueDateIsSet_ = true;
}

bool AcceptanceBillResult::acceptorRatingDueDateIsSet() const
{
    return acceptorRatingDueDateIsSet_;
}

void AcceptanceBillResult::unsetacceptorRatingDueDate()
{
    acceptorRatingDueDateIsSet_ = false;
}

std::string AcceptanceBillResult::getBillPackageNumber() const
{
    return billPackageNumber_;
}

void AcceptanceBillResult::setBillPackageNumber(const std::string& value)
{
    billPackageNumber_ = value;
    billPackageNumberIsSet_ = true;
}

bool AcceptanceBillResult::billPackageNumberIsSet() const
{
    return billPackageNumberIsSet_;
}

void AcceptanceBillResult::unsetbillPackageNumber()
{
    billPackageNumberIsSet_ = false;
}

std::string AcceptanceBillResult::getRemarks() const
{
    return remarks_;
}

void AcceptanceBillResult::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool AcceptanceBillResult::remarksIsSet() const
{
    return remarksIsSet_;
}

void AcceptanceBillResult::unsetremarks()
{
    remarksIsSet_ = false;
}

Object AcceptanceBillResult::getConfidence() const
{
    return confidence_;
}

void AcceptanceBillResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool AcceptanceBillResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void AcceptanceBillResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


