

#include "huaweicloud/codeartsrepo/v3/model/CreateRepoMemberResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




CreateRepoMemberResult::CreateRepoMemberResult()
{
    id_ = "";
    idIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

CreateRepoMemberResult::~CreateRepoMemberResult() = default;

void CreateRepoMemberResult::validate()
{
}

web::json::value CreateRepoMemberResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool CreateRepoMemberResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string CreateRepoMemberResult::getId() const
{
    return id_;
}

void CreateRepoMemberResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateRepoMemberResult::idIsSet() const
{
    return idIsSet_;
}

void CreateRepoMemberResult::unsetid()
{
    idIsSet_ = false;
}

std::string CreateRepoMemberResult::getMessage() const
{
    return message_;
}

void CreateRepoMemberResult::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool CreateRepoMemberResult::messageIsSet() const
{
    return messageIsSet_;
}

void CreateRepoMemberResult::unsetmessage()
{
    messageIsSet_ = false;
}

std::string CreateRepoMemberResult::getName() const
{
    return name_;
}

void CreateRepoMemberResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateRepoMemberResult::nameIsSet() const
{
    return nameIsSet_;
}

void CreateRepoMemberResult::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateRepoMemberResult::getStatus() const
{
    return status_;
}

void CreateRepoMemberResult::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CreateRepoMemberResult::statusIsSet() const
{
    return statusIsSet_;
}

void CreateRepoMemberResult::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


