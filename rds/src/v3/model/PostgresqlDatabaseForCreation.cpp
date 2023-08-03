

#include "huaweicloud/rds/v3/model/PostgresqlDatabaseForCreation.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlDatabaseForCreation::PostgresqlDatabaseForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    characterSet_ = "";
    characterSetIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    template_ = "";
    templateIsSet_ = false;
    lcCollate_ = "";
    lcCollateIsSet_ = false;
    lcCtype_ = "";
    lcCtypeIsSet_ = false;
    isRevokePublicPrivilege_ = false;
    isRevokePublicPrivilegeIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

PostgresqlDatabaseForCreation::~PostgresqlDatabaseForCreation() = default;

void PostgresqlDatabaseForCreation::validate()
{
}

web::json::value PostgresqlDatabaseForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(characterSetIsSet_) {
        val[utility::conversions::to_string_t("character_set")] = ModelBase::toJson(characterSet_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(templateIsSet_) {
        val[utility::conversions::to_string_t("template")] = ModelBase::toJson(template_);
    }
    if(lcCollateIsSet_) {
        val[utility::conversions::to_string_t("lc_collate")] = ModelBase::toJson(lcCollate_);
    }
    if(lcCtypeIsSet_) {
        val[utility::conversions::to_string_t("lc_ctype")] = ModelBase::toJson(lcCtype_);
    }
    if(isRevokePublicPrivilegeIsSet_) {
        val[utility::conversions::to_string_t("is_revoke_public_privilege")] = ModelBase::toJson(isRevokePublicPrivilege_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}

bool PostgresqlDatabaseForCreation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lc_collate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lc_collate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLcCollate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lc_ctype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lc_ctype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLcCtype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_revoke_public_privilege"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_revoke_public_privilege"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRevokePublicPrivilege(refVal);
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

std::string PostgresqlDatabaseForCreation::getName() const
{
    return name_;
}

void PostgresqlDatabaseForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void PostgresqlDatabaseForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string PostgresqlDatabaseForCreation::getCharacterSet() const
{
    return characterSet_;
}

void PostgresqlDatabaseForCreation::setCharacterSet(const std::string& value)
{
    characterSet_ = value;
    characterSetIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::characterSetIsSet() const
{
    return characterSetIsSet_;
}

void PostgresqlDatabaseForCreation::unsetcharacterSet()
{
    characterSetIsSet_ = false;
}

std::string PostgresqlDatabaseForCreation::getOwner() const
{
    return owner_;
}

void PostgresqlDatabaseForCreation::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::ownerIsSet() const
{
    return ownerIsSet_;
}

void PostgresqlDatabaseForCreation::unsetowner()
{
    ownerIsSet_ = false;
}

std::string PostgresqlDatabaseForCreation::getTemplate() const
{
    return template_;
}

void PostgresqlDatabaseForCreation::setTemplate(const std::string& value)
{
    template_ = value;
    templateIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::templateIsSet() const
{
    return templateIsSet_;
}

void PostgresqlDatabaseForCreation::unsettemplate()
{
    templateIsSet_ = false;
}

std::string PostgresqlDatabaseForCreation::getLcCollate() const
{
    return lcCollate_;
}

void PostgresqlDatabaseForCreation::setLcCollate(const std::string& value)
{
    lcCollate_ = value;
    lcCollateIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::lcCollateIsSet() const
{
    return lcCollateIsSet_;
}

void PostgresqlDatabaseForCreation::unsetlcCollate()
{
    lcCollateIsSet_ = false;
}

std::string PostgresqlDatabaseForCreation::getLcCtype() const
{
    return lcCtype_;
}

void PostgresqlDatabaseForCreation::setLcCtype(const std::string& value)
{
    lcCtype_ = value;
    lcCtypeIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::lcCtypeIsSet() const
{
    return lcCtypeIsSet_;
}

void PostgresqlDatabaseForCreation::unsetlcCtype()
{
    lcCtypeIsSet_ = false;
}

bool PostgresqlDatabaseForCreation::isIsRevokePublicPrivilege() const
{
    return isRevokePublicPrivilege_;
}

void PostgresqlDatabaseForCreation::setIsRevokePublicPrivilege(bool value)
{
    isRevokePublicPrivilege_ = value;
    isRevokePublicPrivilegeIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::isRevokePublicPrivilegeIsSet() const
{
    return isRevokePublicPrivilegeIsSet_;
}

void PostgresqlDatabaseForCreation::unsetisRevokePublicPrivilege()
{
    isRevokePublicPrivilegeIsSet_ = false;
}

std::string PostgresqlDatabaseForCreation::getComment() const
{
    return comment_;
}

void PostgresqlDatabaseForCreation::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool PostgresqlDatabaseForCreation::commentIsSet() const
{
    return commentIsSet_;
}

void PostgresqlDatabaseForCreation::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


