

#include "huaweicloud/ocr/v1/model/VatInvoiceResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VatInvoiceResult::VatInvoiceResult()
{
    title_ = "";
    titleIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    invoiceTag_ = "";
    invoiceTagIsSet_ = false;
    sumAmount_ = "";
    sumAmountIsSet_ = false;
    sumTax_ = "";
    sumTaxIsSet_ = false;
    serialNumber_ = "";
    serialNumberIsSet_ = false;
    attribution_ = "";
    attributionIsSet_ = false;
    supervisionSealIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    printCode_ = "";
    printCodeIsSet_ = false;
    machineNumber_ = "";
    machineNumberIsSet_ = false;
    printNumber_ = "";
    printNumberIsSet_ = false;
    checkCode_ = "";
    checkCodeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    encryptionBlock_ = "";
    encryptionBlockIsSet_ = false;
    buyerName_ = "";
    buyerNameIsSet_ = false;
    buyerId_ = "";
    buyerIdIsSet_ = false;
    buyerAddress_ = "";
    buyerAddressIsSet_ = false;
    buyerBank_ = "";
    buyerBankIsSet_ = false;
    sellerName_ = "";
    sellerNameIsSet_ = false;
    sellerId_ = "";
    sellerIdIsSet_ = false;
    sellerAddress_ = "";
    sellerAddressIsSet_ = false;
    sellerBank_ = "";
    sellerBankIsSet_ = false;
    subtotalAmount_ = "";
    subtotalAmountIsSet_ = false;
    subtotalTax_ = "";
    subtotalTaxIsSet_ = false;
    total_ = "";
    totalIsSet_ = false;
    totalInWords_ = "";
    totalInWordsIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
    receiver_ = "";
    receiverIsSet_ = false;
    reviewer_ = "";
    reviewerIsSet_ = false;
    issuer_ = "";
    issuerIsSet_ = false;
    sellerSealIsSet_ = false;
    itemListIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    city_ = "";
    cityIsSet_ = false;
    confidenceIsSet_ = false;
    textLocationIsSet_ = false;
    belongBuyerName_ = "";
    belongBuyerNameIsSet_ = false;
    belongSellerName_ = "";
    belongSellerNameIsSet_ = false;
    belongVatCode_ = "";
    belongVatCodeIsSet_ = false;
    belongNumber_ = "";
    belongNumberIsSet_ = false;
    belongPages_ = "";
    belongPagesIsSet_ = false;
    belongCurrentPage_ = "";
    belongCurrentPageIsSet_ = false;
    belongRemarks_ = "";
    belongRemarksIsSet_ = false;
    belongIssueDate_ = "";
    belongIssueDateIsSet_ = false;
    salesMark_ = false;
    salesMarkIsSet_ = false;
    belongSumAmount_ = "";
    belongSumAmountIsSet_ = false;
    belongSumTax_ = "";
    belongSumTaxIsSet_ = false;
    belongSubtotalAmount_ = "";
    belongSubtotalAmountIsSet_ = false;
    belongSubtotalTax_ = "";
    belongSubtotalTaxIsSet_ = false;
    belongDiscountAmount_ = "";
    belongDiscountAmountIsSet_ = false;
    belongDiscountTax_ = "";
    belongDiscountTaxIsSet_ = false;
    belongItemListIsSet_ = false;
    passengerTravelItemListIsSet_ = false;
}

VatInvoiceResult::~VatInvoiceResult() = default;

void VatInvoiceResult::validate()
{
}

