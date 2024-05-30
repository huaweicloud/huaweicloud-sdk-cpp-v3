

#include "huaweicloud/organizations/v1/model/PolicyTypeSummaryDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




PolicyTypeSummaryDto::PolicyTypeSummaryDto()
{
    status_ = "";
    statusIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

PolicyTypeSummaryDto::~PolicyTypeSummaryDto() = default;

void PolicyTypeSummaryDto::validate()
{
}

web::json::value PolicyTypeSummaryDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool PolicyTypeSummaryDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    return ok;
}


std::string PolicyTypeSummaryDto::getStatus() const
{
    return status_;
}

void PolicyTypeSummaryDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PolicyTypeSummaryDto::statusIsSet() const
{
    return statusIsSet_;
}

void PolicyTypeSummaryDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PolicyTypeSummaryDto::getType() const
{
    return type_;
}

void PolicyTypeSummaryDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PolicyTypeSummaryDto::typeIsSet() const
{
    return typeIsSet_;
}

void PolicyTypeSummaryDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


