

#include "huaweicloud/cloudtest/v1/model/ExternalBranchInfoVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ExternalBranchInfoVo::ExternalBranchInfoVo()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    author_ = "";
    authorIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    lastModifier_ = "";
    lastModifierIsSet_ = false;
    lastModified_ = utility::datetime();
    lastModifiedIsSet_ = false;
    lastModifiedTimestamp_ = 0L;
    lastModifiedTimestampIsSet_ = false;
    creationDate_ = utility::datetime();
    creationDateIsSet_ = false;
    creationDateTimestamp_ = 0L;
    creationDateTimestampIsSet_ = false;
    authorName_ = "";
    authorNameIsSet_ = false;
    isBaseBranch_ = 0;
    isBaseBranchIsSet_ = false;
}

ExternalBranchInfoVo::~ExternalBranchInfoVo() = default;

void ExternalBranchInfoVo::validate()
{
}

web::json::value ExternalBranchInfoVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(lastModifierIsSet_) {
        val[utility::conversions::to_string_t("last_modifier")] = ModelBase::toJson(lastModifier_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }
    if(lastModifiedTimestampIsSet_) {
        val[utility::conversions::to_string_t("last_modified_timestamp")] = ModelBase::toJson(lastModifiedTimestamp_);
    }
    if(creationDateIsSet_) {
        val[utility::conversions::to_string_t("creation_date")] = ModelBase::toJson(creationDate_);
    }
    if(creationDateTimestampIsSet_) {
        val[utility::conversions::to_string_t("creation_date_timestamp")] = ModelBase::toJson(creationDateTimestamp_);
    }
    if(authorNameIsSet_) {
        val[utility::conversions::to_string_t("author_name")] = ModelBase::toJson(authorName_);
    }
    if(isBaseBranchIsSet_) {
        val[utility::conversions::to_string_t("is_base_branch")] = ModelBase::toJson(isBaseBranch_);
    }

    return val;
}
bool ExternalBranchInfoVo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modifier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modifier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModifiedTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creation_date_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_date_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationDateTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_base_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_base_branch"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBaseBranch(refVal);
        }
    }
    return ok;
}


std::string ExternalBranchInfoVo::getId() const
{
    return id_;
}

void ExternalBranchInfoVo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ExternalBranchInfoVo::idIsSet() const
{
    return idIsSet_;
}

void ExternalBranchInfoVo::unsetid()
{
    idIsSet_ = false;
}

std::string ExternalBranchInfoVo::getType() const
{
    return type_;
}

void ExternalBranchInfoVo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExternalBranchInfoVo::typeIsSet() const
{
    return typeIsSet_;
}

void ExternalBranchInfoVo::unsettype()
{
    typeIsSet_ = false;
}

std::string ExternalBranchInfoVo::getAuthor() const
{
    return author_;
}

void ExternalBranchInfoVo::setAuthor(const std::string& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool ExternalBranchInfoVo::authorIsSet() const
{
    return authorIsSet_;
}

void ExternalBranchInfoVo::unsetauthor()
{
    authorIsSet_ = false;
}

std::string ExternalBranchInfoVo::getName() const
{
    return name_;
}

void ExternalBranchInfoVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExternalBranchInfoVo::nameIsSet() const
{
    return nameIsSet_;
}

void ExternalBranchInfoVo::unsetname()
{
    nameIsSet_ = false;
}

std::string ExternalBranchInfoVo::getRegion() const
{
    return region_;
}

void ExternalBranchInfoVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ExternalBranchInfoVo::regionIsSet() const
{
    return regionIsSet_;
}

void ExternalBranchInfoVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string ExternalBranchInfoVo::getLastModifier() const
{
    return lastModifier_;
}

void ExternalBranchInfoVo::setLastModifier(const std::string& value)
{
    lastModifier_ = value;
    lastModifierIsSet_ = true;
}

bool ExternalBranchInfoVo::lastModifierIsSet() const
{
    return lastModifierIsSet_;
}

void ExternalBranchInfoVo::unsetlastModifier()
{
    lastModifierIsSet_ = false;
}

utility::datetime ExternalBranchInfoVo::getLastModified() const
{
    return lastModified_;
}

void ExternalBranchInfoVo::setLastModified(const utility::datetime& value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ExternalBranchInfoVo::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ExternalBranchInfoVo::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

int64_t ExternalBranchInfoVo::getLastModifiedTimestamp() const
{
    return lastModifiedTimestamp_;
}

void ExternalBranchInfoVo::setLastModifiedTimestamp(int64_t value)
{
    lastModifiedTimestamp_ = value;
    lastModifiedTimestampIsSet_ = true;
}

bool ExternalBranchInfoVo::lastModifiedTimestampIsSet() const
{
    return lastModifiedTimestampIsSet_;
}

void ExternalBranchInfoVo::unsetlastModifiedTimestamp()
{
    lastModifiedTimestampIsSet_ = false;
}

utility::datetime ExternalBranchInfoVo::getCreationDate() const
{
    return creationDate_;
}

void ExternalBranchInfoVo::setCreationDate(const utility::datetime& value)
{
    creationDate_ = value;
    creationDateIsSet_ = true;
}

bool ExternalBranchInfoVo::creationDateIsSet() const
{
    return creationDateIsSet_;
}

void ExternalBranchInfoVo::unsetcreationDate()
{
    creationDateIsSet_ = false;
}

int64_t ExternalBranchInfoVo::getCreationDateTimestamp() const
{
    return creationDateTimestamp_;
}

void ExternalBranchInfoVo::setCreationDateTimestamp(int64_t value)
{
    creationDateTimestamp_ = value;
    creationDateTimestampIsSet_ = true;
}

bool ExternalBranchInfoVo::creationDateTimestampIsSet() const
{
    return creationDateTimestampIsSet_;
}

void ExternalBranchInfoVo::unsetcreationDateTimestamp()
{
    creationDateTimestampIsSet_ = false;
}

std::string ExternalBranchInfoVo::getAuthorName() const
{
    return authorName_;
}

void ExternalBranchInfoVo::setAuthorName(const std::string& value)
{
    authorName_ = value;
    authorNameIsSet_ = true;
}

bool ExternalBranchInfoVo::authorNameIsSet() const
{
    return authorNameIsSet_;
}

void ExternalBranchInfoVo::unsetauthorName()
{
    authorNameIsSet_ = false;
}

int32_t ExternalBranchInfoVo::getIsBaseBranch() const
{
    return isBaseBranch_;
}

void ExternalBranchInfoVo::setIsBaseBranch(int32_t value)
{
    isBaseBranch_ = value;
    isBaseBranchIsSet_ = true;
}

bool ExternalBranchInfoVo::isBaseBranchIsSet() const
{
    return isBaseBranchIsSet_;
}

void ExternalBranchInfoVo::unsetisBaseBranch()
{
    isBaseBranchIsSet_ = false;
}

}
}
}
}
}


