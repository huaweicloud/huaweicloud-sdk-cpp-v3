

#include "huaweicloud/drs/v3/model/AzInfoResp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




AzInfoResp::AzInfoResp()
{
    code_ = "";
    codeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

AzInfoResp::~AzInfoResp() = default;

void AzInfoResp::validate()
{
}

web::json::value AzInfoResp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}

bool AzInfoResp::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}

std::string AzInfoResp::getCode() const
{
    return code_;
}

void AzInfoResp::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool AzInfoResp::codeIsSet() const
{
    return codeIsSet_;
}

void AzInfoResp::unsetcode()
{
    codeIsSet_ = false;
}

std::string AzInfoResp::getName() const
{
    return name_;
}

void AzInfoResp::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AzInfoResp::nameIsSet() const
{
    return nameIsSet_;
}

void AzInfoResp::unsetname()
{
    nameIsSet_ = false;
}

std::string AzInfoResp::getStatus() const
{
    return status_;
}

void AzInfoResp::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AzInfoResp::statusIsSet() const
{
    return statusIsSet_;
}

void AzInfoResp::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


