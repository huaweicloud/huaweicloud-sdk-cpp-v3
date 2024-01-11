

#include "huaweicloud/drs/v5/model/ListJobHistoryParameter.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListJobHistoryParameter::ListJobHistoryParameter()
{
    name_ = "";
    nameIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    isUpdateSuccess_ = false;
    isUpdateSuccessIsSet_ = false;
    isApplied_ = false;
    isAppliedIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    applyTime_ = "";
    applyTimeIsSet_ = false;
}

ListJobHistoryParameter::~ListJobHistoryParameter() = default;

void ListJobHistoryParameter::validate()
{
}

web::json::value ListJobHistoryParameter::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(oldValueIsSet_) {
        val[utility::conversions::to_string_t("old_value")] = ModelBase::toJson(oldValue_);
    }
    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(isUpdateSuccessIsSet_) {
        val[utility::conversions::to_string_t("is_update_success")] = ModelBase::toJson(isUpdateSuccess_);
    }
    if(isAppliedIsSet_) {
        val[utility::conversions::to_string_t("is_applied")] = ModelBase::toJson(isApplied_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(applyTimeIsSet_) {
        val[utility::conversions::to_string_t("apply_time")] = ModelBase::toJson(applyTime_);
    }

    return val;
}
bool ListJobHistoryParameter::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("old_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_update_success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_update_success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUpdateSuccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_applied"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_applied"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsApplied(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyTime(refVal);
        }
    }
    return ok;
}


std::string ListJobHistoryParameter::getName() const
{
    return name_;
}

void ListJobHistoryParameter::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListJobHistoryParameter::nameIsSet() const
{
    return nameIsSet_;
}

void ListJobHistoryParameter::unsetname()
{
    nameIsSet_ = false;
}

std::string ListJobHistoryParameter::getOldValue() const
{
    return oldValue_;
}

void ListJobHistoryParameter::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool ListJobHistoryParameter::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void ListJobHistoryParameter::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string ListJobHistoryParameter::getNewValue() const
{
    return newValue_;
}

void ListJobHistoryParameter::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool ListJobHistoryParameter::newValueIsSet() const
{
    return newValueIsSet_;
}

void ListJobHistoryParameter::unsetnewValue()
{
    newValueIsSet_ = false;
}

bool ListJobHistoryParameter::isIsUpdateSuccess() const
{
    return isUpdateSuccess_;
}

void ListJobHistoryParameter::setIsUpdateSuccess(bool value)
{
    isUpdateSuccess_ = value;
    isUpdateSuccessIsSet_ = true;
}

bool ListJobHistoryParameter::isUpdateSuccessIsSet() const
{
    return isUpdateSuccessIsSet_;
}

void ListJobHistoryParameter::unsetisUpdateSuccess()
{
    isUpdateSuccessIsSet_ = false;
}

bool ListJobHistoryParameter::isIsApplied() const
{
    return isApplied_;
}

void ListJobHistoryParameter::setIsApplied(bool value)
{
    isApplied_ = value;
    isAppliedIsSet_ = true;
}

bool ListJobHistoryParameter::isAppliedIsSet() const
{
    return isAppliedIsSet_;
}

void ListJobHistoryParameter::unsetisApplied()
{
    isAppliedIsSet_ = false;
}

std::string ListJobHistoryParameter::getUpdateTime() const
{
    return updateTime_;
}

void ListJobHistoryParameter::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ListJobHistoryParameter::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ListJobHistoryParameter::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string ListJobHistoryParameter::getApplyTime() const
{
    return applyTime_;
}

void ListJobHistoryParameter::setApplyTime(const std::string& value)
{
    applyTime_ = value;
    applyTimeIsSet_ = true;
}

bool ListJobHistoryParameter::applyTimeIsSet() const
{
    return applyTimeIsSet_;
}

void ListJobHistoryParameter::unsetapplyTime()
{
    applyTimeIsSet_ = false;
}

}
}
}
}
}


