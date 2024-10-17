

#include "huaweicloud/dbss/v1/model/OperateLogGetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




OperateLogGetRequest::OperateLogGetRequest()
{
    timeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
    result_ = "";
    resultIsSet_ = false;
    page_ = "";
    pageIsSet_ = false;
    size_ = "";
    sizeIsSet_ = false;
}

OperateLogGetRequest::~OperateLogGetRequest() = default;

void OperateLogGetRequest::validate()
{
}

web::json::value OperateLogGetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool OperateLogGetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            TimeRangeBean refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


TimeRangeBean OperateLogGetRequest::getTime() const
{
    return time_;
}

void OperateLogGetRequest::setTime(const TimeRangeBean& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool OperateLogGetRequest::timeIsSet() const
{
    return timeIsSet_;
}

void OperateLogGetRequest::unsettime()
{
    timeIsSet_ = false;
}

std::string OperateLogGetRequest::getUserName() const
{
    return userName_;
}

void OperateLogGetRequest::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool OperateLogGetRequest::userNameIsSet() const
{
    return userNameIsSet_;
}

void OperateLogGetRequest::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string OperateLogGetRequest::getAction() const
{
    return action_;
}

void OperateLogGetRequest::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool OperateLogGetRequest::actionIsSet() const
{
    return actionIsSet_;
}

void OperateLogGetRequest::unsetaction()
{
    actionIsSet_ = false;
}

std::string OperateLogGetRequest::getResult() const
{
    return result_;
}

void OperateLogGetRequest::setResult(const std::string& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool OperateLogGetRequest::resultIsSet() const
{
    return resultIsSet_;
}

void OperateLogGetRequest::unsetresult()
{
    resultIsSet_ = false;
}

std::string OperateLogGetRequest::getPage() const
{
    return page_;
}

void OperateLogGetRequest::setPage(const std::string& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool OperateLogGetRequest::pageIsSet() const
{
    return pageIsSet_;
}

void OperateLogGetRequest::unsetpage()
{
    pageIsSet_ = false;
}

std::string OperateLogGetRequest::getSize() const
{
    return size_;
}

void OperateLogGetRequest::setSize(const std::string& value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool OperateLogGetRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void OperateLogGetRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


