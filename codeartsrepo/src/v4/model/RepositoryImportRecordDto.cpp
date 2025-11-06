

#include "huaweicloud/codeartsrepo/v4/model/RepositoryImportRecordDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RepositoryImportRecordDto::RepositoryImportRecordDto()
{
    id_ = 0;
    idIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    repositoryIsSet_ = false;
    originFullName_ = "";
    originFullNameIsSet_ = false;
    sourceUrl_ = "";
    sourceUrlIsSet_ = false;
    sourceType_ = "";
    sourceTypeIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    finishedAt_ = "";
    finishedAtIsSet_ = false;
    repositorySize_ = 0.0;
    repositorySizeIsSet_ = false;
    errorMessage_ = "";
    errorMessageIsSet_ = false;
    targetFullName_ = "";
    targetFullNameIsSet_ = false;
    targetProjectId_ = "";
    targetProjectIdIsSet_ = false;
}

RepositoryImportRecordDto::~RepositoryImportRecordDto() = default;

void RepositoryImportRecordDto::validate()
{
}

web::json::value RepositoryImportRecordDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(repositoryIsSet_) {
        val[utility::conversions::to_string_t("repository")] = ModelBase::toJson(repository_);
    }
    if(originFullNameIsSet_) {
        val[utility::conversions::to_string_t("origin_full_name")] = ModelBase::toJson(originFullName_);
    }
    if(sourceUrlIsSet_) {
        val[utility::conversions::to_string_t("source_url")] = ModelBase::toJson(sourceUrl_);
    }
    if(sourceTypeIsSet_) {
        val[utility::conversions::to_string_t("source_type")] = ModelBase::toJson(sourceType_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(finishedAtIsSet_) {
        val[utility::conversions::to_string_t("finished_at")] = ModelBase::toJson(finishedAt_);
    }
    if(repositorySizeIsSet_) {
        val[utility::conversions::to_string_t("repository_size")] = ModelBase::toJson(repositorySize_);
    }
    if(errorMessageIsSet_) {
        val[utility::conversions::to_string_t("error_message")] = ModelBase::toJson(errorMessage_);
    }
    if(targetFullNameIsSet_) {
        val[utility::conversions::to_string_t("target_full_name")] = ModelBase::toJson(targetFullName_);
    }
    if(targetProjectIdIsSet_) {
        val[utility::conversions::to_string_t("target_project_id")] = ModelBase::toJson(targetProjectId_);
    }

    return val;
}
bool RepositoryImportRecordDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository"));
        if(!fieldValue.is_null())
        {
            RepositorySimpleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepository(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_size"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositorySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_full_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_full_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetFullName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetProjectId(refVal);
        }
    }
    return ok;
}


int32_t RepositoryImportRecordDto::getId() const
{
    return id_;
}

void RepositoryImportRecordDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RepositoryImportRecordDto::idIsSet() const
{
    return idIsSet_;
}

void RepositoryImportRecordDto::unsetid()
{
    idIsSet_ = false;
}

std::string RepositoryImportRecordDto::getState() const
{
    return state_;
}

void RepositoryImportRecordDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool RepositoryImportRecordDto::stateIsSet() const
{
    return stateIsSet_;
}

void RepositoryImportRecordDto::unsetstate()
{
    stateIsSet_ = false;
}

RepositorySimpleDto RepositoryImportRecordDto::getRepository() const
{
    return repository_;
}

void RepositoryImportRecordDto::setRepository(const RepositorySimpleDto& value)
{
    repository_ = value;
    repositoryIsSet_ = true;
}

bool RepositoryImportRecordDto::repositoryIsSet() const
{
    return repositoryIsSet_;
}

void RepositoryImportRecordDto::unsetrepository()
{
    repositoryIsSet_ = false;
}

std::string RepositoryImportRecordDto::getOriginFullName() const
{
    return originFullName_;
}

