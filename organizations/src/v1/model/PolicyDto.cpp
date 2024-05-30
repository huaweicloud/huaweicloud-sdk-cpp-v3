

#include "huaweicloud/organizations/v1/model/PolicyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




PolicyDto::PolicyDto()
{
    content_ = "";
    contentIsSet_ = false;
    policySummaryIsSet_ = false;
}

PolicyDto::~PolicyDto() = default;

void PolicyDto::validate()
{
}

web::json::value PolicyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(policySummaryIsSet_) {
        val[utility::conversions::to_string_t("policy_summary")] = ModelBase::toJson(policySummary_);
    }

    return val;
}
bool PolicyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_summary"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_summary"));
        if(!fieldValue.is_null())
        {
            PolicySummaryDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicySummary(refVal);
        }
    }
    return ok;
}


std::string PolicyDto::getContent() const
{
    return content_;
}

void PolicyDto::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool PolicyDto::contentIsSet() const
{
    return contentIsSet_;
}

void PolicyDto::unsetcontent()
{
    contentIsSet_ = false;
}

PolicySummaryDto PolicyDto::getPolicySummary() const
{
    return policySummary_;
}

void PolicyDto::setPolicySummary(const PolicySummaryDto& value)
{
    policySummary_ = value;
    policySummaryIsSet_ = true;
}

bool PolicyDto::policySummaryIsSet() const
{
    return policySummaryIsSet_;
}

void PolicyDto::unsetpolicySummary()
{
    policySummaryIsSet_ = false;
}

}
}
}
}
}


