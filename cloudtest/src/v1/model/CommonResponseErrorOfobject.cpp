

#include "huaweicloud/cloudtest/v1/model/CommonResponseErrorOfobject.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommonResponseErrorOfobject::CommonResponseErrorOfobject()
{
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

CommonResponseErrorOfobject::~CommonResponseErrorOfobject() = default;

void CommonResponseErrorOfobject::validate()
{
}

web::json::value CommonResponseErrorOfobject::toJson() const
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
bool CommonResponseErrorOfobject::fromJson(const web::json::value& val)
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


std::string CommonResponseErrorOfobject::getCode() const
{
    return code_;
}

void CommonResponseErrorOfobject::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CommonResponseErrorOfobject::codeIsSet() const
{
    return codeIsSet_;
}

void CommonResponseErrorOfobject::unsetcode()
{
    codeIsSet_ = false;
}

std::string CommonResponseErrorOfobject::getReason() const
{
    return reason_;
}

void CommonResponseErrorOfobject::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CommonResponseErrorOfobject::reasonIsSet() const
{
    return reasonIsSet_;
}

void CommonResponseErrorOfobject::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


