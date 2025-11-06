

#include "huaweicloud/codeartsrepo/v4/model/ShowTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowTagResponse::ShowTagResponse()
{
    name_ = "";
    nameIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
    commitIsSet_ = false;
    xTotal_ = "";
    xTotalIsSet_ = false;
}

ShowTagResponse::~ShowTagResponse() = default;

void ShowTagResponse::validate()
{
}

web::json::value ShowTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }
    if(xTotalIsSet_) {
        val[utility::conversions::to_string_t("X-Total")] = ModelBase::toJson(xTotal_);
    }

    return val;
}
bool ShowTagResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            CommitDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXTotal(refVal);
        }
    }
    return ok;
}


std::string ShowTagResponse::getName() const
{
    return name_;
}

void ShowTagResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowTagResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowTagResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowTagResponse::getMessage() const
{
    return message_;
}

void ShowTagResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowTagResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowTagResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowTagResponse::getTarget() const
{
    return target_;
}

void ShowTagResponse::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool ShowTagResponse::targetIsSet() const
{
    return targetIsSet_;
}

void ShowTagResponse::unsettarget()
{
    targetIsSet_ = false;
}

CommitDto ShowTagResponse::getCommit() const
{
    return commit_;
}

void ShowTagResponse::setCommit(const CommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool ShowTagResponse::commitIsSet() const
{
    return commitIsSet_;
}

void ShowTagResponse::unsetcommit()
{
    commitIsSet_ = false;
}

std::string ShowTagResponse::getXTotal() const
{
    return xTotal_;
}

void ShowTagResponse::setXTotal(const std::string& value)
{
    xTotal_ = value;
    xTotalIsSet_ = true;
}

bool ShowTagResponse::xTotalIsSet() const
{
    return xTotalIsSet_;
}

void ShowTagResponse::unsetxTotal()
{
    xTotalIsSet_ = false;
}

}
}
}
}
}


