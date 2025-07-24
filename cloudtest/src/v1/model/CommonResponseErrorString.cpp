

#include "huaweicloud/cloudtest/v1/model/CommonResponseErrorString.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommonResponseErrorString::CommonResponseErrorString()
{
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

CommonResponseErrorString::~CommonResponseErrorString() = default;

void CommonResponseErrorString::validate()
{
}

web::json::value CommonResponseErrorString::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool CommonResponseErrorString::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CommonResponseErrorString::getCode() const
{
    return code_;
}

void CommonResponseErrorString::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CommonResponseErrorString::codeIsSet() const
{
    return codeIsSet_;
}

void CommonResponseErrorString::unsetcode()
{
    codeIsSet_ = false;
}

std::string CommonResponseErrorString::getReason() const
{
    return reason_;
}

void CommonResponseErrorString::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CommonResponseErrorString::reasonIsSet() const
{
    return reasonIsSet_;
}

void CommonResponseErrorString::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


