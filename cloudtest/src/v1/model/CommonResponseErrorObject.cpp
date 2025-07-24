

#include "huaweicloud/cloudtest/v1/model/CommonResponseErrorObject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommonResponseErrorObject::CommonResponseErrorObject()
{
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

CommonResponseErrorObject::~CommonResponseErrorObject() = default;

void CommonResponseErrorObject::validate()
{
}

web::json::value CommonResponseErrorObject::toJson() const
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
bool CommonResponseErrorObject::fromJson(const web::json::value& val)
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


std::string CommonResponseErrorObject::getCode() const
{
    return code_;
}

void CommonResponseErrorObject::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CommonResponseErrorObject::codeIsSet() const
{
    return codeIsSet_;
}

void CommonResponseErrorObject::unsetcode()
{
    codeIsSet_ = false;
}

std::string CommonResponseErrorObject::getReason() const
{
    return reason_;
}

void CommonResponseErrorObject::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CommonResponseErrorObject::reasonIsSet() const
{
    return reasonIsSet_;
}

void CommonResponseErrorObject::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


