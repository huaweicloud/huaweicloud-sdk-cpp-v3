

#include "huaweicloud/codeartsrepo/v3/model/AddTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddTagsResponse::AddTagsResponse()
{
    name_ = "";
    nameIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    commitIsSet_ = false;
}

AddTagsResponse::~AddTagsResponse() = default;

void AddTagsResponse::validate()
{
}

web::json::value AddTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(commitIsSet_) {
        val[utility::conversions::to_string_t("commit")] = ModelBase::toJson(commit_);
    }

    return val;
}
bool AddTagsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("commit"));
        if(!fieldValue.is_null())
        {
            CommitRepoV2 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommit(refVal);
        }
    }
    return ok;
}


std::string AddTagsResponse::getName() const
{
    return name_;
}

void AddTagsResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AddTagsResponse::nameIsSet() const
{
    return nameIsSet_;
}

void AddTagsResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string AddTagsResponse::getMessage() const
{
    return message_;
}

void AddTagsResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool AddTagsResponse::messageIsSet() const
{
    return messageIsSet_;
}

void AddTagsResponse::unsetmessage()
{
    messageIsSet_ = false;
}

CommitRepoV2 AddTagsResponse::getCommit() const
{
    return commit_;
}

void AddTagsResponse::setCommit(const CommitRepoV2& value)
{
    commit_ = value;
    commitIsSet_ = true;
}

bool AddTagsResponse::commitIsSet() const
{
    return commitIsSet_;
}

void AddTagsResponse::unsetcommit()
{
    commitIsSet_ = false;
}

}
}
}
}
}


