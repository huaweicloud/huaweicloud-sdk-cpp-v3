

#include "huaweicloud/cfw/v1/model/RuleAclListResponseDTO_data_records.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleAclListResponseDTO_data_records::RuleAclListResponseDTO_data_records()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
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

RuleAclListResponseDTO_data_records::~RuleAclListResponseDTO_data_records() = default;

void RuleAclListResponseDTO_data_records::validate()
{
}

web::json::value RuleAclListResponseDTO_data_records::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
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

bool RuleAclListResponseDTO_data_records::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
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

std::string RuleAclListResponseDTO_data_records::getRuleId() const
{
    return ruleId_;
}

void RuleAclListResponseDTO_data_records::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetruleId()
{
    ruleIdIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data_records::getAddressType() const
{
    return addressType_;
}

void RuleAclListResponseDTO_data_records::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

std::string RuleAclListResponseDTO_data_records::getName() const
{
    return name_;
}

void RuleAclListResponseDTO_data_records::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::nameIsSet() const
{
    return nameIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetname()
{
    nameIsSet_ = false;
}

OrderRuleAclDto RuleAclListResponseDTO_data_records::getSequence() const
{
    return sequence_;
}

void RuleAclListResponseDTO_data_records::setSequence(const OrderRuleAclDto& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetsequence()
{
    sequenceIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data_records::getDirection() const
{
    return direction_;
}

void RuleAclListResponseDTO_data_records::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::directionIsSet() const
{
    return directionIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetdirection()
{
    directionIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data_records::getActionType() const
{
    return actionType_;
}

void RuleAclListResponseDTO_data_records::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetactionType()
{
    actionTypeIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data_records::getStatus() const
{
    return status_;
}

void RuleAclListResponseDTO_data_records::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::statusIsSet() const
{
    return statusIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetstatus()
{
    statusIsSet_ = false;
}

std::string RuleAclListResponseDTO_data_records::getDescription() const
{
    return description_;
}

void RuleAclListResponseDTO_data_records::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetdescription()
{
    descriptionIsSet_ = false;
}

int64_t RuleAclListResponseDTO_data_records::getLongConnectTimeHour() const
{
    return longConnectTimeHour_;
}

void RuleAclListResponseDTO_data_records::setLongConnectTimeHour(int64_t value)
{
    longConnectTimeHour_ = value;
    longConnectTimeHourIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::longConnectTimeHourIsSet() const
{
    return longConnectTimeHourIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetlongConnectTimeHour()
{
    longConnectTimeHourIsSet_ = false;
}

int64_t RuleAclListResponseDTO_data_records::getLongConnectTimeMinute() const
{
    return longConnectTimeMinute_;
}

void RuleAclListResponseDTO_data_records::setLongConnectTimeMinute(int64_t value)
{
    longConnectTimeMinute_ = value;
    longConnectTimeMinuteIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::longConnectTimeMinuteIsSet() const
{
    return longConnectTimeMinuteIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetlongConnectTimeMinute()
{
    longConnectTimeMinuteIsSet_ = false;
}

int64_t RuleAclListResponseDTO_data_records::getLongConnectTimeSecond() const
{
    return longConnectTimeSecond_;
}

void RuleAclListResponseDTO_data_records::setLongConnectTimeSecond(int64_t value)
{
    longConnectTimeSecond_ = value;
    longConnectTimeSecondIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::longConnectTimeSecondIsSet() const
{
    return longConnectTimeSecondIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetlongConnectTimeSecond()
{
    longConnectTimeSecondIsSet_ = false;
}

int64_t RuleAclListResponseDTO_data_records::getLongConnectTime() const
{
    return longConnectTime_;
}

void RuleAclListResponseDTO_data_records::setLongConnectTime(int64_t value)
{
    longConnectTime_ = value;
    longConnectTimeIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::longConnectTimeIsSet() const
{
    return longConnectTimeIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetlongConnectTime()
{
    longConnectTimeIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data_records::getLongConnectEnable() const
{
    return longConnectEnable_;
}

void RuleAclListResponseDTO_data_records::setLongConnectEnable(int32_t value)
{
    longConnectEnable_ = value;
    longConnectEnableIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::longConnectEnableIsSet() const
{
    return longConnectEnableIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetlongConnectEnable()
{
    longConnectEnableIsSet_ = false;
}

RuleAddressDto RuleAclListResponseDTO_data_records::getSource() const
{
    return source_;
}

void RuleAclListResponseDTO_data_records::setSource(const RuleAddressDto& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::sourceIsSet() const
{
    return sourceIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetsource()
{
    sourceIsSet_ = false;
}

RuleAddressDto RuleAclListResponseDTO_data_records::getDestination() const
{
    return destination_;
}

void RuleAclListResponseDTO_data_records::setDestination(const RuleAddressDto& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::destinationIsSet() const
{
    return destinationIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetdestination()
{
    destinationIsSet_ = false;
}

RuleServiceDto RuleAclListResponseDTO_data_records::getService() const
{
    return service_;
}

void RuleAclListResponseDTO_data_records::setService(const RuleServiceDto& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::serviceIsSet() const
{
    return serviceIsSet_;
}

void RuleAclListResponseDTO_data_records::unsetservice()
{
    serviceIsSet_ = false;
}

int32_t RuleAclListResponseDTO_data_records::getType() const
{
    return type_;
}

void RuleAclListResponseDTO_data_records::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleAclListResponseDTO_data_records::typeIsSet() const
{
    return typeIsSet_;
}

void RuleAclListResponseDTO_data_records::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


