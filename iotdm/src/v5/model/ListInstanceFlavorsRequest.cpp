

#include "huaweicloud/iotdm/v5/model/ListInstanceFlavorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ListInstanceFlavorsRequest::ListInstanceFlavorsRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    instanceType_ = "";
    instanceTypeIsSet_ = false;
}

ListInstanceFlavorsRequest::~ListInstanceFlavorsRequest() = default;

void ListInstanceFlavorsRequest::validate()
{
}

web::json::value ListInstanceFlavorsRequest::toJson() const
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
    if(instanceTypeIsSet_) {
        val[utility::conversions::to_string_t("instance_type")] = ModelBase::toJson(instanceType_);
    }

    return val;
}
bool ListInstanceFlavorsRequest::fromJson(const web::json::value& val)
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


int32_t ListInstanceFlavorsRequest::getOffset() const
{
    return offset_;
}

void ListInstanceFlavorsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstanceFlavorsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstanceFlavorsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstanceFlavorsRequest::getLimit() const
{
    return limit_;
}

void ListInstanceFlavorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstanceFlavorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstanceFlavorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstanceFlavorsRequest::getMarker() const
{
    return marker_;
}

void ListInstanceFlavorsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListInstanceFlavorsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListInstanceFlavorsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListInstanceFlavorsRequest::getInstanceType() const
{
    return instanceType_;
}

void ListInstanceFlavorsRequest::setInstanceType(const std::string& value)
{
    instanceType_ = value;
    instanceTypeIsSet_ = true;
}

bool ListInstanceFlavorsRequest::instanceTypeIsSet() const
{
    return instanceTypeIsSet_;
}

void ListInstanceFlavorsRequest::unsetinstanceType()
{
    instanceTypeIsSet_ = false;
}

}
}
}
}
}


