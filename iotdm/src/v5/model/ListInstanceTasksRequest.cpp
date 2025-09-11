

#include "huaweicloud/iotdm/v5/model/ListInstanceTasksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ListInstanceTasksRequest::ListInstanceTasksRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
}

ListInstanceTasksRequest::~ListInstanceTasksRequest() = default;

void ListInstanceTasksRequest::validate()
{
}

web::json::value ListInstanceTasksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }

    return val;
}
bool ListInstanceTasksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    return ok;
}


std::string ListInstanceTasksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListInstanceTasksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListInstanceTasksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListInstanceTasksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListInstanceTasksRequest::getOffset() const
{
    return offset_;
}

void ListInstanceTasksRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceTasksRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceTasksRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstanceTasksRequest::getLimit() const
{
    return limit_;
}

void ListInstanceTasksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceTasksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceTasksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstanceTasksRequest::getMarker() const
{
    return marker_;
}

void ListInstanceTasksRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListInstanceTasksRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListInstanceTasksRequest::unsetmarker()
{
    markerIsSet_ = false;
}

}
}
}
}
}


