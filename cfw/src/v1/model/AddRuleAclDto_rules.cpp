

#include "huaweicloud/cfw/v1/model/AddRuleAclDto_rules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddRuleAclDto_rules::AddRuleAclDto_rules()
{
    name_ = "";
    nameIsSet_ = false;
    sequenceIsSet_ = false;
    addressType_ = 0;
    addressTypeIsSet_ = false;
    actionType_ = 0;
    actionTypeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
    applicationsIsSet_ = false;
    applicationsJsonString_ = "";
    applicationsJsonStringIsSet_ = false;
    longConnectTime_ = 0L;
    longConnectTimeIsSet_ = false;
    longConnectTimeHour_ = 0L;
    longConnectTimeHourIsSet_ = false;
    longConnectTimeMinute_ = 0L;
    longConnectTimeMinuteIsSet_ = false;
    longConnectTimeSecond_ = 0L;
    longConnectTimeSecondIsSet_ = false;
    longConnectEnable_ = 0;
    longConnectEnableIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    direction_ = 0;
    directionIsSet_ = false;
    profileIsSet_ = false;
    sourceIsSet_ = false;
    destinationIsSet_ = false;
    serviceIsSet_ = false;
    tagIsSet_ = false;
}

AddRuleAclDto_rules::~AddRuleAclDto_rules() = default;

void AddRuleAclDto_rules::validate()
{
}

