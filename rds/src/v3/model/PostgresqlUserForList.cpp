

#include "huaweicloud/rds/v3/model/PostgresqlUserForList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlUserForList::PostgresqlUserForList()
{
    name_ = "";
    nameIsSet_ = false;
    attributesIsSet_ = false;
    memberofIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

PostgresqlUserForList::~PostgresqlUserForList() = default;

void PostgresqlUserForList::validate()
{
}

web::json::value PostgresqlUserForList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }
    if(memberofIsSet_) {
        val[utility::conversions::to_string_t("memberof")] = ModelBase::toJson(memberof_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}
bool PostgresqlUserForList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memberof"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memberof"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemberof(refVal);
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


std::string PostgresqlUserForList::getName() const
{
    return name_;
}

void PostgresqlUserForList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgresqlUserForList::nameIsSet() const
{
    return nameIsSet_;
}

void PostgresqlUserForList::unsetname()
{
    nameIsSet_ = false;
}

Object PostgresqlUserForList::getAttributes() const
{
    return attributes_;
}

void PostgresqlUserForList::setAttributes(const Object& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool PostgresqlUserForList::attributesIsSet() const
{
    return attributesIsSet_;
}

void PostgresqlUserForList::unsetattributes()
{
    attributesIsSet_ = false;
}

std::vector<std::string>& PostgresqlUserForList::getMemberof()
{
    return memberof_;
}

void PostgresqlUserForList::setMemberof(const std::vector<std::string>& value)
{
    memberof_ = value;
    memberofIsSet_ = true;
}

bool PostgresqlUserForList::memberofIsSet() const
{
    return memberofIsSet_;
}

void PostgresqlUserForList::unsetmemberof()
{
    memberofIsSet_ = false;
}

std::string PostgresqlUserForList::getComment() const
{
    return comment_;
}

void PostgresqlUserForList::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool PostgresqlUserForList::commentIsSet() const
{
    return commentIsSet_;
}

void PostgresqlUserForList::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


