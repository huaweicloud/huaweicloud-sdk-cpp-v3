

#include "huaweicloud/geip/v3/model/ListTenantGeipSupportInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListTenantGeipSupportInstancesRequest::ListTenantGeipSupportInstancesRequest()
{
    accessSite_ = "";
    accessSiteIsSet_ = false;
    fieldsIsSet_ = false;
}

ListTenantGeipSupportInstancesRequest::~ListTenantGeipSupportInstancesRequest() = default;

void ListTenantGeipSupportInstancesRequest::validate()
{
}

web::json::value ListTenantGeipSupportInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(accessSiteIsSet_) {
        val[utility::conversions::to_string_t("access_site")] = ModelBase::toJson(accessSite_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }

    return val;
}
bool ListTenantGeipSupportInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("access_site"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("access_site"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccessSite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    return ok;
}


std::string ListTenantGeipSupportInstancesRequest::getAccessSite() const
{
    return accessSite_;
}

void ListTenantGeipSupportInstancesRequest::setAccessSite(const std::string& value)
{
    accessSite_ = value;
    accessSiteIsSet_ = true;
}

bool ListTenantGeipSupportInstancesRequest::accessSiteIsSet() const
{
    return accessSiteIsSet_;
}

void ListTenantGeipSupportInstancesRequest::unsetaccessSite()
{
    accessSiteIsSet_ = false;
}

std::vector<std::string>& ListTenantGeipSupportInstancesRequest::getFields()
{
    return fields_;
}

void ListTenantGeipSupportInstancesRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListTenantGeipSupportInstancesRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListTenantGeipSupportInstancesRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

}
}
}
}
}


