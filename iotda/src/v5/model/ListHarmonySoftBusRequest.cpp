

#include "huaweicloud/iotda/v5/model/ListHarmonySoftBusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListHarmonySoftBusRequest::ListHarmonySoftBusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    appId_ = "";
    appIdIsSet_ = false;
}

ListHarmonySoftBusRequest::~ListHarmonySoftBusRequest() = default;

void ListHarmonySoftBusRequest::validate()
{
}

web::json::value ListHarmonySoftBusRequest::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }

    return val;
}
bool ListHarmonySoftBusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    return ok;
}


std::string ListHarmonySoftBusRequest::getInstanceId() const
{
    return instanceId_;
}

void ListHarmonySoftBusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListHarmonySoftBusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListHarmonySoftBusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListHarmonySoftBusRequest::getLimit() const
{
    return limit_;
}

void ListHarmonySoftBusRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHarmonySoftBusRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHarmonySoftBusRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHarmonySoftBusRequest::getMarker() const
{
    return marker_;
}

void ListHarmonySoftBusRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListHarmonySoftBusRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListHarmonySoftBusRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListHarmonySoftBusRequest::getOffset() const
{
    return offset_;
}

void ListHarmonySoftBusRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHarmonySoftBusRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHarmonySoftBusRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListHarmonySoftBusRequest::getGroupId() const
{
    return groupId_;
}

void ListHarmonySoftBusRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListHarmonySoftBusRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListHarmonySoftBusRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListHarmonySoftBusRequest::getAppId() const
{
    return appId_;
}

void ListHarmonySoftBusRequest::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool ListHarmonySoftBusRequest::appIdIsSet() const
{
    return appIdIsSet_;
}

void ListHarmonySoftBusRequest::unsetappId()
{
    appIdIsSet_ = false;
}

}
}
}
}
}


