

#include "huaweicloud/rds/v3/model/PostgresqlListDatabase.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlListDatabase::PostgresqlListDatabase()
{
    name_ = "";
    nameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    characterSet_ = "";
    characterSetIsSet_ = false;
    collateSet_ = "";
    collateSetIsSet_ = false;
    size_ = 0L;
    sizeIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
}

PostgresqlListDatabase::~PostgresqlListDatabase() = default;

void PostgresqlListDatabase::validate()
{
}

web::json::value PostgresqlListDatabase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(characterSetIsSet_) {
        val[utility::conversions::to_string_t("character_set")] = ModelBase::toJson(characterSet_);
    }
    if(collateSetIsSet_) {
        val[utility::conversions::to_string_t("collate_set")] = ModelBase::toJson(collateSet_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }

    return val;
}
bool PostgresqlListDatabase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("collate_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collate_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollateSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
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


std::string PostgresqlListDatabase::getName() const
{
    return name_;
}

void PostgresqlListDatabase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PostgresqlListDatabase::nameIsSet() const
{
    return nameIsSet_;
}

void PostgresqlListDatabase::unsetname()
{
    nameIsSet_ = false;
}

std::string PostgresqlListDatabase::getOwner() const
{
    return owner_;
}

void PostgresqlListDatabase::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool PostgresqlListDatabase::ownerIsSet() const
{
    return ownerIsSet_;
}

void PostgresqlListDatabase::unsetowner()
{
    ownerIsSet_ = false;
}

std::string PostgresqlListDatabase::getCharacterSet() const
{
    return characterSet_;
}

void PostgresqlListDatabase::setCharacterSet(const std::string& value)
{
    characterSet_ = value;
    characterSetIsSet_ = true;
}

bool PostgresqlListDatabase::characterSetIsSet() const
{
    return characterSetIsSet_;
}

void PostgresqlListDatabase::unsetcharacterSet()
{
    characterSetIsSet_ = false;
}

std::string PostgresqlListDatabase::getCollateSet() const
{
    return collateSet_;
}

void PostgresqlListDatabase::setCollateSet(const std::string& value)
{
    collateSet_ = value;
    collateSetIsSet_ = true;
}

bool PostgresqlListDatabase::collateSetIsSet() const
{
    return collateSetIsSet_;
}

void PostgresqlListDatabase::unsetcollateSet()
{
    collateSetIsSet_ = false;
}

int64_t PostgresqlListDatabase::getSize() const
{
    return size_;
}

void PostgresqlListDatabase::setSize(int64_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool PostgresqlListDatabase::sizeIsSet() const
{
    return sizeIsSet_;
}

void PostgresqlListDatabase::unsetsize()
{
    sizeIsSet_ = false;
}

std::string PostgresqlListDatabase::getComment() const
{
    return comment_;
}

void PostgresqlListDatabase::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool PostgresqlListDatabase::commentIsSet() const
{
    return commentIsSet_;
}

void PostgresqlListDatabase::unsetcomment()
{
    commentIsSet_ = false;
}

}
}
}
}
}


