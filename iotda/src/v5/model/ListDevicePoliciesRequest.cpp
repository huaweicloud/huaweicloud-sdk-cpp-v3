

#include "huaweicloud/iotda/v5/model/ListDevicePoliciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDevicePoliciesRequest::ListDevicePoliciesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    policyName_ = "";
    policyNameIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDevicePoliciesRequest::~ListDevicePoliciesRequest() = default;

void ListDevicePoliciesRequest::validate()
{
}

web::json::value ListDevicePoliciesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(policyNameIsSet_) {
        val[utility::conversions::to_string_t("policy_name")] = ModelBase::toJson(policyName_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListDevicePoliciesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("policy_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("policy_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPolicyName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    return ok;
}


std::string ListDevicePoliciesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDevicePoliciesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDevicePoliciesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDevicePoliciesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListDevicePoliciesRequest::getAppId() const
{
    return appId_;
}

void ListDevicePoliciesRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListDevicePoliciesRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListDevicePoliciesRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListDevicePoliciesRequest::getPolicyName() const
{
    return policyName_;
}

void ListDevicePoliciesRequest::setPolicyName(const std::string& value)
{
    policyName_ = value;
    policyNameIsSet_ = true;
}

bool ListDevicePoliciesRequest::policyNameIsSet() const
{
    return policyNameIsSet_;
}

void ListDevicePoliciesRequest::unsetpolicyName()
{
    policyNameIsSet_ = false;
}

int32_t ListDevicePoliciesRequest::getLimit() const
{
    return limit_;
}

void ListDevicePoliciesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDevicePoliciesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDevicePoliciesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDevicePoliciesRequest::getMarker() const
{
    return marker_;
}

void ListDevicePoliciesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDevicePoliciesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDevicePoliciesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDevicePoliciesRequest::getOffset() const
{
    return offset_;
}

void ListDevicePoliciesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDevicePoliciesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDevicePoliciesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


