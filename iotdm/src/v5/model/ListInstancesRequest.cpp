

#include "huaweicloud/iotdm/v5/model/ListInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ListInstancesRequest::ListInstancesRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
}

ListInstancesRequest::~ListInstancesRequest() = default;

void ListInstancesRequest::validate()
{
}

web::json::value ListInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }

    return val;
}
bool ListInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceType(refVal);
        }
    }
    return ok;
}


int32_t ListInstancesRequest::getOffset() const
{
    return offset_;
}

void ListInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstancesRequest::getLimit() const
{
    return limit_;
}

void ListInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstancesRequest::getMarker() const
{
    return marker_;
}

void ListInstancesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListInstancesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListInstancesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListInstancesRequest::getName() const
{
    return name_;
}

void ListInstancesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListInstancesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListInstancesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListInstancesRequest::getInstanceType() const
{
    return instanceType_;
}

void ListInstancesRequest::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ListInstancesRequest::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ListInstancesRequest::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

}
}
}
}
}


