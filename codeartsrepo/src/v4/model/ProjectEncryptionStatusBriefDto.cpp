

#include "huaweicloud/codeartsrepo/v4/model/ProjectEncryptionStatusBriefDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ProjectEncryptionStatusBriefDto::ProjectEncryptionStatusBriefDto()
{
    id_ = 0;
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    lastEncryptionAt_ = "";
    lastEncryptionAtIsSet_ = false;
    lastDecryptionAt_ = "";
    lastDecryptionAtIsSet_ = false;
    isConsistent_ = false;
    isConsistentIsSet_ = false;
}

ProjectEncryptionStatusBriefDto::~ProjectEncryptionStatusBriefDto() = default;

void ProjectEncryptionStatusBriefDto::validate()
{
}

web::json::value ProjectEncryptionStatusBriefDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(lastEncryptionAtIsSet_) {
        val[utility::conversions::to_string_t("last_encryption_at")] = ModelBase::toJson(lastEncryptionAt_);
    }
    if(lastDecryptionAtIsSet_) {
        val[utility::conversions::to_string_t("last_decryption_at")] = ModelBase::toJson(lastDecryptionAt_);
    }
    if(isConsistentIsSet_) {
        val[utility::conversions::to_string_t("is_consistent")] = ModelBase::toJson(isConsistent_);
    }

    return val;
}
bool ProjectEncryptionStatusBriefDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_encryption_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_encryption_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastEncryptionAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_decryption_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_decryption_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastDecryptionAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_consistent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_consistent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsConsistent(refVal);
        }
    }
    return ok;
}


int32_t ProjectEncryptionStatusBriefDto::getId() const
{
    return id_;
}

void ProjectEncryptionStatusBriefDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ProjectEncryptionStatusBriefDto::idIsSet() const
{
    return idIsSet_;
}

void ProjectEncryptionStatusBriefDto::unsetid()
{
    idIsSet_ = false;
}

std::string ProjectEncryptionStatusBriefDto::getStatus() const
{
    return status_;
}

void ProjectEncryptionStatusBriefDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ProjectEncryptionStatusBriefDto::statusIsSet() const
{
    return statusIsSet_;
}

void ProjectEncryptionStatusBriefDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ProjectEncryptionStatusBriefDto::getLastEncryptionAt() const
{
    return lastEncryptionAt_;
}

void ProjectEncryptionStatusBriefDto::setLastEncryptionAt(const std::string& value)
{
    lastEncryptionAt_ = value;
    lastEncryptionAtIsSet_ = true;
}

bool ProjectEncryptionStatusBriefDto::lastEncryptionAtIsSet() const
{
    return lastEncryptionAtIsSet_;
}

void ProjectEncryptionStatusBriefDto::unsetlastEncryptionAt()
{
    lastEncryptionAtIsSet_ = false;
}

std::string ProjectEncryptionStatusBriefDto::getLastDecryptionAt() const
{
    return lastDecryptionAt_;
}

void ProjectEncryptionStatusBriefDto::setLastDecryptionAt(const std::string& value)
{
    lastDecryptionAt_ = value;
    lastDecryptionAtIsSet_ = true;
}

bool ProjectEncryptionStatusBriefDto::lastDecryptionAtIsSet() const
{
    return lastDecryptionAtIsSet_;
}

void ProjectEncryptionStatusBriefDto::unsetlastDecryptionAt()
{
    lastDecryptionAtIsSet_ = false;
}

bool ProjectEncryptionStatusBriefDto::isIsConsistent() const
{
    return isConsistent_;
}

void ProjectEncryptionStatusBriefDto::setIsConsistent(bool value)
{
    isConsistent_ = value;
    isConsistentIsSet_ = true;
}

bool ProjectEncryptionStatusBriefDto::isConsistentIsSet() const
{
    return isConsistentIsSet_;
}

void ProjectEncryptionStatusBriefDto::unsetisConsistent()
{
    isConsistentIsSet_ = false;
}

}
}
}
}
}


