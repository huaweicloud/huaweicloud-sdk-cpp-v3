

#include "huaweicloud/cce/v3/model/ResourceRequirements.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ResourceRequirements::ResourceRequirements()
{
    limitsIsSet_ = false;
    requestsIsSet_ = false;
}

ResourceRequirements::~ResourceRequirements() = default;

void ResourceRequirements::validate()
{
}

web::json::value ResourceRequirements::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitsIsSet_) {
        val[utility::conversions::to_string_t("limits")] = ModelBase::toJson(limits_);
    }
    if(requestsIsSet_) {
        val[utility::conversions::to_string_t("requests")] = ModelBase::toJson(requests_);
    }

    return val;
}
bool ResourceRequirements::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limits"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimits(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("requests"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequests(refVal);
        }
    }
    return ok;
}


std::map<std::string, std::string>& ResourceRequirements::getLimits()
{
    return limits_;
}

void ResourceRequirements::setLimits(const std::map<std::string, std::string>& value)
{
    limits_ = value;
    limitsIsSet_ = true;
}

bool ResourceRequirements::limitsIsSet() const
{
    return limitsIsSet_;
}

void ResourceRequirements::unsetlimits()
{
    limitsIsSet_ = false;
}

std::map<std::string, std::string>& ResourceRequirements::getRequests()
{
    return requests_;
}

void ResourceRequirements::setRequests(const std::map<std::string, std::string>& value)
{
    requests_ = value;
    requestsIsSet_ = true;
}

bool ResourceRequirements::requestsIsSet() const
{
    return requestsIsSet_;
}

void ResourceRequirements::unsetrequests()
{
    requestsIsSet_ = false;
}

}
}
}
}
}


