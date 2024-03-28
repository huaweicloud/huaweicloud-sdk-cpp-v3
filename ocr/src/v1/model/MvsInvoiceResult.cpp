

#include "huaweicloud/ocr/v1/model/MvsInvoiceResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MvsInvoiceResult::MvsInvoiceResult()
{
    code_ = "";
    codeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    machinePrintedCode_ = "";
    machinePrintedCodeIsSet_ = false;
    machinePrintedNumber_ = "";
    machinePrintedNumberIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    machineNumber_ = "";
    machineNumberIsSet_ = false;
    buyerName_ = "";
    buyerNameIsSet_ = false;
    buyerOrganizationNumber_ = "";
    buyerOrganizationNumberIsSet_ = false;
    buyerId_ = "";
    buyerIdIsSet_ = false;
    buyerAddress_ = "";
    buyerAddressIsSet_ = false;
    buyerPhone_ = "";
    buyerPhoneIsSet_ = false;
    sellerName_ = "";
    sellerNameIsSet_ = false;
    sellerPhone_ = "";
    sellerPhoneIsSet_ = false;
    sellerId_ = "";
    sellerIdIsSet_ = false;
    sellerAccount_ = "";
    sellerAccountIsSet_ = false;
    sellerAddress_ = "";
    sellerAddressIsSet_ = false;
    licencePlateNumber_ = "";
    licencePlateNumberIsSet_ = false;
    registrationNumber_ = "";
    registrationNumberIsSet_ = false;
    deptMotorVehicles_ = "";
    deptMotorVehiclesIsSet_ = false;
    sellerBank_ = "";
    sellerBankIsSet_ = false;
    vehicleType_ = "";
    vehicleTypeIsSet_ = false;
    brandModel_ = "";
    brandModelIsSet_ = false;
    manufacturingLocation_ = "";
    manufacturingLocationIsSet_ = false;
    qualityCertificate_ = "";
    qualityCertificateIsSet_ = false;
    importCertificate_ = "";
    importCertificateIsSet_ = false;
    inspectionNumber_ = "";
    inspectionNumberIsSet_ = false;
    engineNumber_ = "";
    engineNumberIsSet_ = false;
    vehicleIdentificationNumber_ = "";
    vehicleIdentificationNumberIsSet_ = false;
    tonnage_ = "";
    tonnageIsSet_ = false;
    seatingCapacity_ = "";
    seatingCapacityIsSet_ = false;
    taxAuthority_ = "";
    taxAuthorityIsSet_ = false;
    taxAuthorityCode_ = "";
    taxAuthorityCodeIsSet_ = false;
    taxPaymentReceipt_ = "";
    taxPaymentReceiptIsSet_ = false;
    taxRate_ = "";
    taxRateIsSet_ = false;
    tax_ = "";
    taxIsSet_ = false;
    taxExclusivePrice_ = "";
    taxExclusivePriceIsSet_ = false;
    total_ = "";
    totalIsSet_ = false;
    totalChinese_ = "";
    totalChineseIsSet_ = false;
    fiscalCode_ = "";
    fiscalCodeIsSet_ = false;
    auctionOrgName_ = "";
    auctionOrgNameIsSet_ = false;
    auctionOrgAddress_ = "";
    auctionOrgAddressIsSet_ = false;
    auctionOrgId_ = "";
    auctionOrgIdIsSet_ = false;
    auctionOrgBankAccount_ = "";
    auctionOrgBankAccountIsSet_ = false;
    auctionOrgPhone_ = "";
    auctionOrgPhoneIsSet_ = false;
    usedVehicleMarketName_ = "";
    usedVehicleMarketNameIsSet_ = false;
    usedVehicleMarketId_ = "";
    usedVehicleMarketIdIsSet_ = false;
    usedVehicleMarketAddress_ = "";
    usedVehicleMarketAddressIsSet_ = false;
    usedVehicleMarketBankAccount_ = "";
    usedVehicleMarketBankAccountIsSet_ = false;
    usedVehicleMarketPhone_ = "";
    usedVehicleMarketPhoneIsSet_ = false;
    reverseIssue_ = false;
    reverseIssueIsSet_ = false;
    remark_ = "";
    remarkIsSet_ = false;
    drawerName_ = "";
    drawerNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    textLocationIsSet_ = false;
    confidenceIsSet_ = false;
}

MvsInvoiceResult::~MvsInvoiceResult() = default;

void MvsInvoiceResult::validate()
{
}

