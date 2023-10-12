

#include "huaweicloud/cdn/v2/model/HstsQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




HstsQuery::HstsQuery()
{
    status_ = "";
    statusIsSet_ = false;
    maxAge_ = 0;
    maxAgeIsSet_ = false;
    includeSubdomains_ = "";
    includeSubdomainsIsSet_ = false;
}

HstsQuery::~HstsQuery() = default;

void HstsQuery::validate()
{
}

web::json::value HstsQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(maxAgeIsSet_) {
        val[utility::conversions::to_string_t("max_age")] = ModelBase::toJson(maxAge_);
    }
    if(includeSubdomainsIsSet_) {
        val[utility::conversions::to_string_t("include_subdomains")] = ModelBase::toJson(includeSubdomains_);
    }

    return val;
}
bool HstsQuery::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("max_age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_age"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxAge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_subdomains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_subdomains"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeSubdomains(refVal);
        }
    }
    return ok;
}


std::string HstsQuery::getStatus() const
{
    return status_;
}

void HstsQuery::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool HstsQuery::statusIsSet() const
{
    return statusIsSet_;
}

void HstsQuery::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t HstsQuery::getMaxAge() const
{
    return maxAge_;
}

void HstsQuery::setMaxAge(int32_t value)
{
    maxAge_ = value;
    maxAgeIsSet_ = true;
}

bool HstsQuery::maxAgeIsSet() const
{
    return maxAgeIsSet_;
}

void HstsQuery::unsetmaxAge()
{
    maxAgeIsSet_ = false;
}

std::string HstsQuery::getIncludeSubdomains() const
{
    return includeSubdomains_;
}

void HstsQuery::setIncludeSubdomains(const std::string& value)
{
    includeSubdomains_ = value;
    includeSubdomainsIsSet_ = true;
}

bool HstsQuery::includeSubdomainsIsSet() const
{
    return includeSubdomainsIsSet_;
}

void HstsQuery::unsetincludeSubdomains()
{
    includeSubdomainsIsSet_ = false;
}

}
}
}
}
}


