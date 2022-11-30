

#include "huaweicloud/ecs/v2/model/NovaKeypairDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaKeypairDetail::NovaKeypairDetail()
{
    publicKey_ = "";
    publicKeyIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    createdAt_ = utility::datetime();
    createdAtIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    deletedAt_ = utility::datetime();
    deletedAtIsSet_ = false;
    id_ = 0;
    idIsSet_ = false;
    updatedAt_ = utility::datetime();
    updatedAtIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

NovaKeypairDetail::~NovaKeypairDetail() = default;

void NovaKeypairDetail::validate()
{
}

web::json::value NovaKeypairDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicKeyIsSet_) {
        val[utility::conversions::to_string_t("public_key")] = ModelBase::toJson(publicKey_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(deletedAtIsSet_) {
        val[utility::conversions::to_string_t("deleted_at")] = ModelBase::toJson(deletedAt_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool NovaKeypairDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicKey(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
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
    return ok;
}


std::string NovaKeypairDetail::getPublicKey() const
{
    return publicKey_;
}

void NovaKeypairDetail::setPublicKey(const std::string& value)
{
    publicKey_ = value;
    publicKeyIsSet_ = true;
}

bool NovaKeypairDetail::publicKeyIsSet() const
{
    return publicKeyIsSet_;
}

void NovaKeypairDetail::unsetpublicKey()
{
    publicKeyIsSet_ = false;
}

std::string NovaKeypairDetail::getName() const
{
    return name_;
}

void NovaKeypairDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaKeypairDetail::nameIsSet() const
{
    return nameIsSet_;
}

void NovaKeypairDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string NovaKeypairDetail::getFingerprint() const
{
    return fingerprint_;
}

void NovaKeypairDetail::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool NovaKeypairDetail::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void NovaKeypairDetail::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

utility::datetime NovaKeypairDetail::getCreatedAt() const
{
    return createdAt_;
}

void NovaKeypairDetail::setCreatedAt(const utility::datetime& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool NovaKeypairDetail::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void NovaKeypairDetail::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

bool NovaKeypairDetail::isDeleted() const
{
    return deleted_;
}

void NovaKeypairDetail::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool NovaKeypairDetail::deletedIsSet() const
{
    return deletedIsSet_;
}

void NovaKeypairDetail::unsetdeleted()
{
    deletedIsSet_ = false;
}

utility::datetime NovaKeypairDetail::getDeletedAt() const
{
    return deletedAt_;
}

void NovaKeypairDetail::setDeletedAt(const utility::datetime& value)
{
    deletedAt_ = value;
    deletedAtIsSet_ = true;
}

bool NovaKeypairDetail::deletedAtIsSet() const
{
    return deletedAtIsSet_;
}

void NovaKeypairDetail::unsetdeletedAt()
{
    deletedAtIsSet_ = false;
}

int32_t NovaKeypairDetail::getId() const
{
    return id_;
}

void NovaKeypairDetail::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NovaKeypairDetail::idIsSet() const
{
    return idIsSet_;
}

void NovaKeypairDetail::unsetid()
{
    idIsSet_ = false;
}

utility::datetime NovaKeypairDetail::getUpdatedAt() const
{
    return updatedAt_;
}

void NovaKeypairDetail::setUpdatedAt(const utility::datetime& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool NovaKeypairDetail::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void NovaKeypairDetail::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string NovaKeypairDetail::getUserId() const
{
    return userId_;
}

void NovaKeypairDetail::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool NovaKeypairDetail::userIdIsSet() const
{
    return userIdIsSet_;
}

void NovaKeypairDetail::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string NovaKeypairDetail::getType() const
{
    return type_;
}

void NovaKeypairDetail::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NovaKeypairDetail::typeIsSet() const
{
    return typeIsSet_;
}

void NovaKeypairDetail::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


