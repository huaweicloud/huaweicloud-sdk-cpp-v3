

#include "huaweicloud/codeartsrepo/v4/model/PipelineDetailDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PipelineDetailDto::PipelineDetailDto()
{
    id_ = 0;
    idIsSet_ = false;
    webUrl_ = "";
    webUrlIsSet_ = false;
    sha_ = "";
    shaIsSet_ = false;
    ref_ = "";
    refIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    startedAt_ = "";
    startedAtIsSet_ = false;
    finishedAt_ = "";
    finishedAtIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    isInvalid_ = false;
    isInvalidIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    stagesIsSet_ = false;
    isLatest_ = false;
    isLatestIsSet_ = false;
    triggerUser_ = "";
    triggerUserIsSet_ = false;
    allJobFinished_ = false;
    allJobFinishedIsSet_ = false;
}

PipelineDetailDto::~PipelineDetailDto() = default;

void PipelineDetailDto::validate()
{
}

web::json::value PipelineDetailDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(webUrlIsSet_) {
        val[utility::conversions::to_string_t("web_url")] = ModelBase::toJson(webUrl_);
    }
    if(shaIsSet_) {
        val[utility::conversions::to_string_t("sha")] = ModelBase::toJson(sha_);
    }
    if(refIsSet_) {
        val[utility::conversions::to_string_t("ref")] = ModelBase::toJson(ref_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(startedAtIsSet_) {
        val[utility::conversions::to_string_t("started_at")] = ModelBase::toJson(startedAt_);
    }
    if(finishedAtIsSet_) {
        val[utility::conversions::to_string_t("finished_at")] = ModelBase::toJson(finishedAt_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(isInvalidIsSet_) {
        val[utility::conversions::to_string_t("is_invalid")] = ModelBase::toJson(isInvalid_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }
    if(isLatestIsSet_) {
        val[utility::conversions::to_string_t("is_latest")] = ModelBase::toJson(isLatest_);
    }
    if(triggerUserIsSet_) {
        val[utility::conversions::to_string_t("trigger_user")] = ModelBase::toJson(triggerUser_);
    }
    if(allJobFinishedIsSet_) {
        val[utility::conversions::to_string_t("all_job_finished")] = ModelBase::toJson(allJobFinished_);
    }

    return val;
}
bool PipelineDetailDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("web_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sha"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sha"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSha(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ref"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ref"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRef(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("started_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("started_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_invalid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_invalid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsInvalid(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineStageDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_latest"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_latest"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsLatest(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_user"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerUser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_job_finished"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_job_finished"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllJobFinished(refVal);
        }
    }
    return ok;
}


int32_t PipelineDetailDto::getId() const
{
    return id_;
}

void PipelineDetailDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineDetailDto::idIsSet() const
{
    return idIsSet_;
}

void PipelineDetailDto::unsetid()
{
    idIsSet_ = false;
}

std::string PipelineDetailDto::getWebUrl() const
{
    return webUrl_;
}

void PipelineDetailDto::setWebUrl(const std::string& value)
{
    webUrl_ = value;
    webUrlIsSet_ = true;
}

bool PipelineDetailDto::webUrlIsSet() const
{
    return webUrlIsSet_;
}

void PipelineDetailDto::unsetwebUrl()
{
    webUrlIsSet_ = false;
}

std::string PipelineDetailDto::getSha() const
{
    return sha_;
}

void PipelineDetailDto::setSha(const std::string& value)
{
    sha_ = value;
    shaIsSet_ = true;
}

bool PipelineDetailDto::shaIsSet() const
{
    return shaIsSet_;
}

void PipelineDetailDto::unsetsha()
{
    shaIsSet_ = false;
}

std::string PipelineDetailDto::getRef() const
{
    return ref_;
}

void PipelineDetailDto::setRef(const std::string& value)
{
    ref_ = value;
    refIsSet_ = true;
}

bool PipelineDetailDto::refIsSet() const
{
    return refIsSet_;
}

void PipelineDetailDto::unsetref()
{
    refIsSet_ = false;
}

std::string PipelineDetailDto::getStatus() const
{
    return status_;
}

void PipelineDetailDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineDetailDto::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineDetailDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string PipelineDetailDto::getCreatedAt() const
{
    return createdAt_;
}

void PipelineDetailDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool PipelineDetailDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void PipelineDetailDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string PipelineDetailDto::getUpdatedAt() const
{
    return updatedAt_;
}

void PipelineDetailDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool PipelineDetailDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void PipelineDetailDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string PipelineDetailDto::getStartedAt() const
{
    return startedAt_;
}

void PipelineDetailDto::setStartedAt(const std::string& value)
{
    startedAt_ = value;
    startedAtIsSet_ = true;
}

bool PipelineDetailDto::startedAtIsSet() const
{
    return startedAtIsSet_;
}

void PipelineDetailDto::unsetstartedAt()
{
    startedAtIsSet_ = false;
}

std::string PipelineDetailDto::getFinishedAt() const
{
    return finishedAt_;
}

void PipelineDetailDto::setFinishedAt(const std::string& value)
{
    finishedAt_ = value;
    finishedAtIsSet_ = true;
}

bool PipelineDetailDto::finishedAtIsSet() const
{
    return finishedAtIsSet_;
}

void PipelineDetailDto::unsetfinishedAt()
{
    finishedAtIsSet_ = false;
}

int32_t PipelineDetailDto::getRepositoryId() const
{
    return repositoryId_;
}

void PipelineDetailDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool PipelineDetailDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void PipelineDetailDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

bool PipelineDetailDto::isIsInvalid() const
{
    return isInvalid_;
}

void PipelineDetailDto::setIsInvalid(bool value)
{
    isInvalid_ = value;
    isInvalidIsSet_ = true;
}

bool PipelineDetailDto::isInvalidIsSet() const
{
    return isInvalidIsSet_;
}

void PipelineDetailDto::unsetisInvalid()
{
    isInvalidIsSet_ = false;
}

std::string PipelineDetailDto::getType() const
{
    return type_;
}

void PipelineDetailDto::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool PipelineDetailDto::typeIsSet() const
{
    return typeIsSet_;
}

void PipelineDetailDto::unsettype()
{
    typeIsSet_ = false;
}

std::vector<PipelineStageDto>& PipelineDetailDto::getStages()
{
    return stages_;
}

void PipelineDetailDto::setStages(const std::vector<PipelineStageDto>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool PipelineDetailDto::stagesIsSet() const
{
    return stagesIsSet_;
}

void PipelineDetailDto::unsetstages()
{
    stagesIsSet_ = false;
}

bool PipelineDetailDto::isIsLatest() const
{
    return isLatest_;
}

void PipelineDetailDto::setIsLatest(bool value)
{
    isLatest_ = value;
    isLatestIsSet_ = true;
}

bool PipelineDetailDto::isLatestIsSet() const
{
    return isLatestIsSet_;
}

void PipelineDetailDto::unsetisLatest()
{
    isLatestIsSet_ = false;
}

std::string PipelineDetailDto::getTriggerUser() const
{
    return triggerUser_;
}

void PipelineDetailDto::setTriggerUser(const std::string& value)
{
    triggerUser_ = value;
    triggerUserIsSet_ = true;
}

bool PipelineDetailDto::triggerUserIsSet() const
{
    return triggerUserIsSet_;
}

void PipelineDetailDto::unsettriggerUser()
{
    triggerUserIsSet_ = false;
}

bool PipelineDetailDto::isAllJobFinished() const
{
    return allJobFinished_;
}

void PipelineDetailDto::setAllJobFinished(bool value)
{
    allJobFinished_ = value;
    allJobFinishedIsSet_ = true;
}

bool PipelineDetailDto::allJobFinishedIsSet() const
{
    return allJobFinishedIsSet_;
}

void PipelineDetailDto::unsetallJobFinished()
{
    allJobFinishedIsSet_ = false;
}

}
}
}
}
}


