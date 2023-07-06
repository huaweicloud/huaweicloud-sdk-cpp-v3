

#include "huaweicloud/live/v1/model/DeleteDomainMappingRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteDomainMappingRequest::DeleteDomainMappingRequest()
{
    pullDomain_ = "";
    pullDomainIsSet_ = false;
    pushDomain_ = "";
    pushDomainIsSet_ = false;
}

DeleteDomainMappingRequest::~DeleteDomainMappingRequest() = default;

void DeleteDomainMappingRequest::validate()
{
}

web::json::value DeleteDomainMappingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pullDomainIsSet_) {
        val[utility::conversions::to_string_t("pull_domain")] = ModelBase::toJson(pullDomain_);
    }
    if(pushDomainIsSet_) {
        val[utility::conversions::to_string_t("push_domain")] = ModelBase::toJson(pushDomain_);
    }

    return val;
}

bool DeleteDomainMappingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pull_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pull_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPullDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushDomain(refVal);
        }
    }
    return ok;
}

std::string DeleteDomainMappingRequest::getPullDomain() const
{
    return pullDomain_;
}

void DeleteDomainMappingRequest::setPullDomain(const std::string& value)
{
    pullDomain_ = value;
    pullDomainIsSet_ = true;
}

bool DeleteDomainMappingRequest::pullDomainIsSet() const
{
    return pullDomainIsSet_;
}

void DeleteDomainMappingRequest::unsetpullDomain()
{
    pullDomainIsSet_ = false;
}

std::string DeleteDomainMappingRequest::getPushDomain() const
{
    return pushDomain_;
}

void DeleteDomainMappingRequest::setPushDomain(const std::string& value)
{
    pushDomain_ = value;
    pushDomainIsSet_ = true;
}

bool DeleteDomainMappingRequest::pushDomainIsSet() const
{
    return pushDomainIsSet_;
}

void DeleteDomainMappingRequest::unsetpushDomain()
{
    pushDomainIsSet_ = false;
}

}
}
}
}
}


