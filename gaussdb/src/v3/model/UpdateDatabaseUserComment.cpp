

#include "huaweicloud/gaussdb/v3/model/UpdateDatabaseUserComment.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateDatabaseUserComment::UpdateDatabaseUserComment()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

UpdateDatabaseUserComment::~UpdateDatabaseUserComment() = default;

void UpdateDatabaseUserComment::validate()
{
}

web::json::value UpdateDatabaseUserComment::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}

bool UpdateDatabaseUserComment::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    return ok;
}

std::string UpdateDatabaseUserComment::getName() const
{
    return name_;
}

void UpdateDatabaseUserComment::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateDatabaseUserComment::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateDatabaseUserComment::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateDatabaseUserComment::getHost() const
{
    return host_;
}

void UpdateDatabaseUserComment::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool UpdateDatabaseUserComment::hostIsSet() const
{
    return hostIsSet_;
}

void UpdateDatabaseUserComment::unsethost()
{
    hostIsSet_ = false;
}

std::string UpdateDatabaseUserComment::getComment() const
{
    return comment_;
}

void UpdateDatabaseUserComment::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UpdateDatabaseUserComment::commentIsSet() const
{
    return commentIsSet_;
}

void UpdateDatabaseUserComment::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


