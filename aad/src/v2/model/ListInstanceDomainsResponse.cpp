

#include "huaweicloud/aad/v2/model/ListInstanceDomainsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {




ListInstanceDomainsResponse::ListInstanceDomainsResponse()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    instanceName_ = "";
    instanceNameIsSet_ = false;
    domainsIsSet_ = false;
}

ListInstanceDomainsResponse::~ListInstanceDomainsResponse() = default;

void ListInstanceDomainsResponse::validate()
{
}

web::json::value ListInstanceDomainsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(instanceNameIsSet_) {
        val[utility::conversions::to_string_t("instance_name")] = ModelBase::toJson(instanceName_);
    }
    if(domainsIsSet_) {
        val[utility::conversions::to_string_t("domains")] = ModelBase::toJson(domains_);
    }

    return val;
}
bool ListInstanceDomainsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domains"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domains"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceDomainItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomains(refVal);
        }
    }
    return ok;
}


std::string ListInstanceDomainsResponse::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceDomainsResponse::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceDomainsResponse::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceDomainsResponse::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListInstanceDomainsResponse::getInstanceName() const
{
    return instanceName_;
}

void ListInstanceDomainsResponse::setInstanceName(const std::string& value)
{
    instanceName_ = value;
    instanceNameIsSet_ = true;
}

bool ListInstanceDomainsResponse::instanceNameIsSet() const
{
    return instanceNameIsSet_;
}

void ListInstanceDomainsResponse::unsetinstanceName()
{
    instanceNameIsSet_ = false;
}

std::vector<InstanceDomainItem>& ListInstanceDomainsResponse::getDomains()
{
    return domains_;
}

void ListInstanceDomainsResponse::setDomains(const std::vector<InstanceDomainItem>& value)
{
    domains_ = value;
    domainsIsSet_ = true;
}

bool ListInstanceDomainsResponse::domainsIsSet() const
{
    return domainsIsSet_;
}

void ListInstanceDomainsResponse::unsetdomains()
{
    domainsIsSet_ = false;
}

}
}
}
}
}