web::json::value VatInvoiceResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(invoiceTagIsSet_) {
        val[utility::conversions::to_string_t("invoice_tag")] = ModelBase::toJson(invoiceTag_);
    }
    if(sumAmountIsSet_) {
        val[utility::conversions::to_string_t("sum_amount")] = ModelBase::toJson(sumAmount_);
    }
    if(sumTaxIsSet_) {
        val[utility::conversions::to_string_t("sum_tax")] = ModelBase::toJson(sumTax_);
    }
    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }
    if(attributionIsSet_) {
        val[utility::conversions::to_string_t("attribution")] = ModelBase::toJson(attribution_);
    }
    if(supervisionSealIsSet_) {
        val[utility::conversions::to_string_t("supervision_seal")] = ModelBase::toJson(supervisionSeal_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(printCodeIsSet_) {
        val[utility::conversions::to_string_t("print_code")] = ModelBase::toJson(printCode_);
    }
    if(machineNumberIsSet_) {
        val[utility::conversions::to_string_t("machine_number")] = ModelBase::toJson(machineNumber_);
    }
    if(printNumberIsSet_) {
        val[utility::conversions::to_string_t("print_number")] = ModelBase::toJson(printNumber_);
    }
    if(checkCodeIsSet_) {
        val[utility::conversions::to_string_t("check_code")] = ModelBase::toJson(checkCode_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(encryptionBlockIsSet_) {
        val[utility::conversions::to_string_t("encryption_block")] = ModelBase::toJson(encryptionBlock_);
    }
    if(buyerNameIsSet_) {
        val[utility::conversions::to_string_t("buyer_name")] = ModelBase::toJson(buyerName_);
    }
    if(buyerIdIsSet_) {
        val[utility::conversions::to_string_t("buyer_id")] = ModelBase::toJson(buyerId_);
    }
    if(buyerAddressIsSet_) {
        val[utility::conversions::to_string_t("buyer_address")] = ModelBase::toJson(buyerAddress_);
    }
    if(buyerBankIsSet_) {
        val[utility::conversions::to_string_t("buyer_bank")] = ModelBase::toJson(buyerBank_);
    }
    if(sellerNameIsSet_) {
        val[utility::conversions::to_string_t("seller_name")] = ModelBase::toJson(sellerName_);
    }
    if(sellerIdIsSet_) {
        val[utility::conversions::to_string_t("seller_id")] = ModelBase::toJson(sellerId_);
    }
    if(sellerAddressIsSet_) {
        val[utility::conversions::to_string_t("seller_address")] = ModelBase::toJson(sellerAddress_);
    }
    if(sellerBankIsSet_) {
        val[utility::conversions::to_string_t("seller_bank")] = ModelBase::toJson(sellerBank_);
    }
    if(subtotalAmountIsSet_) {
        val[utility::conversions::to_string_t("subtotal_amount")] = ModelBase::toJson(subtotalAmount_);
    }
    if(subtotalTaxIsSet_) {
        val[utility::conversions::to_string_t("subtotal_tax")] = ModelBase::toJson(subtotalTax_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(totalInWordsIsSet_) {
        val[utility::conversions::to_string_t("total_in_words")] = ModelBase::toJson(totalInWords_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }
    if(receiverIsSet_) {
        val[utility::conversions::to_string_t("receiver")] = ModelBase::toJson(receiver_);
    }
    if(reviewerIsSet_) {
        val[utility::conversions::to_string_t("reviewer")] = ModelBase::toJson(reviewer_);
    }
    if(issuerIsSet_) {
        val[utility::conversions::to_string_t("issuer")] = ModelBase::toJson(issuer_);
    }
    if(sellerSealIsSet_) {
        val[utility::conversions::to_string_t("seller_seal")] = ModelBase::toJson(sellerSeal_);
    }
    if(itemListIsSet_) {
        val[utility::conversions::to_string_t("item_list")] = ModelBase::toJson(itemList_);
    }
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(cityIsSet_) {
        val[utility::conversions::to_string_t("city")] = ModelBase::toJson(city_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }
    if(belongBuyerNameIsSet_) {
        val[utility::conversions::to_string_t("belong_buyer_name")] = ModelBase::toJson(belongBuyerName_);
    }
    if(belongSellerNameIsSet_) {
        val[utility::conversions::to_string_t("belong_seller_name")] = ModelBase::toJson(belongSellerName_);
    }
    if(belongVatCodeIsSet_) {
        val[utility::conversions::to_string_t("belong_vat_code")] = ModelBase::toJson(belongVatCode_);
    }
    if(belongNumberIsSet_) {
        val[utility::conversions::to_string_t("belong_number")] = ModelBase::toJson(belongNumber_);
    }
    if(belongPagesIsSet_) {
        val[utility::conversions::to_string_t("belong_pages")] = ModelBase::toJson(belongPages_);
    }
    if(belongCurrentPageIsSet_) {
        val[utility::conversions::to_string_t("belong_current_page")] = ModelBase::toJson(belongCurrentPage_);
    }
    if(belongRemarksIsSet_) {
        val[utility::conversions::to_string_t("belong_remarks")] = ModelBase::toJson(belongRemarks_);
    }
    if(belongIssueDateIsSet_) {
        val[utility::conversions::to_string_t("belong_issue_date")] = ModelBase::toJson(belongIssueDate_);
    }
    if(salesMarkIsSet_) {
        val[utility::conversions::to_string_t("sales_mark")] = ModelBase::toJson(salesMark_);
    }
    if(belongSumAmountIsSet_) {
        val[utility::conversions::to_string_t("belong_sum_amount")] = ModelBase::toJson(belongSumAmount_);
    }
    if(belongSumTaxIsSet_) {
        val[utility::conversions::to_string_t("belong_sum_tax")] = ModelBase::toJson(belongSumTax_);
    }
    if(belongSubtotalAmountIsSet_) {
        val[utility::conversions::to_string_t("belong_subtotal_amount")] = ModelBase::toJson(belongSubtotalAmount_);
    }
    if(belongSubtotalTaxIsSet_) {
        val[utility::conversions::to_string_t("belong_subtotal_tax")] = ModelBase::toJson(belongSubtotalTax_);
    }
    if(belongDiscountAmountIsSet_) {
        val[utility::conversions::to_string_t("belong_discount_amount")] = ModelBase::toJson(belongDiscountAmount_);
    }
    if(belongDiscountTaxIsSet_) {
        val[utility::conversions::to_string_t("belong_discount_tax")] = ModelBase::toJson(belongDiscountTax_);
    }
    if(belongItemListIsSet_) {
        val[utility::conversions::to_string_t("belong_item_list")] = ModelBase::toJson(belongItemList_);
    }
    if(passengerTravelItemListIsSet_) {
        val[utility::conversions::to_string_t("passenger_travel_item_list")] = ModelBase::toJson(passengerTravelItemList_);
    }

    return val;
}
bool VatInvoiceResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invoice_tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invoice_tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvoiceTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sum_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sum_amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSumAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sum_tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sum_tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSumTax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attribution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribution"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supervision_seal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supervision_seal"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupervisionSeal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("print_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("print_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrintCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("print_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("print_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrintNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption_block"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_block"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionBlock(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buyer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buyer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buyer_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buyer_bank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_bank"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerBank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seller_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seller_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seller_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seller_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seller_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seller_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellerAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seller_bank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seller_bank"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellerBank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtotal_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtotal_amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtotalAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subtotal_tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subtotal_tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubtotalTax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_in_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_in_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalInWords(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("receiver"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receiver"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceiver(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuer(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seller_seal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seller_seal"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellerSeal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ItemList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("province"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("province"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("city"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("city"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCity(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_buyer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_buyer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongBuyerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_seller_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_seller_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongSellerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_vat_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_vat_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongVatCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_pages"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongPages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_current_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_current_page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongCurrentPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_remarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_remarks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongRemarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sales_mark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sales_mark"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSalesMark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_sum_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_sum_amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongSumAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_sum_tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_sum_tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongSumTax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_subtotal_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_subtotal_amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongSubtotalAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_subtotal_tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_subtotal_tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongSubtotalTax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_discount_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_discount_amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongDiscountAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_discount_tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_discount_tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongDiscountTax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("belong_item_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("belong_item_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BelongItemList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBelongItemList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passenger_travel_item_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passenger_travel_item_list"));
        if(!fieldValue.is_null())
        {
            std::vector<PassengerTravelItemList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassengerTravelItemList(refVal);
        }
    }
    return ok;
}


std::string VatInvoiceResult::getTitle() const
{
    return title_;
}

void VatInvoiceResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool VatInvoiceResult::titleIsSet() const
{
    return titleIsSet_;
}

void VatInvoiceResult::unsettitle()
{
    titleIsSet_ = false;
}

std::string VatInvoiceResult::getType() const
{
    return type_;
}

void VatInvoiceResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool VatInvoiceResult::typeIsSet() const
{
    return typeIsSet_;
}

void VatInvoiceResult::unsettype()
{
    typeIsSet_ = false;
}

std::string VatInvoiceResult::getInvoiceTag() const
{
    return invoiceTag_;
}

void VatInvoiceResult::setInvoiceTag(const std::string& value)
{
    invoiceTag_ = value;
    invoiceTagIsSet_ = true;
}

bool VatInvoiceResult::invoiceTagIsSet() const
{
    return invoiceTagIsSet_;
}

void VatInvoiceResult::unsetinvoiceTag()
{
    invoiceTagIsSet_ = false;
}

std::string VatInvoiceResult::getSumAmount() const
{
    return sumAmount_;
}

void VatInvoiceResult::setSumAmount(const std::string& value)
{
    sumAmount_ = value;
    sumAmountIsSet_ = true;
}

bool VatInvoiceResult::sumAmountIsSet() const
{
    return sumAmountIsSet_;
}

void VatInvoiceResult::unsetsumAmount()
{
    sumAmountIsSet_ = false;
}

std::string VatInvoiceResult::getSumTax() const
{
    return sumTax_;
}

void VatInvoiceResult::setSumTax(const std::string& value)
{
    sumTax_ = value;
    sumTaxIsSet_ = true;
}

bool VatInvoiceResult::sumTaxIsSet() const
{
    return sumTaxIsSet_;
}

void VatInvoiceResult::unsetsumTax()
{
    sumTaxIsSet_ = false;
}

std::string VatInvoiceResult::getSerialNumber() const
{
    return serialNumber_;
}

void VatInvoiceResult::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool VatInvoiceResult::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void VatInvoiceResult::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

std::string VatInvoiceResult::getAttribution() const
{
    return attribution_;
}

void VatInvoiceResult::setAttribution(const std::string& value)
{
    attribution_ = value;
    attributionIsSet_ = true;
}

bool VatInvoiceResult::attributionIsSet() const
{
    return attributionIsSet_;
}

void VatInvoiceResult::unsetattribution()
{
    attributionIsSet_ = false;
}

std::vector<std::string>& VatInvoiceResult::getSupervisionSeal()
{
    return supervisionSeal_;
}

void VatInvoiceResult::setSupervisionSeal(const std::vector<std::string>& value)
{
    supervisionSeal_ = value;
    supervisionSealIsSet_ = true;
}

bool VatInvoiceResult::supervisionSealIsSet() const
{
    return supervisionSealIsSet_;
}

void VatInvoiceResult::unsetsupervisionSeal()
{
    supervisionSealIsSet_ = false;
}

std::string VatInvoiceResult::getCode() const
{
    return code_;
}

void VatInvoiceResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool VatInvoiceResult::codeIsSet() const
{
    return codeIsSet_;
}

void VatInvoiceResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string VatInvoiceResult::getPrintCode() const
{
    return printCode_;
}

void VatInvoiceResult::setPrintCode(const std::string& value)
{
    printCode_ = value;
    printCodeIsSet_ = true;
}

bool VatInvoiceResult::printCodeIsSet() const
{
    return printCodeIsSet_;
}

void VatInvoiceResult::unsetprintCode()
{
    printCodeIsSet_ = false;
}

std::string VatInvoiceResult::getMachineNumber() const
{
    return machineNumber_;
}

void VatInvoiceResult::setMachineNumber(const std::string& value)
{
    machineNumber_ = value;
    machineNumberIsSet_ = true;
}

bool VatInvoiceResult::machineNumberIsSet() const
{
    return machineNumberIsSet_;
}

void VatInvoiceResult::unsetmachineNumber()
{
    machineNumberIsSet_ = false;
}

std::string VatInvoiceResult::getPrintNumber() const
{
    return printNumber_;
}

void VatInvoiceResult::setPrintNumber(const std::string& value)
{
    printNumber_ = value;
    printNumberIsSet_ = true;
}

bool VatInvoiceResult::printNumberIsSet() const
{
    return printNumberIsSet_;
}

void VatInvoiceResult::unsetprintNumber()
{
    printNumberIsSet_ = false;
}

std::string VatInvoiceResult::getCheckCode() const
{
    return checkCode_;
}

void VatInvoiceResult::setCheckCode(const std::string& value)
{
    checkCode_ = value;
    checkCodeIsSet_ = true;
}

bool VatInvoiceResult::checkCodeIsSet() const
{
    return checkCodeIsSet_;
}

void VatInvoiceResult::unsetcheckCode()
{
    checkCodeIsSet_ = false;
}

std::string VatInvoiceResult::getNumber() const
{
    return number_;
}

void VatInvoiceResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool VatInvoiceResult::numberIsSet() const
{
    return numberIsSet_;
}

void VatInvoiceResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string VatInvoiceResult::getIssueDate() const
{
    return issueDate_;
}

void VatInvoiceResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool VatInvoiceResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void VatInvoiceResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string VatInvoiceResult::getEncryptionBlock() const
{
    return encryptionBlock_;
}

void VatInvoiceResult::setEncryptionBlock(const std::string& value)
{
    encryptionBlock_ = value;
    encryptionBlockIsSet_ = true;
}

bool VatInvoiceResult::encryptionBlockIsSet() const
{
    return encryptionBlockIsSet_;
}

void VatInvoiceResult::unsetencryptionBlock()
{
    encryptionBlockIsSet_ = false;
}

std::string VatInvoiceResult::getBuyerName() const
{
    return buyerName_;
}

void VatInvoiceResult::setBuyerName(const std::string& value)
{
    buyerName_ = value;
    buyerNameIsSet_ = true;
}

bool VatInvoiceResult::buyerNameIsSet() const
{
    return buyerNameIsSet_;
}

void VatInvoiceResult::unsetbuyerName()
{
    buyerNameIsSet_ = false;
}

std::string VatInvoiceResult::getBuyerId() const
{
    return buyerId_;
}

void VatInvoiceResult::setBuyerId(const std::string& value)
{
    buyerId_ = value;
    buyerIdIsSet_ = true;
}

bool VatInvoiceResult::buyerIdIsSet() const
{
    return buyerIdIsSet_;
}

void VatInvoiceResult::unsetbuyerId()
{
    buyerIdIsSet_ = false;
}

std::string VatInvoiceResult::getBuyerAddress() const
{
    return buyerAddress_;
}

void VatInvoiceResult::setBuyerAddress(const std::string& value)
{
    buyerAddress_ = value;
    buyerAddressIsSet_ = true;
}

bool VatInvoiceResult::buyerAddressIsSet() const
{
    return buyerAddressIsSet_;
}

void VatInvoiceResult::unsetbuyerAddress()
{
    buyerAddressIsSet_ = false;
}

std::string VatInvoiceResult::getBuyerBank() const
{
    return buyerBank_;
}

void VatInvoiceResult::setBuyerBank(const std::string& value)
{
    buyerBank_ = value;
    buyerBankIsSet_ = true;
}

bool VatInvoiceResult::buyerBankIsSet() const
{
    return buyerBankIsSet_;
}

void VatInvoiceResult::unsetbuyerBank()
{
    buyerBankIsSet_ = false;
}

std::string VatInvoiceResult::getSellerName() const
{
    return sellerName_;
}

void VatInvoiceResult::setSellerName(const std::string& value)
{
    sellerName_ = value;
    sellerNameIsSet_ = true;
}

bool VatInvoiceResult::sellerNameIsSet() const
{
    return sellerNameIsSet_;
}

void VatInvoiceResult::unsetsellerName()
{
    sellerNameIsSet_ = false;
}

std::string VatInvoiceResult::getSellerId() const
{
    return sellerId_;
}

void VatInvoiceResult::setSellerId(const std::string& value)
{
    sellerId_ = value;
    sellerIdIsSet_ = true;
}

bool VatInvoiceResult::sellerIdIsSet() const
{
    return sellerIdIsSet_;
}

void VatInvoiceResult::unsetsellerId()
{
    sellerIdIsSet_ = false;
}

std::string VatInvoiceResult::getSellerAddress() const
{
    return sellerAddress_;
}

void VatInvoiceResult::setSellerAddress(const std::string& value)
{
    sellerAddress_ = value;
    sellerAddressIsSet_ = true;
}

bool VatInvoiceResult::sellerAddressIsSet() const
{
    return sellerAddressIsSet_;
}

void VatInvoiceResult::unsetsellerAddress()
{
    sellerAddressIsSet_ = false;
}

std::string VatInvoiceResult::getSellerBank() const
{
    return sellerBank_;
}

void VatInvoiceResult::setSellerBank(const std::string& value)
{
    sellerBank_ = value;
    sellerBankIsSet_ = true;
}

bool VatInvoiceResult::sellerBankIsSet() const
{
    return sellerBankIsSet_;
}

void VatInvoiceResult::unsetsellerBank()
{
    sellerBankIsSet_ = false;
}

std::string VatInvoiceResult::getSubtotalAmount() const
{
    return subtotalAmount_;
}

void VatInvoiceResult::setSubtotalAmount(const std::string& value)
{
    subtotalAmount_ = value;
    subtotalAmountIsSet_ = true;
}

bool VatInvoiceResult::subtotalAmountIsSet() const
{
    return subtotalAmountIsSet_;
}

void VatInvoiceResult::unsetsubtotalAmount()
{
    subtotalAmountIsSet_ = false;
}

std::string VatInvoiceResult::getSubtotalTax() const
{
    return subtotalTax_;
}

void VatInvoiceResult::setSubtotalTax(const std::string& value)
{
    subtotalTax_ = value;
    subtotalTaxIsSet_ = true;
}

bool VatInvoiceResult::subtotalTaxIsSet() const
{
    return subtotalTaxIsSet_;
}

void VatInvoiceResult::unsetsubtotalTax()
{
    subtotalTaxIsSet_ = false;
}

std::string VatInvoiceResult::getTotal() const
{
    return total_;
}

void VatInvoiceResult::setTotal(const std::string& value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool VatInvoiceResult::totalIsSet() const
{
    return totalIsSet_;
}

void VatInvoiceResult::unsettotal()
{
    totalIsSet_ = false;
}

std::string VatInvoiceResult::getTotalInWords() const
{
    return totalInWords_;
}

void VatInvoiceResult::setTotalInWords(const std::string& value)
{
    totalInWords_ = value;
    totalInWordsIsSet_ = true;
}

bool VatInvoiceResult::totalInWordsIsSet() const
{
    return totalInWordsIsSet_;
}

void VatInvoiceResult::unsettotalInWords()
{
    totalInWordsIsSet_ = false;
}

std::string VatInvoiceResult::getRemarks() const
{
    return remarks_;
}

void VatInvoiceResult::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool VatInvoiceResult::remarksIsSet() const
{
    return remarksIsSet_;
}

void VatInvoiceResult::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string VatInvoiceResult::getReceiver() const
{
    return receiver_;
}

void VatInvoiceResult::setReceiver(const std::string& value)
{
    receiver_ = value;
    receiverIsSet_ = true;
}

bool VatInvoiceResult::receiverIsSet() const
{
    return receiverIsSet_;
}

void VatInvoiceResult::unsetreceiver()
{
    receiverIsSet_ = false;
}

std::string VatInvoiceResult::getReviewer() const
{
    return reviewer_;
}

void VatInvoiceResult::setReviewer(const std::string& value)
{
    reviewer_ = value;
    reviewerIsSet_ = true;
}

bool VatInvoiceResult::reviewerIsSet() const
{
    return reviewerIsSet_;
}

void VatInvoiceResult::unsetreviewer()
{
    reviewerIsSet_ = false;
}

std::string VatInvoiceResult::getIssuer() const
{
    return issuer_;
}

void VatInvoiceResult::setIssuer(const std::string& value)
{
    issuer_ = value;
    issuerIsSet_ = true;
}

bool VatInvoiceResult::issuerIsSet() const
{
    return issuerIsSet_;
}

void VatInvoiceResult::unsetissuer()
{
    issuerIsSet_ = false;
}

std::vector<std::string>& VatInvoiceResult::getSellerSeal()
{
    return sellerSeal_;
}

void VatInvoiceResult::setSellerSeal(const std::vector<std::string>& value)
{
    sellerSeal_ = value;
    sellerSealIsSet_ = true;
}

bool VatInvoiceResult::sellerSealIsSet() const
{
    return sellerSealIsSet_;
}

void VatInvoiceResult::unsetsellerSeal()
{
    sellerSealIsSet_ = false;
}

std::vector<ItemList>& VatInvoiceResult::getItemList()
{
    return itemList_;
}

void VatInvoiceResult::setItemList(const std::vector<ItemList>& value)
{
    itemList_ = value;
    itemListIsSet_ = true;
}

bool VatInvoiceResult::itemListIsSet() const
{
    return itemListIsSet_;
}

void VatInvoiceResult::unsetitemList()
{
    itemListIsSet_ = false;
}

std::string VatInvoiceResult::getProvince() const
{
    return province_;
}

void VatInvoiceResult::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool VatInvoiceResult::provinceIsSet() const
{
    return provinceIsSet_;
}

void VatInvoiceResult::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string VatInvoiceResult::getCity() const
{
    return city_;
}

void VatInvoiceResult::setCity(const std::string& value)
{
    city_ = value;
    cityIsSet_ = true;
}

bool VatInvoiceResult::cityIsSet() const
{
    return cityIsSet_;
}

void VatInvoiceResult::unsetcity()
{
    cityIsSet_ = false;
}

Object VatInvoiceResult::getConfidence() const
{
    return confidence_;
}

void VatInvoiceResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool VatInvoiceResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void VatInvoiceResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

Object VatInvoiceResult::getTextLocation() const
{
    return textLocation_;
}

void VatInvoiceResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool VatInvoiceResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void VatInvoiceResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

std::string VatInvoiceResult::getBelongBuyerName() const
{
    return belongBuyerName_;
}

void VatInvoiceResult::setBelongBuyerName(const std::string& value)
{
    belongBuyerName_ = value;
    belongBuyerNameIsSet_ = true;
}

bool VatInvoiceResult::belongBuyerNameIsSet() const
{
    return belongBuyerNameIsSet_;
}

void VatInvoiceResult::unsetbelongBuyerName()
{
    belongBuyerNameIsSet_ = false;
}

std::string VatInvoiceResult::getBelongSellerName() const
{
    return belongSellerName_;
}

void VatInvoiceResult::setBelongSellerName(const std::string& value)
{
    belongSellerName_ = value;
    belongSellerNameIsSet_ = true;
}

bool VatInvoiceResult::belongSellerNameIsSet() const
{
    return belongSellerNameIsSet_;
}

void VatInvoiceResult::unsetbelongSellerName()
{
    belongSellerNameIsSet_ = false;
}

std::string VatInvoiceResult::getBelongVatCode() const
{
    return belongVatCode_;
}

void VatInvoiceResult::setBelongVatCode(const std::string& value)
{
    belongVatCode_ = value;
    belongVatCodeIsSet_ = true;
}

bool VatInvoiceResult::belongVatCodeIsSet() const
{
    return belongVatCodeIsSet_;
}

void VatInvoiceResult::unsetbelongVatCode()
{
    belongVatCodeIsSet_ = false;
}

std::string VatInvoiceResult::getBelongNumber() const
{
    return belongNumber_;
}

void VatInvoiceResult::setBelongNumber(const std::string& value)
{
    belongNumber_ = value;
    belongNumberIsSet_ = true;
}

bool VatInvoiceResult::belongNumberIsSet() const
{
    return belongNumberIsSet_;
}

void VatInvoiceResult::unsetbelongNumber()
{
    belongNumberIsSet_ = false;
}

std::string VatInvoiceResult::getBelongPages() const
{
    return belongPages_;
}

void VatInvoiceResult::setBelongPages(const std::string& value)
{
    belongPages_ = value;
    belongPagesIsSet_ = true;
}

bool VatInvoiceResult::belongPagesIsSet() const
{
    return belongPagesIsSet_;
}

void VatInvoiceResult::unsetbelongPages()
{
    belongPagesIsSet_ = false;
}

std::string VatInvoiceResult::getBelongCurrentPage() const
{
    return belongCurrentPage_;
}

void VatInvoiceResult::setBelongCurrentPage(const std::string& value)
{
    belongCurrentPage_ = value;
    belongCurrentPageIsSet_ = true;
}

bool VatInvoiceResult::belongCurrentPageIsSet() const
{
    return belongCurrentPageIsSet_;
}

void VatInvoiceResult::unsetbelongCurrentPage()
{
    belongCurrentPageIsSet_ = false;
}

std::string VatInvoiceResult::getBelongRemarks() const
{
    return belongRemarks_;
}

void VatInvoiceResult::setBelongRemarks(const std::string& value)
{
    belongRemarks_ = value;
    belongRemarksIsSet_ = true;
}

bool VatInvoiceResult::belongRemarksIsSet() const
{
    return belongRemarksIsSet_;
}

void VatInvoiceResult::unsetbelongRemarks()
{
    belongRemarksIsSet_ = false;
}

std::string VatInvoiceResult::getBelongIssueDate() const
{
    return belongIssueDate_;
}

void VatInvoiceResult::setBelongIssueDate(const std::string& value)
{
    belongIssueDate_ = value;
    belongIssueDateIsSet_ = true;
}

bool VatInvoiceResult::belongIssueDateIsSet() const
{
    return belongIssueDateIsSet_;
}

void VatInvoiceResult::unsetbelongIssueDate()
{
    belongIssueDateIsSet_ = false;
}

bool VatInvoiceResult::isSalesMark() const
{
    return salesMark_;
}

void VatInvoiceResult::setSalesMark(bool value)
{
    salesMark_ = value;
    salesMarkIsSet_ = true;
}

bool VatInvoiceResult::salesMarkIsSet() const
{
    return salesMarkIsSet_;
}

void VatInvoiceResult::unsetsalesMark()
{
    salesMarkIsSet_ = false;
}

std::string VatInvoiceResult::getBelongSumAmount() const
{
    return belongSumAmount_;
}

void VatInvoiceResult::setBelongSumAmount(const std::string& value)
{
    belongSumAmount_ = value;
    belongSumAmountIsSet_ = true;
}

bool VatInvoiceResult::belongSumAmountIsSet() const
{
    return belongSumAmountIsSet_;
}

void VatInvoiceResult::unsetbelongSumAmount()
{
    belongSumAmountIsSet_ = false;
}

std::string VatInvoiceResult::getBelongSumTax() const
{
    return belongSumTax_;
}

void VatInvoiceResult::setBelongSumTax(const std::string& value)
{
    belongSumTax_ = value;
    belongSumTaxIsSet_ = true;
}

bool VatInvoiceResult::belongSumTaxIsSet() const
{
    return belongSumTaxIsSet_;
}

void VatInvoiceResult::unsetbelongSumTax()
{
    belongSumTaxIsSet_ = false;
}

std::string VatInvoiceResult::getBelongSubtotalAmount() const
{
    return belongSubtotalAmount_;
}

void VatInvoiceResult::setBelongSubtotalAmount(const std::string& value)
{
    belongSubtotalAmount_ = value;
    belongSubtotalAmountIsSet_ = true;
}

bool VatInvoiceResult::belongSubtotalAmountIsSet() const
{
    return belongSubtotalAmountIsSet_;
}

void VatInvoiceResult::unsetbelongSubtotalAmount()
{
    belongSubtotalAmountIsSet_ = false;
}

std::string VatInvoiceResult::getBelongSubtotalTax() const
{
    return belongSubtotalTax_;
}

void VatInvoiceResult::setBelongSubtotalTax(const std::string& value)
{
    belongSubtotalTax_ = value;
    belongSubtotalTaxIsSet_ = true;
}

bool VatInvoiceResult::belongSubtotalTaxIsSet() const
{
    return belongSubtotalTaxIsSet_;
}

void VatInvoiceResult::unsetbelongSubtotalTax()
{
    belongSubtotalTaxIsSet_ = false;
}

std::string VatInvoiceResult::getBelongDiscountAmount() const
{
    return belongDiscountAmount_;
}

void VatInvoiceResult::setBelongDiscountAmount(const std::string& value)
{
    belongDiscountAmount_ = value;
    belongDiscountAmountIsSet_ = true;
}

bool VatInvoiceResult::belongDiscountAmountIsSet() const
{
    return belongDiscountAmountIsSet_;
}

void VatInvoiceResult::unsetbelongDiscountAmount()
{
    belongDiscountAmountIsSet_ = false;
}

std::string VatInvoiceResult::getBelongDiscountTax() const
{
    return belongDiscountTax_;
}

void VatInvoiceResult::setBelongDiscountTax(const std::string& value)
{
    belongDiscountTax_ = value;
    belongDiscountTaxIsSet_ = true;
}

bool VatInvoiceResult::belongDiscountTaxIsSet() const
{
    return belongDiscountTaxIsSet_;
}

void VatInvoiceResult::unsetbelongDiscountTax()
{
    belongDiscountTaxIsSet_ = false;
}

std::vector<BelongItemList>& VatInvoiceResult::getBelongItemList()
{
    return belongItemList_;
}

void VatInvoiceResult::setBelongItemList(const std::vector<BelongItemList>& value)
{
    belongItemList_ = value;
    belongItemListIsSet_ = true;
}

bool VatInvoiceResult::belongItemListIsSet() const
{
    return belongItemListIsSet_;
}

void VatInvoiceResult::unsetbelongItemList()
{
    belongItemListIsSet_ = false;
}

std::vector<PassengerTravelItemList>& VatInvoiceResult::getPassengerTravelItemList()
{
    return passengerTravelItemList_;
}

void VatInvoiceResult::setPassengerTravelItemList(const std::vector<PassengerTravelItemList>& value)
{
    passengerTravelItemList_ = value;
    passengerTravelItemListIsSet_ = true;
}

bool VatInvoiceResult::passengerTravelItemListIsSet() const
{
    return passengerTravelItemListIsSet_;
}

void VatInvoiceResult::unsetpassengerTravelItemList()
{
    passengerTravelItemListIsSet_ = false;
}

}
}
}
}
}


