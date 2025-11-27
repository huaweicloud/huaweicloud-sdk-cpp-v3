

#include "huaweicloud/cdn/v2/model/ListDomainConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListDomainConfigsRequest::ListDomainConfigsRequest()
{
    domainNames_ = "";
    domainNamesIsSet_ = false;
    item_ = "";
    itemIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListDomainConfigsRequest::~ListDomainConfigsRequest() = default;

void ListDomainConfigsRequest::validate()
{
}

web::json::value ListDomainConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNamesIsSet_) {
        val[utility::conversions::to_string_t("domain_names")] = ModelBase::toJson(domainNames_);
    }
    if(itemIsSet_) {
        val[utility::conversions::to_string_t("item")] = ModelBase::toJson(item_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ListDomainConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("item"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string ListDomainConfigsRequest::getDomainNames() const
{
    return domainNames_;
}

void ListDomainConfigsRequest::setDomainNames(const std::string& value)
{
    domainNames_ = value;
    domainNamesIsSet_ = true;
}

bool ListDomainConfigsRequest::domainNamesIsSet() const
{
    return domainNamesIsSet_;
}

void ListDomainConfigsRequest::unsetdomainNames()
{
    domainNamesIsSet_ = false;
}

std::string ListDomainConfigsRequest::getItem() const
{
    return item_;
}

void ListDomainConfigsRequest::setItem(const std::string& value)
{
    item_ = value;
    itemIsSet_ = true;
}

bool ListDomainConfigsRequest::itemIsSet() const
{
    return itemIsSet_;
}

void ListDomainConfigsRequest::unsetitem()
{
    itemIsSet_ = false;
}

std::string ListDomainConfigsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListDomainConfigsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListDomainConfigsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListDomainConfigsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