web::json::value MvsInvoiceResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(machinePrintedCodeIsSet_) {
        val[utility::conversions::to_string_t("machine_printed_code")] = ModelBase::toJson(machinePrintedCode_);
    }
    if(machinePrintedNumberIsSet_) {
        val[utility::conversions::to_string_t("machine_printed_number")] = ModelBase::toJson(machinePrintedNumber_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(machineNumberIsSet_) {
        val[utility::conversions::to_string_t("machine_number")] = ModelBase::toJson(machineNumber_);
    }
    if(buyerNameIsSet_) {
        val[utility::conversions::to_string_t("buyer_name")] = ModelBase::toJson(buyerName_);
    }
    if(buyerOrganizationNumberIsSet_) {
        val[utility::conversions::to_string_t("buyer_organization_number")] = ModelBase::toJson(buyerOrganizationNumber_);
    }
    if(buyerIdIsSet_) {
        val[utility::conversions::to_string_t("buyer_id")] = ModelBase::toJson(buyerId_);
    }
    if(buyerAddressIsSet_) {
        val[utility::conversions::to_string_t("buyer_address")] = ModelBase::toJson(buyerAddress_);
    }
    if(buyerPhoneIsSet_) {
        val[utility::conversions::to_string_t("buyer_phone")] = ModelBase::toJson(buyerPhone_);
    }
    if(sellerNameIsSet_) {
        val[utility::conversions::to_string_t("seller_name")] = ModelBase::toJson(sellerName_);
    }
    if(sellerPhoneIsSet_) {
        val[utility::conversions::to_string_t("seller_phone")] = ModelBase::toJson(sellerPhone_);
    }
    if(sellerIdIsSet_) {
        val[utility::conversions::to_string_t("seller_id")] = ModelBase::toJson(sellerId_);
    }
    if(sellerAccountIsSet_) {
        val[utility::conversions::to_string_t("seller_account")] = ModelBase::toJson(sellerAccount_);
    }
    if(sellerAddressIsSet_) {
        val[utility::conversions::to_string_t("seller_address")] = ModelBase::toJson(sellerAddress_);
    }
    if(licencePlateNumberIsSet_) {
        val[utility::conversions::to_string_t("licence_plate_number")] = ModelBase::toJson(licencePlateNumber_);
    }
    if(registrationNumberIsSet_) {
        val[utility::conversions::to_string_t("registration_number")] = ModelBase::toJson(registrationNumber_);
    }
    if(deptMotorVehiclesIsSet_) {
        val[utility::conversions::to_string_t("dept_motor_vehicles")] = ModelBase::toJson(deptMotorVehicles_);
    }
    if(sellerBankIsSet_) {
        val[utility::conversions::to_string_t("seller_bank")] = ModelBase::toJson(sellerBank_);
    }
    if(vehicleTypeIsSet_) {
        val[utility::conversions::to_string_t("vehicle_type")] = ModelBase::toJson(vehicleType_);
    }
    if(brandModelIsSet_) {
        val[utility::conversions::to_string_t("brand_model")] = ModelBase::toJson(brandModel_);
    }
    if(manufacturingLocationIsSet_) {
        val[utility::conversions::to_string_t("manufacturing_location")] = ModelBase::toJson(manufacturingLocation_);
    }
    if(qualityCertificateIsSet_) {
        val[utility::conversions::to_string_t("quality_certificate")] = ModelBase::toJson(qualityCertificate_);
    }
    if(importCertificateIsSet_) {
        val[utility::conversions::to_string_t("import_certificate")] = ModelBase::toJson(importCertificate_);
    }
    if(inspectionNumberIsSet_) {
        val[utility::conversions::to_string_t("inspection_number")] = ModelBase::toJson(inspectionNumber_);
    }
    if(engineNumberIsSet_) {
        val[utility::conversions::to_string_t("engine_number")] = ModelBase::toJson(engineNumber_);
    }
    if(vehicleIdentificationNumberIsSet_) {
        val[utility::conversions::to_string_t("vehicle_identification_number")] = ModelBase::toJson(vehicleIdentificationNumber_);
    }
    if(tonnageIsSet_) {
        val[utility::conversions::to_string_t("tonnage")] = ModelBase::toJson(tonnage_);
    }
    if(seatingCapacityIsSet_) {
        val[utility::conversions::to_string_t("seating_capacity")] = ModelBase::toJson(seatingCapacity_);
    }
    if(taxAuthorityIsSet_) {
        val[utility::conversions::to_string_t("tax_authority")] = ModelBase::toJson(taxAuthority_);
    }
    if(taxAuthorityCodeIsSet_) {
        val[utility::conversions::to_string_t("tax_authority_code")] = ModelBase::toJson(taxAuthorityCode_);
    }
    if(taxPaymentReceiptIsSet_) {
        val[utility::conversions::to_string_t("tax_payment_receipt")] = ModelBase::toJson(taxPaymentReceipt_);
    }
    if(taxRateIsSet_) {
        val[utility::conversions::to_string_t("tax_rate")] = ModelBase::toJson(taxRate_);
    }
    if(taxIsSet_) {
        val[utility::conversions::to_string_t("tax")] = ModelBase::toJson(tax_);
    }
    if(taxExclusivePriceIsSet_) {
        val[utility::conversions::to_string_t("tax_exclusive_price")] = ModelBase::toJson(taxExclusivePrice_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(totalChineseIsSet_) {
        val[utility::conversions::to_string_t("total_chinese")] = ModelBase::toJson(totalChinese_);
    }
    if(fiscalCodeIsSet_) {
        val[utility::conversions::to_string_t("fiscal_code")] = ModelBase::toJson(fiscalCode_);
    }
    if(auctionOrgNameIsSet_) {
        val[utility::conversions::to_string_t("auction_org_name")] = ModelBase::toJson(auctionOrgName_);
    }
    if(auctionOrgAddressIsSet_) {
        val[utility::conversions::to_string_t("auction_org_address")] = ModelBase::toJson(auctionOrgAddress_);
    }
    if(auctionOrgIdIsSet_) {
        val[utility::conversions::to_string_t("auction_org_id")] = ModelBase::toJson(auctionOrgId_);
    }
    if(auctionOrgBankAccountIsSet_) {
        val[utility::conversions::to_string_t("auction_org_bank_account")] = ModelBase::toJson(auctionOrgBankAccount_);
    }
    if(auctionOrgPhoneIsSet_) {
        val[utility::conversions::to_string_t("auction_org_phone")] = ModelBase::toJson(auctionOrgPhone_);
    }
    if(usedVehicleMarketNameIsSet_) {
        val[utility::conversions::to_string_t("used_vehicle_market_name")] = ModelBase::toJson(usedVehicleMarketName_);
    }
    if(usedVehicleMarketIdIsSet_) {
        val[utility::conversions::to_string_t("used_vehicle_market_id")] = ModelBase::toJson(usedVehicleMarketId_);
    }
    if(usedVehicleMarketAddressIsSet_) {
        val[utility::conversions::to_string_t("used_vehicle_market_address")] = ModelBase::toJson(usedVehicleMarketAddress_);
    }
    if(usedVehicleMarketBankAccountIsSet_) {
        val[utility::conversions::to_string_t("used_vehicle_market_bank_account")] = ModelBase::toJson(usedVehicleMarketBankAccount_);
    }
    if(usedVehicleMarketPhoneIsSet_) {
        val[utility::conversions::to_string_t("used_vehicle_market_phone")] = ModelBase::toJson(usedVehicleMarketPhone_);
    }
    if(reverseIssueIsSet_) {
        val[utility::conversions::to_string_t("reverse_issue")] = ModelBase::toJson(reverseIssue_);
    }
    if(remarkIsSet_) {
        val[utility::conversions::to_string_t("remark")] = ModelBase::toJson(remark_);
    }
    if(drawerNameIsSet_) {
        val[utility::conversions::to_string_t("drawer_name")] = ModelBase::toJson(drawerName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool MvsInvoiceResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("machine_printed_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_printed_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachinePrintedCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_printed_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_printed_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachinePrintedNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("machine_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("buyer_organization_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_organization_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerOrganizationNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("buyer_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerPhone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("seller_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seller_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellerPhone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("seller_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seller_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSellerAccount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("licence_plate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("licence_plate_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLicencePlateNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("registration_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("registration_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegistrationNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dept_motor_vehicles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dept_motor_vehicles"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptMotorVehicles(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vehicle_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("brand_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("brand_model"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBrandModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manufacturing_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manufacturing_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManufacturingLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality_certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualityCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("inspection_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inspection_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInspectionNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("engine_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("engine_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEngineNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_identification_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_identification_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleIdentificationNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tonnage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tonnage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTonnage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seating_capacity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seating_capacity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeatingCapacity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_authority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxAuthority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_authority_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_authority_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxAuthorityCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_payment_receipt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_payment_receipt"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxPaymentReceipt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_exclusive_price"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_exclusive_price"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxExclusivePrice(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("total_chinese"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_chinese"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalChinese(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fiscal_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fiscal_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiscalCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auction_org_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auction_org_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuctionOrgName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auction_org_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auction_org_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuctionOrgAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auction_org_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auction_org_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuctionOrgId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auction_org_bank_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auction_org_bank_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuctionOrgBankAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auction_org_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auction_org_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuctionOrgPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_vehicle_market_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_vehicle_market_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedVehicleMarketName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_vehicle_market_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_vehicle_market_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedVehicleMarketId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_vehicle_market_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_vehicle_market_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedVehicleMarketAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_vehicle_market_bank_account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_vehicle_market_bank_account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedVehicleMarketBankAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("used_vehicle_market_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_vehicle_market_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedVehicleMarketPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reverse_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reverse_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReverseIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("drawer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("drawer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrawerName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
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


std::string MvsInvoiceResult::getCode() const
{
    return code_;
}

void MvsInvoiceResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool MvsInvoiceResult::codeIsSet() const
{
    return codeIsSet_;
}

void MvsInvoiceResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string MvsInvoiceResult::getNumber() const
{
    return number_;
}

void MvsInvoiceResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool MvsInvoiceResult::numberIsSet() const
{
    return numberIsSet_;
}

void MvsInvoiceResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string MvsInvoiceResult::getMachinePrintedCode() const
{
    return machinePrintedCode_;
}

void MvsInvoiceResult::setMachinePrintedCode(const std::string& value)
{
    machinePrintedCode_ = value;
    machinePrintedCodeIsSet_ = true;
}

bool MvsInvoiceResult::machinePrintedCodeIsSet() const
{
    return machinePrintedCodeIsSet_;
}

void MvsInvoiceResult::unsetmachinePrintedCode()
{
    machinePrintedCodeIsSet_ = false;
}

std::string MvsInvoiceResult::getMachinePrintedNumber() const
{
    return machinePrintedNumber_;
}

void MvsInvoiceResult::setMachinePrintedNumber(const std::string& value)
{
    machinePrintedNumber_ = value;
    machinePrintedNumberIsSet_ = true;
}

bool MvsInvoiceResult::machinePrintedNumberIsSet() const
{
    return machinePrintedNumberIsSet_;
}

void MvsInvoiceResult::unsetmachinePrintedNumber()
{
    machinePrintedNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getIssueDate() const
{
    return issueDate_;
}

void MvsInvoiceResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool MvsInvoiceResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void MvsInvoiceResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string MvsInvoiceResult::getMachineNumber() const
{
    return machineNumber_;
}

void MvsInvoiceResult::setMachineNumber(const std::string& value)
{
    machineNumber_ = value;
    machineNumberIsSet_ = true;
}

bool MvsInvoiceResult::machineNumberIsSet() const
{
    return machineNumberIsSet_;
}

void MvsInvoiceResult::unsetmachineNumber()
{
    machineNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getBuyerName() const
{
    return buyerName_;
}

void MvsInvoiceResult::setBuyerName(const std::string& value)
{
    buyerName_ = value;
    buyerNameIsSet_ = true;
}

bool MvsInvoiceResult::buyerNameIsSet() const
{
    return buyerNameIsSet_;
}

void MvsInvoiceResult::unsetbuyerName()
{
    buyerNameIsSet_ = false;
}

std::string MvsInvoiceResult::getBuyerOrganizationNumber() const
{
    return buyerOrganizationNumber_;
}

void MvsInvoiceResult::setBuyerOrganizationNumber(const std::string& value)
{
    buyerOrganizationNumber_ = value;
    buyerOrganizationNumberIsSet_ = true;
}

bool MvsInvoiceResult::buyerOrganizationNumberIsSet() const
{
    return buyerOrganizationNumberIsSet_;
}

void MvsInvoiceResult::unsetbuyerOrganizationNumber()
{
    buyerOrganizationNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getBuyerId() const
{
    return buyerId_;
}

void MvsInvoiceResult::setBuyerId(const std::string& value)
{
    buyerId_ = value;
    buyerIdIsSet_ = true;
}

bool MvsInvoiceResult::buyerIdIsSet() const
{
    return buyerIdIsSet_;
}

void MvsInvoiceResult::unsetbuyerId()
{
    buyerIdIsSet_ = false;
}

std::string MvsInvoiceResult::getBuyerAddress() const
{
    return buyerAddress_;
}

void MvsInvoiceResult::setBuyerAddress(const std::string& value)
{
    buyerAddress_ = value;
    buyerAddressIsSet_ = true;
}

bool MvsInvoiceResult::buyerAddressIsSet() const
{
    return buyerAddressIsSet_;
}

void MvsInvoiceResult::unsetbuyerAddress()
{
    buyerAddressIsSet_ = false;
}

std::string MvsInvoiceResult::getBuyerPhone() const
{
    return buyerPhone_;
}

void MvsInvoiceResult::setBuyerPhone(const std::string& value)
{
    buyerPhone_ = value;
    buyerPhoneIsSet_ = true;
}

bool MvsInvoiceResult::buyerPhoneIsSet() const
{
    return buyerPhoneIsSet_;
}

void MvsInvoiceResult::unsetbuyerPhone()
{
    buyerPhoneIsSet_ = false;
}

std::string MvsInvoiceResult::getSellerName() const
{
    return sellerName_;
}

void MvsInvoiceResult::setSellerName(const std::string& value)
{
    sellerName_ = value;
    sellerNameIsSet_ = true;
}

bool MvsInvoiceResult::sellerNameIsSet() const
{
    return sellerNameIsSet_;
}

void MvsInvoiceResult::unsetsellerName()
{
    sellerNameIsSet_ = false;
}

std::string MvsInvoiceResult::getSellerPhone() const
{
    return sellerPhone_;
}

void MvsInvoiceResult::setSellerPhone(const std::string& value)
{
    sellerPhone_ = value;
    sellerPhoneIsSet_ = true;
}

bool MvsInvoiceResult::sellerPhoneIsSet() const
{
    return sellerPhoneIsSet_;
}

void MvsInvoiceResult::unsetsellerPhone()
{
    sellerPhoneIsSet_ = false;
}

std::string MvsInvoiceResult::getSellerId() const
{
    return sellerId_;
}

void MvsInvoiceResult::setSellerId(const std::string& value)
{
    sellerId_ = value;
    sellerIdIsSet_ = true;
}

bool MvsInvoiceResult::sellerIdIsSet() const
{
    return sellerIdIsSet_;
}

void MvsInvoiceResult::unsetsellerId()
{
    sellerIdIsSet_ = false;
}

std::string MvsInvoiceResult::getSellerAccount() const
{
    return sellerAccount_;
}

void MvsInvoiceResult::setSellerAccount(const std::string& value)
{
    sellerAccount_ = value;
    sellerAccountIsSet_ = true;
}

bool MvsInvoiceResult::sellerAccountIsSet() const
{
    return sellerAccountIsSet_;
}

void MvsInvoiceResult::unsetsellerAccount()
{
    sellerAccountIsSet_ = false;
}

std::string MvsInvoiceResult::getSellerAddress() const
{
    return sellerAddress_;
}

void MvsInvoiceResult::setSellerAddress(const std::string& value)
{
    sellerAddress_ = value;
    sellerAddressIsSet_ = true;
}

bool MvsInvoiceResult::sellerAddressIsSet() const
{
    return sellerAddressIsSet_;
}

void MvsInvoiceResult::unsetsellerAddress()
{
    sellerAddressIsSet_ = false;
}

std::string MvsInvoiceResult::getLicencePlateNumber() const
{
    return licencePlateNumber_;
}

void MvsInvoiceResult::setLicencePlateNumber(const std::string& value)
{
    licencePlateNumber_ = value;
    licencePlateNumberIsSet_ = true;
}

bool MvsInvoiceResult::licencePlateNumberIsSet() const
{
    return licencePlateNumberIsSet_;
}

void MvsInvoiceResult::unsetlicencePlateNumber()
{
    licencePlateNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getRegistrationNumber() const
{
    return registrationNumber_;
}

void MvsInvoiceResult::setRegistrationNumber(const std::string& value)
{
    registrationNumber_ = value;
    registrationNumberIsSet_ = true;
}

bool MvsInvoiceResult::registrationNumberIsSet() const
{
    return registrationNumberIsSet_;
}

void MvsInvoiceResult::unsetregistrationNumber()
{
    registrationNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getDeptMotorVehicles() const
{
    return deptMotorVehicles_;
}

void MvsInvoiceResult::setDeptMotorVehicles(const std::string& value)
{
    deptMotorVehicles_ = value;
    deptMotorVehiclesIsSet_ = true;
}

bool MvsInvoiceResult::deptMotorVehiclesIsSet() const
{
    return deptMotorVehiclesIsSet_;
}

void MvsInvoiceResult::unsetdeptMotorVehicles()
{
    deptMotorVehiclesIsSet_ = false;
}

std::string MvsInvoiceResult::getSellerBank() const
{
    return sellerBank_;
}

void MvsInvoiceResult::setSellerBank(const std::string& value)
{
    sellerBank_ = value;
    sellerBankIsSet_ = true;
}

bool MvsInvoiceResult::sellerBankIsSet() const
{
    return sellerBankIsSet_;
}

void MvsInvoiceResult::unsetsellerBank()
{
    sellerBankIsSet_ = false;
}

std::string MvsInvoiceResult::getVehicleType() const
{
    return vehicleType_;
}

void MvsInvoiceResult::setVehicleType(const std::string& value)
{
    vehicleType_ = value;
    vehicleTypeIsSet_ = true;
}

bool MvsInvoiceResult::vehicleTypeIsSet() const
{
    return vehicleTypeIsSet_;
}

void MvsInvoiceResult::unsetvehicleType()
{
    vehicleTypeIsSet_ = false;
}

std::string MvsInvoiceResult::getBrandModel() const
{
    return brandModel_;
}

void MvsInvoiceResult::setBrandModel(const std::string& value)
{
    brandModel_ = value;
    brandModelIsSet_ = true;
}

bool MvsInvoiceResult::brandModelIsSet() const
{
    return brandModelIsSet_;
}

void MvsInvoiceResult::unsetbrandModel()
{
    brandModelIsSet_ = false;
}

std::string MvsInvoiceResult::getManufacturingLocation() const
{
    return manufacturingLocation_;
}

void MvsInvoiceResult::setManufacturingLocation(const std::string& value)
{
    manufacturingLocation_ = value;
    manufacturingLocationIsSet_ = true;
}

bool MvsInvoiceResult::manufacturingLocationIsSet() const
{
    return manufacturingLocationIsSet_;
}

void MvsInvoiceResult::unsetmanufacturingLocation()
{
    manufacturingLocationIsSet_ = false;
}

std::string MvsInvoiceResult::getQualityCertificate() const
{
    return qualityCertificate_;
}

void MvsInvoiceResult::setQualityCertificate(const std::string& value)
{
    qualityCertificate_ = value;
    qualityCertificateIsSet_ = true;
}

bool MvsInvoiceResult::qualityCertificateIsSet() const
{
    return qualityCertificateIsSet_;
}

void MvsInvoiceResult::unsetqualityCertificate()
{
    qualityCertificateIsSet_ = false;
}

std::string MvsInvoiceResult::getImportCertificate() const
{
    return importCertificate_;
}

void MvsInvoiceResult::setImportCertificate(const std::string& value)
{
    importCertificate_ = value;
    importCertificateIsSet_ = true;
}

bool MvsInvoiceResult::importCertificateIsSet() const
{
    return importCertificateIsSet_;
}

void MvsInvoiceResult::unsetimportCertificate()
{
    importCertificateIsSet_ = false;
}

std::string MvsInvoiceResult::getInspectionNumber() const
{
    return inspectionNumber_;
}

void MvsInvoiceResult::setInspectionNumber(const std::string& value)
{
    inspectionNumber_ = value;
    inspectionNumberIsSet_ = true;
}

bool MvsInvoiceResult::inspectionNumberIsSet() const
{
    return inspectionNumberIsSet_;
}

void MvsInvoiceResult::unsetinspectionNumber()
{
    inspectionNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getEngineNumber() const
{
    return engineNumber_;
}

void MvsInvoiceResult::setEngineNumber(const std::string& value)
{
    engineNumber_ = value;
    engineNumberIsSet_ = true;
}

bool MvsInvoiceResult::engineNumberIsSet() const
{
    return engineNumberIsSet_;
}

void MvsInvoiceResult::unsetengineNumber()
{
    engineNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getVehicleIdentificationNumber() const
{
    return vehicleIdentificationNumber_;
}

void MvsInvoiceResult::setVehicleIdentificationNumber(const std::string& value)
{
    vehicleIdentificationNumber_ = value;
    vehicleIdentificationNumberIsSet_ = true;
}

bool MvsInvoiceResult::vehicleIdentificationNumberIsSet() const
{
    return vehicleIdentificationNumberIsSet_;
}

void MvsInvoiceResult::unsetvehicleIdentificationNumber()
{
    vehicleIdentificationNumberIsSet_ = false;
}

std::string MvsInvoiceResult::getTonnage() const
{
    return tonnage_;
}

void MvsInvoiceResult::setTonnage(const std::string& value)
{
    tonnage_ = value;
    tonnageIsSet_ = true;
}

bool MvsInvoiceResult::tonnageIsSet() const
{
    return tonnageIsSet_;
}

void MvsInvoiceResult::unsettonnage()
{
    tonnageIsSet_ = false;
}

std::string MvsInvoiceResult::getSeatingCapacity() const
{
    return seatingCapacity_;
}

void MvsInvoiceResult::setSeatingCapacity(const std::string& value)
{
    seatingCapacity_ = value;
    seatingCapacityIsSet_ = true;
}

bool MvsInvoiceResult::seatingCapacityIsSet() const
{
    return seatingCapacityIsSet_;
}

void MvsInvoiceResult::unsetseatingCapacity()
{
    seatingCapacityIsSet_ = false;
}

std::string MvsInvoiceResult::getTaxAuthority() const
{
    return taxAuthority_;
}

void MvsInvoiceResult::setTaxAuthority(const std::string& value)
{
    taxAuthority_ = value;
    taxAuthorityIsSet_ = true;
}

bool MvsInvoiceResult::taxAuthorityIsSet() const
{
    return taxAuthorityIsSet_;
}

void MvsInvoiceResult::unsettaxAuthority()
{
    taxAuthorityIsSet_ = false;
}

std::string MvsInvoiceResult::getTaxAuthorityCode() const
{
    return taxAuthorityCode_;
}

void MvsInvoiceResult::setTaxAuthorityCode(const std::string& value)
{
    taxAuthorityCode_ = value;
    taxAuthorityCodeIsSet_ = true;
}

bool MvsInvoiceResult::taxAuthorityCodeIsSet() const
{
    return taxAuthorityCodeIsSet_;
}

void MvsInvoiceResult::unsettaxAuthorityCode()
{
    taxAuthorityCodeIsSet_ = false;
}

std::string MvsInvoiceResult::getTaxPaymentReceipt() const
{
    return taxPaymentReceipt_;
}

void MvsInvoiceResult::setTaxPaymentReceipt(const std::string& value)
{
    taxPaymentReceipt_ = value;
    taxPaymentReceiptIsSet_ = true;
}

bool MvsInvoiceResult::taxPaymentReceiptIsSet() const
{
    return taxPaymentReceiptIsSet_;
}

void MvsInvoiceResult::unsettaxPaymentReceipt()
{
    taxPaymentReceiptIsSet_ = false;
}

std::string MvsInvoiceResult::getTaxRate() const
{
    return taxRate_;
}

void MvsInvoiceResult::setTaxRate(const std::string& value)
{
    taxRate_ = value;
    taxRateIsSet_ = true;
}

bool MvsInvoiceResult::taxRateIsSet() const
{
    return taxRateIsSet_;
}

void MvsInvoiceResult::unsettaxRate()
{
    taxRateIsSet_ = false;
}

std::string MvsInvoiceResult::getTax() const
{
    return tax_;
}

void MvsInvoiceResult::setTax(const std::string& value)
{
    tax_ = value;
    taxIsSet_ = true;
}

bool MvsInvoiceResult::taxIsSet() const
{
    return taxIsSet_;
}

void MvsInvoiceResult::unsettax()
{
    taxIsSet_ = false;
}

std::string MvsInvoiceResult::getTaxExclusivePrice() const
{
    return taxExclusivePrice_;
}

void MvsInvoiceResult::setTaxExclusivePrice(const std::string& value)
{
    taxExclusivePrice_ = value;
    taxExclusivePriceIsSet_ = true;
}

bool MvsInvoiceResult::taxExclusivePriceIsSet() const
{
    return taxExclusivePriceIsSet_;
}

void MvsInvoiceResult::unsettaxExclusivePrice()
{
    taxExclusivePriceIsSet_ = false;
}

std::string MvsInvoiceResult::getTotal() const
{
    return total_;
}

void MvsInvoiceResult::setTotal(const std::string& value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool MvsInvoiceResult::totalIsSet() const
{
    return totalIsSet_;
}

void MvsInvoiceResult::unsettotal()
{
    totalIsSet_ = false;
}

std::string MvsInvoiceResult::getTotalChinese() const
{
    return totalChinese_;
}

void MvsInvoiceResult::setTotalChinese(const std::string& value)
{
    totalChinese_ = value;
    totalChineseIsSet_ = true;
}

bool MvsInvoiceResult::totalChineseIsSet() const
{
    return totalChineseIsSet_;
}

void MvsInvoiceResult::unsettotalChinese()
{
    totalChineseIsSet_ = false;
}

std::string MvsInvoiceResult::getFiscalCode() const
{
    return fiscalCode_;
}

void MvsInvoiceResult::setFiscalCode(const std::string& value)
{
    fiscalCode_ = value;
    fiscalCodeIsSet_ = true;
}

bool MvsInvoiceResult::fiscalCodeIsSet() const
{
    return fiscalCodeIsSet_;
}

void MvsInvoiceResult::unsetfiscalCode()
{
    fiscalCodeIsSet_ = false;
}

std::string MvsInvoiceResult::getAuctionOrgName() const
{
    return auctionOrgName_;
}

void MvsInvoiceResult::setAuctionOrgName(const std::string& value)
{
    auctionOrgName_ = value;
    auctionOrgNameIsSet_ = true;
}

bool MvsInvoiceResult::auctionOrgNameIsSet() const
{
    return auctionOrgNameIsSet_;
}

void MvsInvoiceResult::unsetauctionOrgName()
{
    auctionOrgNameIsSet_ = false;
}

std::string MvsInvoiceResult::getAuctionOrgAddress() const
{
    return auctionOrgAddress_;
}

void MvsInvoiceResult::setAuctionOrgAddress(const std::string& value)
{
    auctionOrgAddress_ = value;
    auctionOrgAddressIsSet_ = true;
}

bool MvsInvoiceResult::auctionOrgAddressIsSet() const
{
    return auctionOrgAddressIsSet_;
}

void MvsInvoiceResult::unsetauctionOrgAddress()
{
    auctionOrgAddressIsSet_ = false;
}

std::string MvsInvoiceResult::getAuctionOrgId() const
{
    return auctionOrgId_;
}

void MvsInvoiceResult::setAuctionOrgId(const std::string& value)
{
    auctionOrgId_ = value;
    auctionOrgIdIsSet_ = true;
}

bool MvsInvoiceResult::auctionOrgIdIsSet() const
{
    return auctionOrgIdIsSet_;
}

void MvsInvoiceResult::unsetauctionOrgId()
{
    auctionOrgIdIsSet_ = false;
}

std::string MvsInvoiceResult::getAuctionOrgBankAccount() const
{
    return auctionOrgBankAccount_;
}

void MvsInvoiceResult::setAuctionOrgBankAccount(const std::string& value)
{
    auctionOrgBankAccount_ = value;
    auctionOrgBankAccountIsSet_ = true;
}

bool MvsInvoiceResult::auctionOrgBankAccountIsSet() const
{
    return auctionOrgBankAccountIsSet_;
}

void MvsInvoiceResult::unsetauctionOrgBankAccount()
{
    auctionOrgBankAccountIsSet_ = false;
}

std::string MvsInvoiceResult::getAuctionOrgPhone() const
{
    return auctionOrgPhone_;
}

void MvsInvoiceResult::setAuctionOrgPhone(const std::string& value)
{
    auctionOrgPhone_ = value;
    auctionOrgPhoneIsSet_ = true;
}

bool MvsInvoiceResult::auctionOrgPhoneIsSet() const
{
    return auctionOrgPhoneIsSet_;
}

void MvsInvoiceResult::unsetauctionOrgPhone()
{
    auctionOrgPhoneIsSet_ = false;
}

std::string MvsInvoiceResult::getUsedVehicleMarketName() const
{
    return usedVehicleMarketName_;
}

void MvsInvoiceResult::setUsedVehicleMarketName(const std::string& value)
{
    usedVehicleMarketName_ = value;
    usedVehicleMarketNameIsSet_ = true;
}

bool MvsInvoiceResult::usedVehicleMarketNameIsSet() const
{
    return usedVehicleMarketNameIsSet_;
}

void MvsInvoiceResult::unsetusedVehicleMarketName()
{
    usedVehicleMarketNameIsSet_ = false;
}

std::string MvsInvoiceResult::getUsedVehicleMarketId() const
{
    return usedVehicleMarketId_;
}

void MvsInvoiceResult::setUsedVehicleMarketId(const std::string& value)
{
    usedVehicleMarketId_ = value;
    usedVehicleMarketIdIsSet_ = true;
}

bool MvsInvoiceResult::usedVehicleMarketIdIsSet() const
{
    return usedVehicleMarketIdIsSet_;
}

void MvsInvoiceResult::unsetusedVehicleMarketId()
{
    usedVehicleMarketIdIsSet_ = false;
}

std::string MvsInvoiceResult::getUsedVehicleMarketAddress() const
{
    return usedVehicleMarketAddress_;
}

void MvsInvoiceResult::setUsedVehicleMarketAddress(const std::string& value)
{
    usedVehicleMarketAddress_ = value;
    usedVehicleMarketAddressIsSet_ = true;
}

bool MvsInvoiceResult::usedVehicleMarketAddressIsSet() const
{
    return usedVehicleMarketAddressIsSet_;
}

void MvsInvoiceResult::unsetusedVehicleMarketAddress()
{
    usedVehicleMarketAddressIsSet_ = false;
}

std::string MvsInvoiceResult::getUsedVehicleMarketBankAccount() const
{
    return usedVehicleMarketBankAccount_;
}

void MvsInvoiceResult::setUsedVehicleMarketBankAccount(const std::string& value)
{
    usedVehicleMarketBankAccount_ = value;
    usedVehicleMarketBankAccountIsSet_ = true;
}

bool MvsInvoiceResult::usedVehicleMarketBankAccountIsSet() const
{
    return usedVehicleMarketBankAccountIsSet_;
}

void MvsInvoiceResult::unsetusedVehicleMarketBankAccount()
{
    usedVehicleMarketBankAccountIsSet_ = false;
}

std::string MvsInvoiceResult::getUsedVehicleMarketPhone() const
{
    return usedVehicleMarketPhone_;
}

void MvsInvoiceResult::setUsedVehicleMarketPhone(const std::string& value)
{
    usedVehicleMarketPhone_ = value;
    usedVehicleMarketPhoneIsSet_ = true;
}

bool MvsInvoiceResult::usedVehicleMarketPhoneIsSet() const
{
    return usedVehicleMarketPhoneIsSet_;
}

void MvsInvoiceResult::unsetusedVehicleMarketPhone()
{
    usedVehicleMarketPhoneIsSet_ = false;
}

bool MvsInvoiceResult::isReverseIssue() const
{
    return reverseIssue_;
}

void MvsInvoiceResult::setReverseIssue(bool value)
{
    reverseIssue_ = value;
    reverseIssueIsSet_ = true;
}

bool MvsInvoiceResult::reverseIssueIsSet() const
{
    return reverseIssueIsSet_;
}

void MvsInvoiceResult::unsetreverseIssue()
{
    reverseIssueIsSet_ = false;
}

std::string MvsInvoiceResult::getRemark() const
{
    return remark_;
}

void MvsInvoiceResult::setRemark(const std::string& value)
{
    remark_ = value;
    remarkIsSet_ = true;
}

bool MvsInvoiceResult::remarkIsSet() const
{
    return remarkIsSet_;
}

void MvsInvoiceResult::unsetremark()
{
    remarkIsSet_ = false;
}

std::string MvsInvoiceResult::getDrawerName() const
{
    return drawerName_;
}

void MvsInvoiceResult::setDrawerName(const std::string& value)
{
    drawerName_ = value;
    drawerNameIsSet_ = true;
}

bool MvsInvoiceResult::drawerNameIsSet() const
{
    return drawerNameIsSet_;
}

void MvsInvoiceResult::unsetdrawerName()
{
    drawerNameIsSet_ = false;
}

std::string MvsInvoiceResult::getType() const
{
    return type_;
}

void MvsInvoiceResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MvsInvoiceResult::typeIsSet() const
{
    return typeIsSet_;
}

void MvsInvoiceResult::unsettype()
{
    typeIsSet_ = false;
}

Object MvsInvoiceResult::getTextLocation() const
{
    return textLocation_;
}

void MvsInvoiceResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool MvsInvoiceResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void MvsInvoiceResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

Object MvsInvoiceResult::getConfidence() const
{
    return confidence_;
}

void MvsInvoiceResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool MvsInvoiceResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void MvsInvoiceResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


