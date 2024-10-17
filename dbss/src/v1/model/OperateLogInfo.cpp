

#include "huaweicloud/dbss/v1/model/OperateLogInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




OperateLogInfo::OperateLogInfo()
{
    id_ = "";
    idIsSet_ = false;
    user_ = "";
    userIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    function_ = "";
    functionIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
}

OperateLogInfo::~OperateLogInfo() = default;

void OperateLogInfo::validate()
{
}

web::json::value OperateLogInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(functionIsSet_) {
        val[utility::conversions::to_string_t("function")] = ModelBase::toJson(function_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool OperateLogInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("function"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("function"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFunction(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


std::string OperateLogInfo::getId() const
{
    return id_;
}

void OperateLogInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool OperateLogInfo::idIsSet() const
{
    return idIsSet_;
}

void OperateLogInfo::unsetid()
{
    idIsSet_ = false;
}

std::string OperateLogInfo::getUser() const
{
    return user_;
}

void OperateLogInfo::setUser(const std::string& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool OperateLogInfo::userIsSet() const
{
    return userIsSet_;
}

void OperateLogInfo::unsetuser()
{
    userIsSet_ = false;
}

std::string OperateLogInfo::getTime() const
{
    return time_;
}

void OperateLogInfo::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool OperateLogInfo::timeIsSet() const
{
    return timeIsSet_;
}

void OperateLogInfo::unsettime()
{
    timeIsSet_ = false;
}

std::string OperateLogInfo::getAction() const
{
    return action_;
}

void OperateLogInfo::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool OperateLogInfo::actionIsSet() const
{
    return actionIsSet_;
}

void OperateLogInfo::unsetaction()
{
    actionIsSet_ = false;
}

std::string OperateLogInfo::getFunction() const
{
    return function_;
}

void OperateLogInfo::setFunction(const std::string& value)
{
    function_ = value;
    functionIsSet_ = true;
}

bool OperateLogInfo::functionIsSet() const
{
    return functionIsSet_;
}

void OperateLogInfo::unsetfunction()
{
    functionIsSet_ = false;
}

std::string OperateLogInfo::getName() const
{
    return name_;
}

void OperateLogInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool OperateLogInfo::nameIsSet() const
{
    return nameIsSet_;
}

void OperateLogInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string OperateLogInfo::getDescription() const
{
    return description_;
}

void OperateLogInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool OperateLogInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void OperateLogInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string OperateLogInfo::getResult() const
{
    return result_;
}

void OperateLogInfo::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool OperateLogInfo::resultIsSet() const
{
    return resultIsSet_;
}

void OperateLogInfo::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


