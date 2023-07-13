

#include "huaweicloud/cfw/v1/model/UpdateRuleAclDto.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateRuleAclDto::UpdateRuleAclDto()
{
    addressType_ = 0;
    addressTypeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sequenceIsSet_ = false;
    direction_ = 0;
    directionIsSet_ = false;
    actionType_ = 0;
    actionTypeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    longConnectTimeHour_ = 0L;
    longConnectTimeHourIsSet_ = false;
    longConnectTimeMinute_ = 0L;
    longConnectTimeMinuteIsSet_ = false;
    longConnectTimeSecond_ = 0L;
    longConnectTimeSecondIsSet_ = false;
    longConnectTime_ = 0L;
    longConnectTimeIsSet_ = false;
    longConnectEnable_ = 0;
    longConnectEnableIsSet_ = false;
    sourceIsSet_ = false;
    destinationIsSet_ = false;
    serviceIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
}

UpdateRuleAclDto::~UpdateRuleAclDto() = default;

void UpdateRuleAclDto::validate()
{
}

web::json::value UpdateRuleAclDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(longConnectTimeHourIsSet_) {
        val[utility::conversions::to_string_t("long_connect_time_hour")] = ModelBase::toJson(longConnectTimeHour_);
    }
    if(longConnectTimeMinuteIsSet_) {
        val[utility::conversions::to_string_t("long_connect_time_minute")] = ModelBase::toJson(longConnectTimeMinute_);
    }
    if(longConnectTimeSecondIsSet_) {
        val[utility::conversions::to_string_t("long_connect_time_second")] = ModelBase::toJson(longConnectTimeSecond_);
    }
    if(longConnectTimeIsSet_) {
        val[utility::conversions::to_string_t("long_connect_time")] = ModelBase::toJson(longConnectTime_);
    }
    if(longConnectEnableIsSet_) {
        val[utility::conversions::to_string_t("long_connect_enable")] = ModelBase::toJson(longConnectEnable_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(destinationIsSet_) {
        val[utility::conversions::to_string_t("destination")] = ModelBase::toJson(destination_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool UpdateRuleAclDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddressType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            OrderRuleAclDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("long_connect_time_hour"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_connect_time_hour"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongConnectTimeHour(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("long_connect_time_minute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_connect_time_minute"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongConnectTimeMinute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("long_connect_time_second"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_connect_time_second"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongConnectTimeSecond(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("long_connect_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_connect_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongConnectTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("long_connect_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_connect_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongConnectEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            RuleAddressDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            RuleAddressDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestination(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            RuleServiceDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}

int32_t UpdateRuleAclDto::getAddressType() const
{
    return addressType_;
}

void UpdateRuleAclDto::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool UpdateRuleAclDto::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void UpdateRuleAclDto::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string UpdateRuleAclDto::getName() const
{
    return name_;
}

void UpdateRuleAclDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateRuleAclDto::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateRuleAclDto::unsetname()
{
    nameIsSet_ = false;
}

OrderRuleAclDto UpdateRuleAclDto::getSequence() const
{
    return sequence_;
}

void UpdateRuleAclDto::setSequence(const OrderRuleAclDto& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool UpdateRuleAclDto::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void UpdateRuleAclDto::unsetsequence()
{
    sequenceIsSet_ = false;
}

int32_t UpdateRuleAclDto::getDirection() const
{
    return direction_;
}

void UpdateRuleAclDto::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool UpdateRuleAclDto::directionIsSet() const
{
    return directionIsSet_;
}

void UpdateRuleAclDto::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t UpdateRuleAclDto::getActionType() const
{
    return actionType_;
}

void UpdateRuleAclDto::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool UpdateRuleAclDto::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void UpdateRuleAclDto::unsetactionType()
{
    actionTypeIsSet_ = false;
}

int32_t UpdateRuleAclDto::getStatus() const
{
    return status_;
}

void UpdateRuleAclDto::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateRuleAclDto::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateRuleAclDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateRuleAclDto::getDescription() const
{
    return description_;
}

void UpdateRuleAclDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateRuleAclDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateRuleAclDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t UpdateRuleAclDto::getLongConnectTimeHour() const
{
    return longConnectTimeHour_;
}

void UpdateRuleAclDto::setLongConnectTimeHour(int64_t value)
{
    longConnectTimeHour_ = value;
    longConnectTimeHourIsSet_ = true;
}

bool UpdateRuleAclDto::longConnectTimeHourIsSet() const
{
    return longConnectTimeHourIsSet_;
}

void UpdateRuleAclDto::unsetlongConnectTimeHour()
{
    longConnectTimeHourIsSet_ = false;
}

int64_t UpdateRuleAclDto::getLongConnectTimeMinute() const
{
    return longConnectTimeMinute_;
}

void UpdateRuleAclDto::setLongConnectTimeMinute(int64_t value)
{
    longConnectTimeMinute_ = value;
    longConnectTimeMinuteIsSet_ = true;
}

bool UpdateRuleAclDto::longConnectTimeMinuteIsSet() const
{
    return longConnectTimeMinuteIsSet_;
}

void UpdateRuleAclDto::unsetlongConnectTimeMinute()
{
    longConnectTimeMinuteIsSet_ = false;
}

int64_t UpdateRuleAclDto::getLongConnectTimeSecond() const
{
    return longConnectTimeSecond_;
}

void UpdateRuleAclDto::setLongConnectTimeSecond(int64_t value)
{
    longConnectTimeSecond_ = value;
    longConnectTimeSecondIsSet_ = true;
}

bool UpdateRuleAclDto::longConnectTimeSecondIsSet() const
{
    return longConnectTimeSecondIsSet_;
}

void UpdateRuleAclDto::unsetlongConnectTimeSecond()
{
    longConnectTimeSecondIsSet_ = false;
}

int64_t UpdateRuleAclDto::getLongConnectTime() const
{
    return longConnectTime_;
}

void UpdateRuleAclDto::setLongConnectTime(int64_t value)
{
    longConnectTime_ = value;
    longConnectTimeIsSet_ = true;
}

bool UpdateRuleAclDto::longConnectTimeIsSet() const
{
    return longConnectTimeIsSet_;
}

void UpdateRuleAclDto::unsetlongConnectTime()
{
    longConnectTimeIsSet_ = false;
}

int32_t UpdateRuleAclDto::getLongConnectEnable() const
{
    return longConnectEnable_;
}

void UpdateRuleAclDto::setLongConnectEnable(int32_t value)
{
    longConnectEnable_ = value;
    longConnectEnableIsSet_ = true;
}

bool UpdateRuleAclDto::longConnectEnableIsSet() const
{
    return longConnectEnableIsSet_;
}

void UpdateRuleAclDto::unsetlongConnectEnable()
{
    longConnectEnableIsSet_ = false;
}

RuleAddressDto UpdateRuleAclDto::getSource() const
{
    return source_;
}

void UpdateRuleAclDto::setSource(const RuleAddressDto& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool UpdateRuleAclDto::sourceIsSet() const
{
    return sourceIsSet_;
}

void UpdateRuleAclDto::unsetsource()
{
    sourceIsSet_ = false;
}

RuleAddressDto UpdateRuleAclDto::getDestination() const
{
    return destination_;
}

void UpdateRuleAclDto::setDestination(const RuleAddressDto& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool UpdateRuleAclDto::destinationIsSet() const
{
    return destinationIsSet_;
}

void UpdateRuleAclDto::unsetdestination()
{
    destinationIsSet_ = false;
}

RuleServiceDto UpdateRuleAclDto::getService() const
{
    return service_;
}

void UpdateRuleAclDto::setService(const RuleServiceDto& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool UpdateRuleAclDto::serviceIsSet() const
{
    return serviceIsSet_;
}

void UpdateRuleAclDto::unsetservice()
{
    serviceIsSet_ = false;
}

int32_t UpdateRuleAclDto::getType() const
{
    return type_;
}

void UpdateRuleAclDto::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateRuleAclDto::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateRuleAclDto::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


