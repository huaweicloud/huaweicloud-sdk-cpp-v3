

#include "huaweicloud/iotda/v5/model/ListDomainConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListDomainConfigurationsRequest::ListDomainConfigurationsRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListDomainConfigurationsRequest::~ListDomainConfigurationsRequest() = default;

void ListDomainConfigurationsRequest::validate()
{
}

web::json::value ListDomainConfigurationsRequest::toJson() const
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

    return val;
}
bool ListDomainConfigurationsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListDomainConfigurationsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListDomainConfigurationsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListDomainConfigurationsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListDomainConfigurationsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListDomainConfigurationsRequest::getLimit() const
{
    return limit_;
}

void ListDomainConfigurationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDomainConfigurationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDomainConfigurationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDomainConfigurationsRequest::getMarker() const
{
    return marker_;
}

void ListDomainConfigurationsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDomainConfigurationsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDomainConfigurationsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListDomainConfigurationsRequest::getOffset() const
{
    return offset_;
}

void ListDomainConfigurationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListDomainConfigurationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListDomainConfigurationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


