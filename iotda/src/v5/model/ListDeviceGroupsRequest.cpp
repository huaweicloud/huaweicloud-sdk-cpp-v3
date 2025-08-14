

#include "huaweicloud/iotda/v5/model/ListDeviceGroupsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDeviceGroupsRequest::ListDeviceGroupsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    lastModifiedTime_ = "";
    lastModifiedTimeIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
    groupType_ = "";
    groupTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ListDeviceGroupsRequest::~ListDeviceGroupsRequest() = default;

void ListDeviceGroupsRequest::validate()
{
}

web::json::value ListDeviceGroupsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
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
    if(lastModifiedTimeIsSet_) {
        val[utility::conversions::to_string_t("last_modified_time")] = ModelBase::toJson(lastModifiedTime_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(groupTypeIsSet_) {
        val[utility::conversions::to_string_t("group_type")] = ModelBase::toJson(groupType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ListDeviceGroupsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("last_modified_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ListDeviceGroupsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDeviceGroupsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDeviceGroupsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDeviceGroupsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListDeviceGroupsRequest::getLimit() const
{
    return limit_;
}

void ListDeviceGroupsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDeviceGroupsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDeviceGroupsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDeviceGroupsRequest::getMarker() const
{
    return marker_;
}

void ListDeviceGroupsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDeviceGroupsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDeviceGroupsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDeviceGroupsRequest::getOffset() const
{
    return offset_;
}

void ListDeviceGroupsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDeviceGroupsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDeviceGroupsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListDeviceGroupsRequest::getLastModifiedTime() const
{
    return lastModifiedTime_;
}

void ListDeviceGroupsRequest::setLastModifiedTime(const std::string& value)
{
    lastModifiedTime_ = value;
    lastModifiedTimeIsSet_ = true;
}

bool ListDeviceGroupsRequest::lastModifiedTimeIsSet() const
{
    return lastModifiedTimeIsSet_;
}

void ListDeviceGroupsRequest::unsetlastModifiedTime()
{
    lastModifiedTimeIsSet_ = false;
}

std::string ListDeviceGroupsRequest::getAppId() const
{
    return appId_;
}

void ListDeviceGroupsRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListDeviceGroupsRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListDeviceGroupsRequest::unsetappId()
{
    appIdIsSet_ = false;
}

std::string ListDeviceGroupsRequest::getGroupType() const
{
    return groupType_;
}

void ListDeviceGroupsRequest::setGroupType(const std::string& value)
{
    groupType_ = value;
    groupTypeIsSet_ = true;
}

bool ListDeviceGroupsRequest::groupTypeIsSet() const
{
    return groupTypeIsSet_;
}

void ListDeviceGroupsRequest::unsetgroupType()
{
    groupTypeIsSet_ = false;
}

std::string ListDeviceGroupsRequest::getName() const
{
    return name_;
}

void ListDeviceGroupsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDeviceGroupsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDeviceGroupsRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


