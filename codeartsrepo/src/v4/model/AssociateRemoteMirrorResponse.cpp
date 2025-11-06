

#include "huaweicloud/codeartsrepo/v4/model/AssociateRemoteMirrorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




AssociateRemoteMirrorResponse::AssociateRemoteMirrorResponse()
{
    id_ = 0;
    idIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    updateStatus_ = "";
    updateStatusIsSet_ = false;
    lastUpdateAt_ = "";
    lastUpdateAtIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    lastSuccessfulUpdateAt_ = "";
    lastSuccessfulUpdateAtIsSet_ = false;
    numberOfFailures_ = 0;
    numberOfFailuresIsSet_ = false;
    mirroringEnabled_ = false;
    mirroringEnabledIsSet_ = false;
    isPrivate_ = false;
    isPrivateIsSet_ = false;
    endpointUuid_ = "";
    endpointUuidIsSet_ = false;
    lastError_ = "";
    lastErrorIsSet_ = false;
}

AssociateRemoteMirrorResponse::~AssociateRemoteMirrorResponse() = default;

void AssociateRemoteMirrorResponse::validate()
{
}

web::json::value AssociateRemoteMirrorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(updateStatusIsSet_) {
        val[utility::conversions::to_string_t("update_status")] = ModelBase::toJson(updateStatus_);
    }
    if(lastUpdateAtIsSet_) {
        val[utility::conversions::to_string_t("last_update_at")] = ModelBase::toJson(lastUpdateAt_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(lastSuccessfulUpdateAtIsSet_) {
        val[utility::conversions::to_string_t("last_successful_update_at")] = ModelBase::toJson(lastSuccessfulUpdateAt_);
    }
    if(numberOfFailuresIsSet_) {
        val[utility::conversions::to_string_t("number_of_failures")] = ModelBase::toJson(numberOfFailures_);
    }
    if(mirroringEnabledIsSet_) {
        val[utility::conversions::to_string_t("mirroring_enabled")] = ModelBase::toJson(mirroringEnabled_);
    }
    if(isPrivateIsSet_) {
        val[utility::conversions::to_string_t("is_private")] = ModelBase::toJson(isPrivate_);
    }
    if(endpointUuidIsSet_) {
        val[utility::conversions::to_string_t("endpoint_uuid")] = ModelBase::toJson(endpointUuid_);
    }
    if(lastErrorIsSet_) {
        val[utility::conversions::to_string_t("last_error")] = ModelBase::toJson(lastError_);
    }

    return val;
}
bool AssociateRemoteMirrorResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_successful_update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_successful_update_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastSuccessfulUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number_of_failures"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number_of_failures"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumberOfFailures(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mirroring_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mirroring_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirroringEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_private"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_private"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPrivate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endpoint_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endpoint_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndpointUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_error"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_error"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastError(refVal);
        }
    }
    return ok;
}


int32_t AssociateRemoteMirrorResponse::getId() const
{
    return id_;
}

void AssociateRemoteMirrorResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::idIsSet() const
{
    return idIsSet_;
}

void AssociateRemoteMirrorResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t AssociateRemoteMirrorResponse::getRepositoryId() const
{
    return repositoryId_;
}

void AssociateRemoteMirrorResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AssociateRemoteMirrorResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string AssociateRemoteMirrorResponse::getUpdateStatus() const
{
    return updateStatus_;
}

void AssociateRemoteMirrorResponse::setUpdateStatus(const std::string& value)
{
    updateStatus_ = value;
    updateStatusIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::updateStatusIsSet() const
{
    return updateStatusIsSet_;
}

void AssociateRemoteMirrorResponse::unsetupdateStatus()
{
    updateStatusIsSet_ = false;
}

std::string AssociateRemoteMirrorResponse::getLastUpdateAt() const
{
    return lastUpdateAt_;
}

void AssociateRemoteMirrorResponse::setLastUpdateAt(const std::string& value)
{
    lastUpdateAt_ = value;
    lastUpdateAtIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::lastUpdateAtIsSet() const
{
    return lastUpdateAtIsSet_;
}

void AssociateRemoteMirrorResponse::unsetlastUpdateAt()
{
    lastUpdateAtIsSet_ = false;
}

std::string AssociateRemoteMirrorResponse::getUrl() const
{
    return url_;
}

void AssociateRemoteMirrorResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::urlIsSet() const
{
    return urlIsSet_;
}

void AssociateRemoteMirrorResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string AssociateRemoteMirrorResponse::getLastSuccessfulUpdateAt() const
{
    return lastSuccessfulUpdateAt_;
}

void AssociateRemoteMirrorResponse::setLastSuccessfulUpdateAt(const std::string& value)
{
    lastSuccessfulUpdateAt_ = value;
    lastSuccessfulUpdateAtIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::lastSuccessfulUpdateAtIsSet() const
{
    return lastSuccessfulUpdateAtIsSet_;
}

void AssociateRemoteMirrorResponse::unsetlastSuccessfulUpdateAt()
{
    lastSuccessfulUpdateAtIsSet_ = false;
}

int32_t AssociateRemoteMirrorResponse::getNumberOfFailures() const
{
    return numberOfFailures_;
}

void AssociateRemoteMirrorResponse::setNumberOfFailures(int32_t value)
{
    numberOfFailures_ = value;
    numberOfFailuresIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::numberOfFailuresIsSet() const
{
    return numberOfFailuresIsSet_;
}

void AssociateRemoteMirrorResponse::unsetnumberOfFailures()
{
    numberOfFailuresIsSet_ = false;
}

bool AssociateRemoteMirrorResponse::isMirroringEnabled() const
{
    return mirroringEnabled_;
}

void AssociateRemoteMirrorResponse::setMirroringEnabled(bool value)
{
    mirroringEnabled_ = value;
    mirroringEnabledIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::mirroringEnabledIsSet() const
{
    return mirroringEnabledIsSet_;
}

void AssociateRemoteMirrorResponse::unsetmirroringEnabled()
{
    mirroringEnabledIsSet_ = false;
}

bool AssociateRemoteMirrorResponse::isIsPrivate() const
{
    return isPrivate_;
}

void AssociateRemoteMirrorResponse::setIsPrivate(bool value)
{
    isPrivate_ = value;
    isPrivateIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::isPrivateIsSet() const
{
    return isPrivateIsSet_;
}

void AssociateRemoteMirrorResponse::unsetisPrivate()
{
    isPrivateIsSet_ = false;
}

std::string AssociateRemoteMirrorResponse::getEndpointUuid() const
{
    return endpointUuid_;
}

void AssociateRemoteMirrorResponse::setEndpointUuid(const std::string& value)
{
    endpointUuid_ = value;
    endpointUuidIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::endpointUuidIsSet() const
{
    return endpointUuidIsSet_;
}

void AssociateRemoteMirrorResponse::unsetendpointUuid()
{
    endpointUuidIsSet_ = false;
}

std::string AssociateRemoteMirrorResponse::getLastError() const
{
    return lastError_;
}

void AssociateRemoteMirrorResponse::setLastError(const std::string& value)
{
    lastError_ = value;
    lastErrorIsSet_ = true;
}

bool AssociateRemoteMirrorResponse::lastErrorIsSet() const
{
    return lastErrorIsSet_;
}

void AssociateRemoteMirrorResponse::unsetlastError()
{
    lastErrorIsSet_ = false;
}

}
}
}
}
}


