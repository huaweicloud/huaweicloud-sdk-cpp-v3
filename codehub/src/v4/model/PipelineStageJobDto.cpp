

#include "huaweicloud/codehub/v4/model/PipelineStageJobDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




PipelineStageJobDto::PipelineStageJobDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sortId_ = 0;
    sortIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    jobsIsSet_ = false;
}

PipelineStageJobDto::~PipelineStageJobDto() = default;

void PipelineStageJobDto::validate()
{
}

web::json::value PipelineStageJobDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool PipelineStageJobDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<BaseJobDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


int32_t PipelineStageJobDto::getId() const
{
    return id_;
}

void PipelineStageJobDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineStageJobDto::idIsSet() const
{
    return idIsSet_;
}

void PipelineStageJobDto::unsetid()
{
    idIsSet_ = false;
}

std::string PipelineStageJobDto::getName() const
{
    return name_;
}

void PipelineStageJobDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineStageJobDto::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineStageJobDto::unsetname()
{
    nameIsSet_ = false;
}

int32_t PipelineStageJobDto::getSortId() const
{
    return sortId_;
}

void PipelineStageJobDto::setSortId(int32_t value)
{
    sortId_ = value;
    sortIdIsSet_ = true;
}

bool PipelineStageJobDto::sortIdIsSet() const
{
    return sortIdIsSet_;
}

void PipelineStageJobDto::unsetsortId()
{
    sortIdIsSet_ = false;
}

std::string PipelineStageJobDto::getStatus() const
{
    return status_;
}

void PipelineStageJobDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool PipelineStageJobDto::statusIsSet() const
{
    return statusIsSet_;
}

void PipelineStageJobDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<BaseJobDto>& PipelineStageJobDto::getJobs()
{
    return jobs_;
}

void PipelineStageJobDto::setJobs(const std::vector<BaseJobDto>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool PipelineStageJobDto::jobsIsSet() const
{
    return jobsIsSet_;
}

void PipelineStageJobDto::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


