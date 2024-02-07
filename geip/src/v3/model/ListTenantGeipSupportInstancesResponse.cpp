

#include "huaweicloud/geip/v3/model/ListTenantGeipSupportInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListTenantGeipSupportInstancesResponse::ListTenantGeipSupportInstancesResponse()
{
    requestId_ = "";
    requestIdIsSet_ = false;
    supportRegionsIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ListTenantGeipSupportInstancesResponse::~ListTenantGeipSupportInstancesResponse() = default;

void ListTenantGeipSupportInstancesResponse::validate()
{
}

web::json::value ListTenantGeipSupportInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }
    if(supportRegionsIsSet_) {
        val[utility::conversions::to_string_t("support_regions")] = ModelBase::toJson(supportRegions_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ListTenantGeipSupportInstancesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_regions"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSupportInstancesSupportRegions> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportRegions(refVal);
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


std::string ListTenantGeipSupportInstancesResponse::getRequestId() const
{
    return requestId_;
}

void ListTenantGeipSupportInstancesResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTenantGeipSupportInstancesResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTenantGeipSupportInstancesResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

std::vector<ListSupportInstancesSupportRegions>& ListTenantGeipSupportInstancesResponse::getSupportRegions()
{
    return supportRegions_;
}

void ListTenantGeipSupportInstancesResponse::setSupportRegions(const std::vector<ListSupportInstancesSupportRegions>& value)
{
    supportRegions_ = value;
    supportRegionsIsSet_ = true;
}

bool ListTenantGeipSupportInstancesResponse::supportRegionsIsSet() const
{
    return supportRegionsIsSet_;
}

void ListTenantGeipSupportInstancesResponse::unsetsupportRegions()
{
    supportRegionsIsSet_ = false;
}

std::string ListTenantGeipSupportInstancesResponse::getXRequestId() const
{
    return xRequestId_;
}

void ListTenantGeipSupportInstancesResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListTenantGeipSupportInstancesResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListTenantGeipSupportInstancesResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


