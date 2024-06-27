

#include "huaweicloud/cfw/v1/model/CaptureTaskDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CaptureTaskDto::CaptureTaskDto()
{
    destinationIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    maxPackets_ = 0;
    maxPacketsIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    serviceIsSet_ = false;
    sourceIsSet_ = false;
}

CaptureTaskDto::~CaptureTaskDto() = default;

void CaptureTaskDto::validate()
{
}

web::json::value CaptureTaskDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(maxPacketsIsSet_) {
        val[utility::conversions::to_string_t("max_packets")] = ModelBase::toJson(maxPackets_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }

    return val;
}
bool CaptureTaskDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            CaptureRuleAddressDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_packets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_packets"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxPackets(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            CaptureServiceDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            CaptureRuleAddressDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    return ok;
}


CaptureRuleAddressDto CaptureTaskDto::getDestination() const
{
    return destination_;
}

void CaptureTaskDto::setDestination(const CaptureRuleAddressDto& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool CaptureTaskDto::destinationIsSet() const
{
    return destinationIsSet_;
}

void CaptureTaskDto::unsetdestination()
{
    destinationIsSet_ = false;
}

int32_t CaptureTaskDto::getDuration() const
{
    return duration_;
}

void CaptureTaskDto::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool CaptureTaskDto::durationIsSet() const
{
    return durationIsSet_;
}

void CaptureTaskDto::unsetduration()
{
    durationIsSet_ = false;
}

int32_t CaptureTaskDto::getMaxPackets() const
{
    return maxPackets_;
}

void CaptureTaskDto::setMaxPackets(int32_t value)
{
    maxPackets_ = value;
    maxPacketsIsSet_ = true;
}

bool CaptureTaskDto::maxPacketsIsSet() const
{
    return maxPacketsIsSet_;
}

void CaptureTaskDto::unsetmaxPackets()
{
    maxPacketsIsSet_ = false;
}

std::string CaptureTaskDto::getName() const
{
    return name_;
}

void CaptureTaskDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CaptureTaskDto::nameIsSet() const
{
    return nameIsSet_;
}

void CaptureTaskDto::unsetname()
{
    nameIsSet_ = false;
}

CaptureServiceDto CaptureTaskDto::getService() const
{
    return service_;
}

void CaptureTaskDto::setService(const CaptureServiceDto& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool CaptureTaskDto::serviceIsSet() const
{
    return serviceIsSet_;
}

void CaptureTaskDto::unsetservice()
{
    serviceIsSet_ = false;
}

CaptureRuleAddressDto CaptureTaskDto::getSource() const
{
    return source_;
}

void CaptureTaskDto::setSource(const CaptureRuleAddressDto& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool CaptureTaskDto::sourceIsSet() const
{
    return sourceIsSet_;
}

void CaptureTaskDto::unsetsource()
{
    sourceIsSet_ = false;
}

}
}
}
}
}