void RepositoryImportRecordDto::setOriginFullName(const std::string& value)
{
    originFullName_ = value;
    originFullNameIsSet_ = true;
}

bool RepositoryImportRecordDto::originFullNameIsSet() const
{
    return originFullNameIsSet_;
}

void RepositoryImportRecordDto::unsetoriginFullName()
{
    originFullNameIsSet_ = false;
}

std::string RepositoryImportRecordDto::getSourceUrl() const
{
    return sourceUrl_;
}

void RepositoryImportRecordDto::setSourceUrl(const std::string& value)
{
    sourceUrl_ = value;
    sourceUrlIsSet_ = true;
}

bool RepositoryImportRecordDto::sourceUrlIsSet() const
{
    return sourceUrlIsSet_;
}

void RepositoryImportRecordDto::unsetsourceUrl()
{
    sourceUrlIsSet_ = false;
}

std::string RepositoryImportRecordDto::getSourceType() const
{
    return sourceType_;
}

void RepositoryImportRecordDto::setSourceType(const std::string& value)
{
    sourceType_ = value;
    sourceTypeIsSet_ = true;
}

bool RepositoryImportRecordDto::sourceTypeIsSet() const
{
    return sourceTypeIsSet_;
}

void RepositoryImportRecordDto::unsetsourceType()
{
    sourceTypeIsSet_ = false;
}

std::string RepositoryImportRecordDto::getCreatedAt() const
{
    return createdAt_;
}

void RepositoryImportRecordDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool RepositoryImportRecordDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void RepositoryImportRecordDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string RepositoryImportRecordDto::getFinishedAt() const
{
    return finishedAt_;
}

void RepositoryImportRecordDto::setFinishedAt(const std::string& value)
{
    finishedAt_ = value;
    finishedAtIsSet_ = true;
}

bool RepositoryImportRecordDto::finishedAtIsSet() const
{
    return finishedAtIsSet_;
}

void RepositoryImportRecordDto::unsetfinishedAt()
{
    finishedAtIsSet_ = false;
}

double RepositoryImportRecordDto::getRepositorySize() const
{
    return repositorySize_;
}

void RepositoryImportRecordDto::setRepositorySize(double value)
{
    repositorySize_ = value;
    repositorySizeIsSet_ = true;
}

bool RepositoryImportRecordDto::repositorySizeIsSet() const
{
    return repositorySizeIsSet_;
}

void RepositoryImportRecordDto::unsetrepositorySize()
{
    repositorySizeIsSet_ = false;
}

std::string RepositoryImportRecordDto::getErrorMessage() const
{
    return errorMessage_;
}

void RepositoryImportRecordDto::setErrorMessage(const std::string& value)
{
    errorMessage_ = value;
    errorMessageIsSet_ = true;
}

bool RepositoryImportRecordDto::errorMessageIsSet() const
{
    return errorMessageIsSet_;
}

void RepositoryImportRecordDto::unseterrorMessage()
{
    errorMessageIsSet_ = false;
}

std::string RepositoryImportRecordDto::getTargetFullName() const
{
    return targetFullName_;
}

void RepositoryImportRecordDto::setTargetFullName(const std::string& value)
{
    targetFullName_ = value;
    targetFullNameIsSet_ = true;
}

bool RepositoryImportRecordDto::targetFullNameIsSet() const
{
    return targetFullNameIsSet_;
}

void RepositoryImportRecordDto::unsettargetFullName()
{
    targetFullNameIsSet_ = false;
}

std::string RepositoryImportRecordDto::getTargetProjectId() const
{
    return targetProjectId_;
}

void RepositoryImportRecordDto::setTargetProjectId(const std::string& value)
{
    targetProjectId_ = value;
    targetProjectIdIsSet_ = true;
}

bool RepositoryImportRecordDto::targetProjectIdIsSet() const
{
    return targetProjectIdIsSet_;
}

void RepositoryImportRecordDto::unsettargetProjectId()
{
    targetProjectIdIsSet_ = false;
}

}
}
}
}
}


