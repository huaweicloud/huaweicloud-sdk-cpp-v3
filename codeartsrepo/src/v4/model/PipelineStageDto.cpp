

#include "huaweicloud/codeartsrepo/v4/model/PipelineStageDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PipelineStageDto::PipelineStageDto()
{
    id_ = 0;
    idIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    pipelineId_ = 0;
    pipelineIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sortId_ = 0;
    sortIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
}

PipelineStageDto::~PipelineStageDto() = default;

void PipelineStageDto::validate()
{
}

web::json::value PipelineStageDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sortIdIsSet_) {
        val[utility::conversions::to_string_t("sort_id")] = ModelBase::toJson(sortId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool PipelineStageDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pipeline_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortId(refVal);
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
    return ok;
}


int32_t PipelineStageDto::getId() const
{
    return id_;
}

void PipelineStageDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineStageDto::idIsSet() const
{
    return idIsSet_;
}

void PipelineStageDto::unsetid()
{
    idIsSet_ = false;
}

int32_t PipelineStageDto::getRepositoryId() const
{
    return repositoryId_;
}

void PipelineStageDto::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool PipelineStageDto::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void PipelineStageDto::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t PipelineStageDto::getPipelineId() const
{
    return pipelineId_;
}

void PipelineStageDto::setPipelineId(int32_t value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool PipelineStageDto::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void PipelineStageDto::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

std::string PipelineStageDto::getName() const
{
    return name_;
}

void PipelineStageDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineStageDto::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineStageDto::unsetname()
{
    nameIsSet_ = false;
}

int32_t PipelineStageDto::getSortId() const
{
    return sortId_;
}

void PipelineStageDto::setSortId(int32_t value)
{
    sortId_ = value;
    sortIdIsSet_ = true;
}

bool PipelineStageDto::sortIdIsSet() const
{
    return sortIdIsSet_;
}

void PipelineStageDto::unsetsortId()
{
    sortIdIsSet_ = false;
}

std::string PipelineStageDto::getStatus() const
{
    return status_;
}

void PipelineStageDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineStageDto::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineStageDto::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


