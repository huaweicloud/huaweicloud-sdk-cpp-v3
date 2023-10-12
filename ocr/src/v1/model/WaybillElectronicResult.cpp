

#include "huaweicloud/ocr/v1/model/WaybillElectronicResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




WaybillElectronicResult::WaybillElectronicResult()
{
    code_ = "";
    codeIsSet_ = false;
    receiverName_ = "";
    receiverNameIsSet_ = false;
    receiverPhone_ = "";
    receiverPhoneIsSet_ = false;
    receiverAddress_ = "";
    receiverAddressIsSet_ = false;
    senderName_ = "";
    senderNameIsSet_ = false;
    senderPhone_ = "";
    senderPhoneIsSet_ = false;
    senderAddress_ = "";
    senderAddressIsSet_ = false;
    waybillNumber_ = "";
    waybillNumberIsSet_ = false;
    confidenceIsSet_ = false;
}

WaybillElectronicResult::~WaybillElectronicResult() = default;

void WaybillElectronicResult::validate()
{
}

web::json::value WaybillElectronicResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(receiverNameIsSet_) {
        val[utility::conversions::to_string_t("receiver_name")] = ModelBase::toJson(receiverName_);
    }
    if(receiverPhoneIsSet_) {
        val[utility::conversions::to_string_t("receiver_phone")] = ModelBase::toJson(receiverPhone_);
    }
    if(receiverAddressIsSet_) {
        val[utility::conversions::to_string_t("receiver_address")] = ModelBase::toJson(receiverAddress_);
    }
    if(senderNameIsSet_) {
        val[utility::conversions::to_string_t("sender_name")] = ModelBase::toJson(senderName_);
    }
    if(senderPhoneIsSet_) {
        val[utility::conversions::to_string_t("sender_phone")] = ModelBase::toJson(senderPhone_);
    }
    if(senderAddressIsSet_) {
        val[utility::conversions::to_string_t("sender_address")] = ModelBase::toJson(senderAddress_);
    }
    if(waybillNumberIsSet_) {
        val[utility::conversions::to_string_t("waybill_number")] = ModelBase::toJson(waybillNumber_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool WaybillElectronicResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("receiver_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receiver_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceiverName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("receiver_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receiver_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceiverPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("receiver_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receiver_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceiverAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sender_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sender_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSenderName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sender_phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sender_phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSenderPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sender_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sender_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSenderAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waybill_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waybill_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaybillNumber(refVal);
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


std::string WaybillElectronicResult::getCode() const
{
    return code_;
}

void WaybillElectronicResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool WaybillElectronicResult::codeIsSet() const
{
    return codeIsSet_;
}

void WaybillElectronicResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string WaybillElectronicResult::getReceiverName() const
{
    return receiverName_;
}

void WaybillElectronicResult::setReceiverName(const std::string& value)
{
    receiverName_ = value;
    receiverNameIsSet_ = true;
}

bool WaybillElectronicResult::receiverNameIsSet() const
{
    return receiverNameIsSet_;
}

void WaybillElectronicResult::unsetreceiverName()
{
    receiverNameIsSet_ = false;
}

std::string WaybillElectronicResult::getReceiverPhone() const
{
    return receiverPhone_;
}

void WaybillElectronicResult::setReceiverPhone(const std::string& value)
{
    receiverPhone_ = value;
    receiverPhoneIsSet_ = true;
}

bool WaybillElectronicResult::receiverPhoneIsSet() const
{
    return receiverPhoneIsSet_;
}

void WaybillElectronicResult::unsetreceiverPhone()
{
    receiverPhoneIsSet_ = false;
}

std::string WaybillElectronicResult::getReceiverAddress() const
{
    return receiverAddress_;
}

void WaybillElectronicResult::setReceiverAddress(const std::string& value)
{
    receiverAddress_ = value;
    receiverAddressIsSet_ = true;
}

bool WaybillElectronicResult::receiverAddressIsSet() const
{
    return receiverAddressIsSet_;
}

void WaybillElectronicResult::unsetreceiverAddress()
{
    receiverAddressIsSet_ = false;
}

std::string WaybillElectronicResult::getSenderName() const
{
    return senderName_;
}

void WaybillElectronicResult::setSenderName(const std::string& value)
{
    senderName_ = value;
    senderNameIsSet_ = true;
}

bool WaybillElectronicResult::senderNameIsSet() const
{
    return senderNameIsSet_;
}

void WaybillElectronicResult::unsetsenderName()
{
    senderNameIsSet_ = false;
}

std::string WaybillElectronicResult::getSenderPhone() const
{
    return senderPhone_;
}

void WaybillElectronicResult::setSenderPhone(const std::string& value)
{
    senderPhone_ = value;
    senderPhoneIsSet_ = true;
}

bool WaybillElectronicResult::senderPhoneIsSet() const
{
    return senderPhoneIsSet_;
}

void WaybillElectronicResult::unsetsenderPhone()
{
    senderPhoneIsSet_ = false;
}

std::string WaybillElectronicResult::getSenderAddress() const
{
    return senderAddress_;
}

void WaybillElectronicResult::setSenderAddress(const std::string& value)
{
    senderAddress_ = value;
    senderAddressIsSet_ = true;
}

bool WaybillElectronicResult::senderAddressIsSet() const
{
    return senderAddressIsSet_;
}

void WaybillElectronicResult::unsetsenderAddress()
{
    senderAddressIsSet_ = false;
}

std::string WaybillElectronicResult::getWaybillNumber() const
{
    return waybillNumber_;
}

void WaybillElectronicResult::setWaybillNumber(const std::string& value)
{
    waybillNumber_ = value;
    waybillNumberIsSet_ = true;
}

bool WaybillElectronicResult::waybillNumberIsSet() const
{
    return waybillNumberIsSet_;
}

void WaybillElectronicResult::unsetwaybillNumber()
{
    waybillNumberIsSet_ = false;
}

Object WaybillElectronicResult::getConfidence() const
{
    return confidence_;
}

void WaybillElectronicResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool WaybillElectronicResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void WaybillElectronicResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


