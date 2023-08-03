

#include "huaweicloud/rds/v3/model/DatabaseForCreation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DatabaseForCreation::DatabaseForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    characterSet_ = "";
    characterSetIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

DatabaseForCreation::~DatabaseForCreation() = default;

void DatabaseForCreation::validate()
{
}

web::json::value DatabaseForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(characterSetIsSet_) {
        val[utility::conversions::to_string_t("character_set")] = ModelBase::toJson(characterSet_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}

bool DatabaseForCreation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("character_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("character_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharacterSet(refVal);
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

std::string DatabaseForCreation::getName() const
{
    return name_;
}

void DatabaseForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DatabaseForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void DatabaseForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string DatabaseForCreation::getCharacterSet() const
{
    return characterSet_;
}

void DatabaseForCreation::setCharacterSet(const std::string& value)
{
    characterSet_ = value;
    characterSetIsSet_ = true;
}

bool DatabaseForCreation::characterSetIsSet() const
{
    return characterSetIsSet_;
}

void DatabaseForCreation::unsetcharacterSet()
{
    characterSetIsSet_ = false;
}

std::string DatabaseForCreation::getComment() const
{
    return comment_;
}

void DatabaseForCreation::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool DatabaseForCreation::commentIsSet() const
{
    return commentIsSet_;
}

void DatabaseForCreation::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


