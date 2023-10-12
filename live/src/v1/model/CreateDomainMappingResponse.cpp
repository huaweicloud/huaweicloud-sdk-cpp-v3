

#include "huaweicloud/live/v1/model/CreateDomainMappingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateDomainMappingResponse::CreateDomainMappingResponse()
{
    pullDomain_ = "";
    pullDomainIsSet_ = false;
    pushDomain_ = "";
    pushDomainIsSet_ = false;
}

CreateDomainMappingResponse::~CreateDomainMappingResponse() = default;

void CreateDomainMappingResponse::validate()
{
}

web::json::value CreateDomainMappingResponse::toJson() const
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
bool CreateDomainMappingResponse::fromJson(const web::json::value& val)
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


std::string CreateDomainMappingResponse::getPullDomain() const
{
    return pullDomain_;
}

void CreateDomainMappingResponse::setPullDomain(const std::string& value)
{
    pullDomain_ = value;
    pullDomainIsSet_ = true;
}

bool CreateDomainMappingResponse::pullDomainIsSet() const
{
    return pullDomainIsSet_;
}

void CreateDomainMappingResponse::unsetpullDomain()
{
    pullDomainIsSet_ = false;
}

std::string CreateDomainMappingResponse::getPushDomain() const
{
    return pushDomain_;
}

void CreateDomainMappingResponse::setPushDomain(const std::string& value)
{
    pushDomain_ = value;
    pushDomainIsSet_ = true;
}

bool CreateDomainMappingResponse::pushDomainIsSet() const
{
    return pushDomainIsSet_;
}

void CreateDomainMappingResponse::unsetpushDomain()
{
    pushDomainIsSet_ = false;
}

}
}
}
}
}


