

#include "huaweicloud/dds/v3/model/HistoryInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




HistoryInfo::HistoryInfo()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

HistoryInfo::~HistoryInfo() = default;

void HistoryInfo::validate()
{
}

web::json::value HistoryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(parameterNameIsSet_) {
        val[utility::conversions::to_string_t("parameter_name")] = ModelBase::toJson(parameterName_);
    }
    if(oldValueIsSet_) {
        val[utility::conversions::to_string_t("old_value")] = ModelBase::toJson(oldValue_);
    }
    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}

bool HistoryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("parameter_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parameter_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParameterName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    return ok;
}

std::string HistoryInfo::getParameterName() const
{
    return parameterName_;
}

void HistoryInfo::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool HistoryInfo::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void HistoryInfo::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string HistoryInfo::getOldValue() const
{
    return oldValue_;
}

void HistoryInfo::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool HistoryInfo::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void HistoryInfo::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string HistoryInfo::getNewValue() const
{
    return newValue_;
}

void HistoryInfo::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool HistoryInfo::newValueIsSet() const
{
    return newValueIsSet_;
}

void HistoryInfo::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string HistoryInfo::getUpdatedAt() const
{
    return updatedAt_;
}

void HistoryInfo::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool HistoryInfo::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void HistoryInfo::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


