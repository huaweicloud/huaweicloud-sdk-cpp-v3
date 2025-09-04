

#include "huaweicloud/iotda/v5/model/ListSecurityProfilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListSecurityProfilesRequest::ListSecurityProfilesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    securityType_ = "";
    securityTypeIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    targetId_ = "";
    targetIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListSecurityProfilesRequest::~ListSecurityProfilesRequest() = default;

void ListSecurityProfilesRequest::validate()
{
}

web::json::value ListSecurityProfilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(securityTypeIsSet_) {
        val[utility::conversions::to_string_t("security_type")] = ModelBase::toJson(securityType_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(targetIdIsSet_) {
        val[utility::conversions::to_string_t("target_id")] = ModelBase::toJson(targetId_);
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
bool ListSecurityProfilesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("security_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetId(refVal);
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


std::string ListSecurityProfilesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSecurityProfilesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSecurityProfilesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSecurityProfilesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListSecurityProfilesRequest::getSecurityType() const
{
    return securityType_;
}

void ListSecurityProfilesRequest::setSecurityType(const std::string& value)
{
    securityType_ = value;
    securityTypeIsSet_ = true;
}

bool ListSecurityProfilesRequest::securityTypeIsSet() const
{
    return securityTypeIsSet_;
}

void ListSecurityProfilesRequest::unsetsecurityType()
{
    securityTypeIsSet_ = false;
}

std::string ListSecurityProfilesRequest::getTargetType() const
{
    return targetType_;
}

void ListSecurityProfilesRequest::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool ListSecurityProfilesRequest::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void ListSecurityProfilesRequest::unsettargetType()
{
    targetTypeIsSet_ = false;
}

std::string ListSecurityProfilesRequest::getTargetId() const
{
    return targetId_;
}

void ListSecurityProfilesRequest::setTargetId(const std::string& value)
{
    targetId_ = value;
    targetIdIsSet_ = true;
}

bool ListSecurityProfilesRequest::targetIdIsSet() const
{
    return targetIdIsSet_;
}

void ListSecurityProfilesRequest::unsettargetId()
{
    targetIdIsSet_ = false;
}

int32_t ListSecurityProfilesRequest::getLimit() const
{
    return limit_;
}

void ListSecurityProfilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListSecurityProfilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListSecurityProfilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListSecurityProfilesRequest::getMarker() const
{
    return marker_;
}

void ListSecurityProfilesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListSecurityProfilesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListSecurityProfilesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListSecurityProfilesRequest::getOffset() const
{
    return offset_;
}

void ListSecurityProfilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListSecurityProfilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListSecurityProfilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


