

#include "huaweicloud/codeartsrepo/v4/model/ShowRemoteMirrorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRemoteMirrorResponse::ShowRemoteMirrorResponse()
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

ShowRemoteMirrorResponse::~ShowRemoteMirrorResponse() = default;

void ShowRemoteMirrorResponse::validate()
{
}

web::json::value ShowRemoteMirrorResponse::toJson() const
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
bool ShowRemoteMirrorResponse::fromJson(const web::json::value& val)
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


int32_t ShowRemoteMirrorResponse::getId() const
{
    return id_;
}

void ShowRemoteMirrorResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowRemoteMirrorResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowRemoteMirrorResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t ShowRemoteMirrorResponse::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRemoteMirrorResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRemoteMirrorResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRemoteMirrorResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowRemoteMirrorResponse::getUpdateStatus() const
{
    return updateStatus_;
}

void ShowRemoteMirrorResponse::setUpdateStatus(const std::string& value)
{
    updateStatus_ = value;
    updateStatusIsSet_ = true;
}

bool ShowRemoteMirrorResponse::updateStatusIsSet() const
{
    return updateStatusIsSet_;
}

void ShowRemoteMirrorResponse::unsetupdateStatus()
{
    updateStatusIsSet_ = false;
}

std::string ShowRemoteMirrorResponse::getLastUpdateAt() const
{
    return lastUpdateAt_;
}

void ShowRemoteMirrorResponse::setLastUpdateAt(const std::string& value)
{
    lastUpdateAt_ = value;
    lastUpdateAtIsSet_ = true;
}

bool ShowRemoteMirrorResponse::lastUpdateAtIsSet() const
{
    return lastUpdateAtIsSet_;
}

void ShowRemoteMirrorResponse::unsetlastUpdateAt()
{
    lastUpdateAtIsSet_ = false;
}

std::string ShowRemoteMirrorResponse::getUrl() const
{
    return url_;
}

void ShowRemoteMirrorResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowRemoteMirrorResponse::urlIsSet() const
{
    return urlIsSet_;
}

void ShowRemoteMirrorResponse::unseturl()
{
    urlIsSet_ = false;
}

std::string ShowRemoteMirrorResponse::getLastSuccessfulUpdateAt() const
{
    return lastSuccessfulUpdateAt_;
}

void ShowRemoteMirrorResponse::setLastSuccessfulUpdateAt(const std::string& value)
{
    lastSuccessfulUpdateAt_ = value;
    lastSuccessfulUpdateAtIsSet_ = true;
}

bool ShowRemoteMirrorResponse::lastSuccessfulUpdateAtIsSet() const
{
    return lastSuccessfulUpdateAtIsSet_;
}

void ShowRemoteMirrorResponse::unsetlastSuccessfulUpdateAt()
{
    lastSuccessfulUpdateAtIsSet_ = false;
}

int32_t ShowRemoteMirrorResponse::getNumberOfFailures() const
{
    return numberOfFailures_;
}

void ShowRemoteMirrorResponse::setNumberOfFailures(int32_t value)
{
    numberOfFailures_ = value;
    numberOfFailuresIsSet_ = true;
}

bool ShowRemoteMirrorResponse::numberOfFailuresIsSet() const
{
    return numberOfFailuresIsSet_;
}

void ShowRemoteMirrorResponse::unsetnumberOfFailures()
{
    numberOfFailuresIsSet_ = false;
}

bool ShowRemoteMirrorResponse::isMirroringEnabled() const
{
    return mirroringEnabled_;
}

void ShowRemoteMirrorResponse::setMirroringEnabled(bool value)
{
    mirroringEnabled_ = value;
    mirroringEnabledIsSet_ = true;
}

bool ShowRemoteMirrorResponse::mirroringEnabledIsSet() const
{
    return mirroringEnabledIsSet_;
}

void ShowRemoteMirrorResponse::unsetmirroringEnabled()
{
    mirroringEnabledIsSet_ = false;
}

bool ShowRemoteMirrorResponse::isIsPrivate() const
{
    return isPrivate_;
}

void ShowRemoteMirrorResponse::setIsPrivate(bool value)
{
    isPrivate_ = value;
    isPrivateIsSet_ = true;
}

bool ShowRemoteMirrorResponse::isPrivateIsSet() const
{
    return isPrivateIsSet_;
}

void ShowRemoteMirrorResponse::unsetisPrivate()
{
    isPrivateIsSet_ = false;
}

std::string ShowRemoteMirrorResponse::getEndpointUuid() const
{
    return endpointUuid_;
}

void ShowRemoteMirrorResponse::setEndpointUuid(const std::string& value)
{
    endpointUuid_ = value;
    endpointUuidIsSet_ = true;
}

bool ShowRemoteMirrorResponse::endpointUuidIsSet() const
{
    return endpointUuidIsSet_;
}

void ShowRemoteMirrorResponse::unsetendpointUuid()
{
    endpointUuidIsSet_ = false;
}

std::string ShowRemoteMirrorResponse::getLastError() const
{
    return lastError_;
}

void ShowRemoteMirrorResponse::setLastError(const std::string& value)
{
    lastError_ = value;
    lastErrorIsSet_ = true;
}

bool ShowRemoteMirrorResponse::lastErrorIsSet() const
{
    return lastErrorIsSet_;
}

void ShowRemoteMirrorResponse::unsetlastError()
{
    lastErrorIsSet_ = false;
}

}
}
}
}
}


