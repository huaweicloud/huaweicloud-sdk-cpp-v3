

#include "huaweicloud/gaussdbforopengauss/v3/model/ListHistoryOperationsResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListHistoryOperationsResult::ListHistoryOperationsResult()
{
    parameterName_ = "";
    parameterNameIsSet_ = false;
    oldValue_ = "";
    oldValueIsSet_ = false;
    newValue_ = "";
    newValueIsSet_ = false;
    updateResult_ = "";
    updateResultIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

ListHistoryOperationsResult::~ListHistoryOperationsResult() = default;

void ListHistoryOperationsResult::validate()
{
}

web::json::value ListHistoryOperationsResult::toJson() const
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
    if(updateResultIsSet_) {
        val[utility::conversions::to_string_t("update_result")] = ModelBase::toJson(updateResult_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool ListHistoryOperationsResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("update_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateResult(refVal);
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


std::string ListHistoryOperationsResult::getParameterName() const
{
    return parameterName_;
}

void ListHistoryOperationsResult::setParameterName(const std::string& value)
{
    parameterName_ = value;
    parameterNameIsSet_ = true;
}

bool ListHistoryOperationsResult::parameterNameIsSet() const
{
    return parameterNameIsSet_;
}

void ListHistoryOperationsResult::unsetparameterName()
{
    parameterNameIsSet_ = false;
}

std::string ListHistoryOperationsResult::getOldValue() const
{
    return oldValue_;
}

void ListHistoryOperationsResult::setOldValue(const std::string& value)
{
    oldValue_ = value;
    oldValueIsSet_ = true;
}

bool ListHistoryOperationsResult::oldValueIsSet() const
{
    return oldValueIsSet_;
}

void ListHistoryOperationsResult::unsetoldValue()
{
    oldValueIsSet_ = false;
}

std::string ListHistoryOperationsResult::getNewValue() const
{
    return newValue_;
}

void ListHistoryOperationsResult::setNewValue(const std::string& value)
{
    newValue_ = value;
    newValueIsSet_ = true;
}

bool ListHistoryOperationsResult::newValueIsSet() const
{
    return newValueIsSet_;
}

void ListHistoryOperationsResult::unsetnewValue()
{
    newValueIsSet_ = false;
}

std::string ListHistoryOperationsResult::getUpdateResult() const
{
    return updateResult_;
}

void ListHistoryOperationsResult::setUpdateResult(const std::string& value)
{
    updateResult_ = value;
    updateResultIsSet_ = true;
}

bool ListHistoryOperationsResult::updateResultIsSet() const
{
    return updateResultIsSet_;
}

void ListHistoryOperationsResult::unsetupdateResult()
{
    updateResultIsSet_ = false;
}

std::string ListHistoryOperationsResult::getUpdatedAt() const
{
    return updatedAt_;
}

void ListHistoryOperationsResult::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ListHistoryOperationsResult::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ListHistoryOperationsResult::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


