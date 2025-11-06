

#include "huaweicloud/codeartsrepo/v4/model/CreateTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateTagResponse::CreateTagResponse()
{
    name_ = "";
    nameIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
    commitIsSet_ = false;
}

CreateTagResponse::~CreateTagResponse() = default;

void CreateTagResponse::validate()
{
}

web::json::value CreateTagResponse::toJson() const
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

    return val;
}
bool CreateTagResponse::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateTagResponse::getName() const
{
    return name_;
}

void CreateTagResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTagResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTagResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateTagResponse::getMessage() const
{
    return message_;
}

void CreateTagResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateTagResponse::messageIsSet() const
{
    return messageIsSet_;
}

void CreateTagResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string CreateTagResponse::getTarget() const
{
    return target_;
}

void CreateTagResponse::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool CreateTagResponse::targetIsSet() const
{
    return targetIsSet_;
}

void CreateTagResponse::unsettarget()
{
    targetIsSet_ = false;
}

CommitDto CreateTagResponse::getCommit() const
{
    return commit_;
}

void CreateTagResponse::setCommit(const CommitDto& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool CreateTagResponse::commitIsSet() const
{
    return commitIsSet_;
}

void CreateTagResponse::unsetcommit()
{
    commitIsSet_ = false;
}

}
}
}
}
}


