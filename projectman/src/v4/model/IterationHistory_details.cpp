

#include "huaweicloud/projectman/v4/model/IterationHistory_details.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




IterationHistory_details::IterationHistory_details()
{
    operateFieldName_ = "";
    operateFieldNameIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
}

IterationHistory_details::~IterationHistory_details() = default;

void IterationHistory_details::validate()
{
}

web::json::value IterationHistory_details::toJson() const
{
    web::json::value val = web::json::value::object();

    if(operateFieldNameIsSet_) {
        val[utility::conversions::to_string_t("operate_field_name")] = ModelBase::toJson(operateFieldName_);
    }
    if(newValueIsSet_) {
        val[utility::conversions::to_string_t("new_value")] = ModelBase::toJson(newValue_);
    }
    if(oldValueIsSet_) {
        val[utility::conversions::to_string_t("old_value")] = ModelBase::toJson(oldValue_);
    }

    return val;
}
bool IterationHistory_details::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("operate_field_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operate_field_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperateFieldName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("old_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldValue(refVal);
        }
    }
    return ok;
}


std::string IterationHistory_details::getOperateFieldName() const
{
    return operateFieldName_;
}

void IterationHistory_details::setOperateFieldName(const std::string& value)
{
    operateFieldName_ = value;
    operateFieldNameIsSet_ = true;
}

bool IterationHistory_details::operateFieldNameIsSet() const
{
    return operateFieldNameIsSet_;
}

void IterationHistory_details::unsetoperateFieldName()
{
    operateFieldNameIsSet_ = false;
}

std::string IterationHistory_details::getNewValue() const
{
    return newValue_;
}

void IterationHistory_details::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool IterationHistory_details::newValueIsSet() const
{
    return newValueIsSet_;
}

void IterationHistory_details::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string IterationHistory_details::getOldValue() const
{
    return oldValue_;
}

void IterationHistory_details::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool IterationHistory_details::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void IterationHistory_details::unsetoldValue()
{
    oldValueIsSet_ = false;
}

}
}
}
}
}


