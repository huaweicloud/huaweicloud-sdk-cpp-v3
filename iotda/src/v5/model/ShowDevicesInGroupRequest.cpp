

#include "huaweicloud/iotda/v5/model/ShowDevicesInGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowDevicesInGroupRequest::ShowDevicesInGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ShowDevicesInGroupRequest::~ShowDevicesInGroupRequest() = default;

void ShowDevicesInGroupRequest::validate()
{
}

web::json::value ShowDevicesInGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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
bool ShowDevicesInGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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


std::string ShowDevicesInGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDevicesInGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDevicesInGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDevicesInGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowDevicesInGroupRequest::getGroupId() const
{
    return groupId_;
}

void ShowDevicesInGroupRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowDevicesInGroupRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowDevicesInGroupRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ShowDevicesInGroupRequest::getLimit() const
{
    return limit_;
}

void ShowDevicesInGroupRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowDevicesInGroupRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowDevicesInGroupRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowDevicesInGroupRequest::getMarker() const
{
    return marker_;
}

void ShowDevicesInGroupRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ShowDevicesInGroupRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ShowDevicesInGroupRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ShowDevicesInGroupRequest::getOffset() const
{
    return offset_;
}

void ShowDevicesInGroupRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowDevicesInGroupRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowDevicesInGroupRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


