

#include "huaweicloud/evs/v2/model/ListVolumesInRecycleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ListVolumesInRecycleRequest::ListVolumesInRecycleRequest()
{
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListVolumesInRecycleRequest::~ListVolumesInRecycleRequest() = default;

void ListVolumesInRecycleRequest::validate()
{
}

web::json::value ListVolumesInRecycleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListVolumesInRecycleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
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


std::string ListVolumesInRecycleRequest::getName() const
{
    return name_;
}

void ListVolumesInRecycleRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListVolumesInRecycleRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListVolumesInRecycleRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListVolumesInRecycleRequest::getStatus() const
{
    return status_;
}

void ListVolumesInRecycleRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListVolumesInRecycleRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListVolumesInRecycleRequest::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ListVolumesInRecycleRequest::getLimit() const
{
    return limit_;
}

void ListVolumesInRecycleRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVolumesInRecycleRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListVolumesInRecycleRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListVolumesInRecycleRequest::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ListVolumesInRecycleRequest::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ListVolumesInRecycleRequest::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ListVolumesInRecycleRequest::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string ListVolumesInRecycleRequest::getServiceType() const
{
    return serviceType_;
}

void ListVolumesInRecycleRequest::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool ListVolumesInRecycleRequest::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void ListVolumesInRecycleRequest::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

int32_t ListVolumesInRecycleRequest::getOffset() const
{
    return offset_;
}

void ListVolumesInRecycleRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVolumesInRecycleRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVolumesInRecycleRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


