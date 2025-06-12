

#include "huaweicloud/metastudio/v1/model/ListTenantResourcesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTenantResourcesResponse::ListTenantResourcesResponse()
{
    resourcesIsSet_ = false;
    count_ = 0.0;
    countIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTenantResourcesResponse::~ListTenantResourcesResponse() = default;

void ListTenantResourcesResponse::validate()
{
}

web::json::value ListTenantResourcesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTenantResourcesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceItemInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::vector<ResourceItemInfo>& ListTenantResourcesResponse::getResources()
{
    return resources_;
}

void ListTenantResourcesResponse::setResources(const std::vector<ResourceItemInfo>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListTenantResourcesResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListTenantResourcesResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

double ListTenantResourcesResponse::getCount() const
{
    return count_;
}

void ListTenantResourcesResponse::setCount(double value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListTenantResourcesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListTenantResourcesResponse::unsetcount()
{
    countIsSet_ = false;
}

std::string ListTenantResourcesResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTenantResourcesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTenantResourcesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTenantResourcesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


