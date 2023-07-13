

#include "huaweicloud/cbr/v1/model/ProtectableResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ProtectableResult::ProtectableResult()
{
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
    result_ = false;
    resultIsSet_ = false;
    vaultIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

ProtectableResult::~ProtectableResult() = default;

void ProtectableResult::validate()
{
}

web::json::value ProtectableResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(vaultIsSet_) {
        val[utility::conversions::to_string_t("vault")] = ModelBase::toJson(vault_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}

bool ProtectableResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vault"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vault"));
        if(!fieldValue.is_null())
        {
            VaultGet refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}

std::string ProtectableResult::getCode() const
{
    return code_;
}

void ProtectableResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool ProtectableResult::codeIsSet() const
{
    return codeIsSet_;
}

void ProtectableResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string ProtectableResult::getReason() const
{
    return reason_;
}

void ProtectableResult::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool ProtectableResult::reasonIsSet() const
{
    return reasonIsSet_;
}

void ProtectableResult::unsetreason()
{
    reasonIsSet_ = false;
}

bool ProtectableResult::isResult() const
{
    return result_;
}

void ProtectableResult::setResult(bool value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ProtectableResult::resultIsSet() const
{
    return resultIsSet_;
}

void ProtectableResult::unsetresult()
{
    resultIsSet_ = false;
}

VaultGet ProtectableResult::getVault() const
{
    return vault_;
}

void ProtectableResult::setVault(const VaultGet& value)
{
    vault_ = value;
    vaultIsSet_ = true;
}

bool ProtectableResult::vaultIsSet() const
{
    return vaultIsSet_;
}

void ProtectableResult::unsetvault()
{
    vaultIsSet_ = false;
}

std::string ProtectableResult::getMessage() const
{
    return message_;
}

void ProtectableResult::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ProtectableResult::messageIsSet() const
{
    return messageIsSet_;
}

void ProtectableResult::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