web::json::value AddRuleAclDto_rules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sequenceIsSet_) {
        val[utility::conversions::to_string_t("sequence")] = ModelBase::toJson(sequence_);
    }
    if(addressTypeIsSet_) {
        val[utility::conversions::to_string_t("address_type")] = ModelBase::toJson(addressType_);
    }
    if(actionTypeIsSet_) {
        val[utility::conversions::to_string_t("action_type")] = ModelBase::toJson(actionType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(applicationsIsSet_) {
        val[utility::conversions::to_string_t("applications")] = ModelBase::toJson(applications_);
    }
    if(applicationsJsonStringIsSet_) {
        val[utility::conversions::to_string_t("applicationsJsonString")] = ModelBase::toJson(applicationsJsonString_);
    }
    if(longConnectTimeIsSet_) {
        val[utility::conversions::to_string_t("long_connect_time")] = ModelBase::toJson(longConnectTime_);
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
    if(longConnectEnableIsSet_) {
        val[utility::conversions::to_string_t("long_connect_enable")] = ModelBase::toJson(longConnectEnable_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(profileIsSet_) {
        val[utility::conversions::to_string_t("profile")] = ModelBase::toJson(profile_);
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
    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }

    return val;
}
bool AddRuleAclDto_rules::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sequence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence"));
        if(!fieldValue.is_null())
        {
            OrderRuleAclDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequence(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("applications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applications"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplications(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applicationsJsonString"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicationsJsonString"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationsJsonString(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("long_connect_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("long_connect_enable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLongConnectEnable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("profile"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("profile"));
        if(!fieldValue.is_null())
        {
            RuleProfileDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProfile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            RuleAddressDtoForRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination"));
        if(!fieldValue.is_null())
        {
            RuleAddressDtoForRequest refVal;
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
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            TagsVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    return ok;
}


std::string AddRuleAclDto_rules::getName() const
{
    return name_;
}

void AddRuleAclDto_rules::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddRuleAclDto_rules::nameIsSet() const
{
    return nameIsSet_;
}

void AddRuleAclDto_rules::unsetname()
{
    nameIsSet_ = false;
}

OrderRuleAclDto AddRuleAclDto_rules::getSequence() const
{
    return sequence_;
}

void AddRuleAclDto_rules::setSequence(const OrderRuleAclDto& value)
{
    sequence_ = value;
    sequenceIsSet_ = true;
}

bool AddRuleAclDto_rules::sequenceIsSet() const
{
    return sequenceIsSet_;
}

void AddRuleAclDto_rules::unsetsequence()
{
    sequenceIsSet_ = false;
}

int32_t AddRuleAclDto_rules::getAddressType() const
{
    return addressType_;
}

void AddRuleAclDto_rules::setAddressType(int32_t value)
{
    addressType_ = value;
    addressTypeIsSet_ = true;
}

bool AddRuleAclDto_rules::addressTypeIsSet() const
{
    return addressTypeIsSet_;
}

void AddRuleAclDto_rules::unsetaddressType()
{
    addressTypeIsSet_ = false;
}

int32_t AddRuleAclDto_rules::getActionType() const
{
    return actionType_;
}

void AddRuleAclDto_rules::setActionType(int32_t value)
{
    actionType_ = value;
    actionTypeIsSet_ = true;
}

bool AddRuleAclDto_rules::actionTypeIsSet() const
{
    return actionTypeIsSet_;
}

void AddRuleAclDto_rules::unsetactionType()
{
    actionTypeIsSet_ = false;
}

int32_t AddRuleAclDto_rules::getStatus() const
{
    return status_;
}

void AddRuleAclDto_rules::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool AddRuleAclDto_rules::statusIsSet() const
{
    return statusIsSet_;
}

void AddRuleAclDto_rules::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<std::string>& AddRuleAclDto_rules::getApplications()
{
    return applications_;
}

void AddRuleAclDto_rules::setApplications(const std::vector<std::string>& value)
{
    applications_ = value;
    applicationsIsSet_ = true;
}

bool AddRuleAclDto_rules::applicationsIsSet() const
{
    return applicationsIsSet_;
}

void AddRuleAclDto_rules::unsetapplications()
{
    applicationsIsSet_ = false;
}

std::string AddRuleAclDto_rules::getApplicationsJsonString() const
{
    return applicationsJsonString_;
}

void AddRuleAclDto_rules::setApplicationsJsonString(const std::string& value)
{
    applicationsJsonString_ = value;
    applicationsJsonStringIsSet_ = true;
}

bool AddRuleAclDto_rules::applicationsJsonStringIsSet() const
{
    return applicationsJsonStringIsSet_;
}

void AddRuleAclDto_rules::unsetapplicationsJsonString()
{
    applicationsJsonStringIsSet_ = false;
}

int64_t AddRuleAclDto_rules::getLongConnectTime() const
{
    return longConnectTime_;
}

void AddRuleAclDto_rules::setLongConnectTime(int64_t value)
{
    longConnectTime_ = value;
    longConnectTimeIsSet_ = true;
}

bool AddRuleAclDto_rules::longConnectTimeIsSet() const
{
    return longConnectTimeIsSet_;
}

void AddRuleAclDto_rules::unsetlongConnectTime()
{
    longConnectTimeIsSet_ = false;
}

int64_t AddRuleAclDto_rules::getLongConnectTimeHour() const
{
    return longConnectTimeHour_;
}

void AddRuleAclDto_rules::setLongConnectTimeHour(int64_t value)
{
    longConnectTimeHour_ = value;
    longConnectTimeHourIsSet_ = true;
}

bool AddRuleAclDto_rules::longConnectTimeHourIsSet() const
{
    return longConnectTimeHourIsSet_;
}

void AddRuleAclDto_rules::unsetlongConnectTimeHour()
{
    longConnectTimeHourIsSet_ = false;
}

int64_t AddRuleAclDto_rules::getLongConnectTimeMinute() const
{
    return longConnectTimeMinute_;
}

void AddRuleAclDto_rules::setLongConnectTimeMinute(int64_t value)
{
    longConnectTimeMinute_ = value;
    longConnectTimeMinuteIsSet_ = true;
}

bool AddRuleAclDto_rules::longConnectTimeMinuteIsSet() const
{
    return longConnectTimeMinuteIsSet_;
}

void AddRuleAclDto_rules::unsetlongConnectTimeMinute()
{
    longConnectTimeMinuteIsSet_ = false;
}

int64_t AddRuleAclDto_rules::getLongConnectTimeSecond() const
{
    return longConnectTimeSecond_;
}

void AddRuleAclDto_rules::setLongConnectTimeSecond(int64_t value)
{
    longConnectTimeSecond_ = value;
    longConnectTimeSecondIsSet_ = true;
}

bool AddRuleAclDto_rules::longConnectTimeSecondIsSet() const
{
    return longConnectTimeSecondIsSet_;
}

void AddRuleAclDto_rules::unsetlongConnectTimeSecond()
{
    longConnectTimeSecondIsSet_ = false;
}

int32_t AddRuleAclDto_rules::getLongConnectEnable() const
{
    return longConnectEnable_;
}

void AddRuleAclDto_rules::setLongConnectEnable(int32_t value)
{
    longConnectEnable_ = value;
    longConnectEnableIsSet_ = true;
}

bool AddRuleAclDto_rules::longConnectEnableIsSet() const
{
    return longConnectEnableIsSet_;
}

void AddRuleAclDto_rules::unsetlongConnectEnable()
{
    longConnectEnableIsSet_ = false;
}

std::string AddRuleAclDto_rules::getDescription() const
{
    return description_;
}

void AddRuleAclDto_rules::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AddRuleAclDto_rules::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AddRuleAclDto_rules::unsetdescription()
{
    descriptionIsSet_ = false;
}

int32_t AddRuleAclDto_rules::getDirection() const
{
    return direction_;
}

void AddRuleAclDto_rules::setDirection(int32_t value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool AddRuleAclDto_rules::directionIsSet() const
{
    return directionIsSet_;
}

void AddRuleAclDto_rules::unsetdirection()
{
    directionIsSet_ = false;
}

RuleProfileDto AddRuleAclDto_rules::getProfile() const
{
    return profile_;
}

void AddRuleAclDto_rules::setProfile(const RuleProfileDto& value)
{
    profile_ = value;
    profileIsSet_ = true;
}

bool AddRuleAclDto_rules::profileIsSet() const
{
    return profileIsSet_;
}

void AddRuleAclDto_rules::unsetprofile()
{
    profileIsSet_ = false;
}

RuleAddressDtoForRequest AddRuleAclDto_rules::getSource() const
{
    return source_;
}

void AddRuleAclDto_rules::setSource(const RuleAddressDtoForRequest& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool AddRuleAclDto_rules::sourceIsSet() const
{
    return sourceIsSet_;
}

void AddRuleAclDto_rules::unsetsource()
{
    sourceIsSet_ = false;
}

RuleAddressDtoForRequest AddRuleAclDto_rules::getDestination() const
{
    return destination_;
}

void AddRuleAclDto_rules::setDestination(const RuleAddressDtoForRequest& value)
{
    destination_ = value;
    destinationIsSet_ = true;
}

bool AddRuleAclDto_rules::destinationIsSet() const
{
    return destinationIsSet_;
}

void AddRuleAclDto_rules::unsetdestination()
{
    destinationIsSet_ = false;
}

RuleServiceDto AddRuleAclDto_rules::getService() const
{
    return service_;
}

void AddRuleAclDto_rules::setService(const RuleServiceDto& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool AddRuleAclDto_rules::serviceIsSet() const
{
    return serviceIsSet_;
}

void AddRuleAclDto_rules::unsetservice()
{
    serviceIsSet_ = false;
}

TagsVO AddRuleAclDto_rules::getTag() const
{
    return tag_;
}

void AddRuleAclDto_rules::setTag(const TagsVO& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool AddRuleAclDto_rules::tagIsSet() const
{
    return tagIsSet_;
}

void AddRuleAclDto_rules::unsettag()
{
    tagIsSet_ = false;
}

}
}
}
}
}


