

#include "huaweicloud/metastudio/v1/model/ListTenantResourcesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListTenantResourcesRequest::ListTenantResourcesRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    resource_ = "";
    resourceIsSet_ = false;
    business_ = "";
    businessIsSet_ = false;
    resourceSource_ = "";
    resourceSourceIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    orderId_ = "";
    orderIdIsSet_ = false;
    chargingMode_ = "";
    chargingModeIsSet_ = false;
    resourceExpireStartTime_ = "";
    resourceExpireStartTimeIsSet_ = false;
    resourceExpireEndTime_ = "";
    resourceExpireEndTimeIsSet_ = false;
    subResource_ = "";
    subResourceIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ListTenantResourcesRequest::~ListTenantResourcesRequest() = default;

void ListTenantResourcesRequest::validate()
{
}

web::json::value ListTenantResourcesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(resourceIsSet_) {
        val[utility::conversions::to_string_t("resource")] = ModelBase::toJson(resource_);
    }
    if(businessIsSet_) {
        val[utility::conversions::to_string_t("business")] = ModelBase::toJson(business_);
    }
    if(resourceSourceIsSet_) {
        val[utility::conversions::to_string_t("resource_source")] = ModelBase::toJson(resourceSource_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(orderIdIsSet_) {
        val[utility::conversions::to_string_t("order_id")] = ModelBase::toJson(orderId_);
    }
    if(chargingModeIsSet_) {
        val[utility::conversions::to_string_t("charging_mode")] = ModelBase::toJson(chargingMode_);
    }
    if(resourceExpireStartTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_expire_start_time")] = ModelBase::toJson(resourceExpireStartTime_);
    }
    if(resourceExpireEndTimeIsSet_) {
        val[utility::conversions::to_string_t("resource_expire_end_time")] = ModelBase::toJson(resourceExpireEndTime_);
    }
    if(subResourceIsSet_) {
        val[utility::conversions::to_string_t("sub_resource")] = ModelBase::toJson(subResource_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ListTenantResourcesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusiness(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("charging_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charging_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChargingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_expire_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_expire_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceExpireStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_expire_end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_expire_end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceExpireEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_resource"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_resource"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubResource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string ListTenantResourcesRequest::getAuthorization() const
{
    return authorization_;
}

void ListTenantResourcesRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListTenantResourcesRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListTenantResourcesRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListTenantResourcesRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListTenantResourcesRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListTenantResourcesRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListTenantResourcesRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListTenantResourcesRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListTenantResourcesRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListTenantResourcesRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListTenantResourcesRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

int32_t ListTenantResourcesRequest::getLimit() const
{
    return limit_;
}

void ListTenantResourcesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListTenantResourcesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListTenantResourcesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListTenantResourcesRequest::getOffset() const
{
    return offset_;
}

void ListTenantResourcesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListTenantResourcesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListTenantResourcesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListTenantResourcesRequest::getResource() const
{
    return resource_;
}

void ListTenantResourcesRequest::setResource(const std::string& value)
{
    resource_ = value;
    resourceIsSet_ = true;
}

bool ListTenantResourcesRequest::resourceIsSet() const
{
    return resourceIsSet_;
}

void ListTenantResourcesRequest::unsetresource()
{
    resourceIsSet_ = false;
}

std::string ListTenantResourcesRequest::getBusiness() const
{
    return business_;
}

void ListTenantResourcesRequest::setBusiness(const std::string& value)
{
    business_ = value;
    businessIsSet_ = true;
}

bool ListTenantResourcesRequest::businessIsSet() const
{
    return businessIsSet_;
}

void ListTenantResourcesRequest::unsetbusiness()
{
    businessIsSet_ = false;
}

std::string ListTenantResourcesRequest::getResourceSource() const
{
    return resourceSource_;
}

void ListTenantResourcesRequest::setResourceSource(const std::string& value)
{
    resourceSource_ = value;
    resourceSourceIsSet_ = true;
}

bool ListTenantResourcesRequest::resourceSourceIsSet() const
{
    return resourceSourceIsSet_;
}

void ListTenantResourcesRequest::unsetresourceSource()
{
    resourceSourceIsSet_ = false;
}

std::string ListTenantResourcesRequest::getResourceId() const
{
    return resourceId_;
}

void ListTenantResourcesRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListTenantResourcesRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListTenantResourcesRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string ListTenantResourcesRequest::getOrderId() const
{
    return orderId_;
}

void ListTenantResourcesRequest::setOrderId(const std::string& value)
{
    orderId_ = value;
    orderIdIsSet_ = true;
}

bool ListTenantResourcesRequest::orderIdIsSet() const
{
    return orderIdIsSet_;
}

void ListTenantResourcesRequest::unsetorderId()
{
    orderIdIsSet_ = false;
}

std::string ListTenantResourcesRequest::getChargingMode() const
{
    return chargingMode_;
}

void ListTenantResourcesRequest::setChargingMode(const std::string& value)
{
    chargingMode_ = value;
    chargingModeIsSet_ = true;
}

bool ListTenantResourcesRequest::chargingModeIsSet() const
{
    return chargingModeIsSet_;
}

void ListTenantResourcesRequest::unsetchargingMode()
{
    chargingModeIsSet_ = false;
}

std::string ListTenantResourcesRequest::getResourceExpireStartTime() const
{
    return resourceExpireStartTime_;
}

void ListTenantResourcesRequest::setResourceExpireStartTime(const std::string& value)
{
    resourceExpireStartTime_ = value;
    resourceExpireStartTimeIsSet_ = true;
}

bool ListTenantResourcesRequest::resourceExpireStartTimeIsSet() const
{
    return resourceExpireStartTimeIsSet_;
}

void ListTenantResourcesRequest::unsetresourceExpireStartTime()
{
    resourceExpireStartTimeIsSet_ = false;
}

std::string ListTenantResourcesRequest::getResourceExpireEndTime() const
{
    return resourceExpireEndTime_;
}

void ListTenantResourcesRequest::setResourceExpireEndTime(const std::string& value)
{
    resourceExpireEndTime_ = value;
    resourceExpireEndTimeIsSet_ = true;
}

bool ListTenantResourcesRequest::resourceExpireEndTimeIsSet() const
{
    return resourceExpireEndTimeIsSet_;
}

void ListTenantResourcesRequest::unsetresourceExpireEndTime()
{
    resourceExpireEndTimeIsSet_ = false;
}

std::string ListTenantResourcesRequest::getSubResource() const
{
    return subResource_;
}

void ListTenantResourcesRequest::setSubResource(const std::string& value)
{
    subResource_ = value;
    subResourceIsSet_ = true;
}

bool ListTenantResourcesRequest::subResourceIsSet() const
{
    return subResourceIsSet_;
}

void ListTenantResourcesRequest::unsetsubResource()
{
    subResourceIsSet_ = false;
}

int32_t ListTenantResourcesRequest::getStatus() const
{
    return status_;
}

void ListTenantResourcesRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListTenantResourcesRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListTenantResourcesRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


