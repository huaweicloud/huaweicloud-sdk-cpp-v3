

#include "huaweicloud/codehub/v4/model/ListLatestPipelineJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListLatestPipelineJobsResponse::ListLatestPipelineJobsResponse()
{
    id_ = 0;
    idIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    stagesIsSet_ = false;
}

ListLatestPipelineJobsResponse::~ListLatestPipelineJobsResponse() = default;

void ListLatestPipelineJobsResponse::validate()
{
}

web::json::value ListLatestPipelineJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(stagesIsSet_) {
        val[utility::conversions::to_string_t("stages")] = ModelBase::toJson(stages_);
    }

    return val;
}
bool ListLatestPipelineJobsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stages"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineStageJobDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStages(refVal);
        }
    }
    return ok;
}


int32_t ListLatestPipelineJobsResponse::getId() const
{
    return id_;
}

void ListLatestPipelineJobsResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListLatestPipelineJobsResponse::idIsSet() const
{
    return idIsSet_;
}

void ListLatestPipelineJobsResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ListLatestPipelineJobsResponse::getStatus() const
{
    return status_;
}

void ListLatestPipelineJobsResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListLatestPipelineJobsResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ListLatestPipelineJobsResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::vector<PipelineStageJobDto>& ListLatestPipelineJobsResponse::getStages()
{
    return stages_;
}

void ListLatestPipelineJobsResponse::setStages(const std::vector<PipelineStageJobDto>& value)
{
    stages_ = value;
    stagesIsSet_ = true;
}

bool ListLatestPipelineJobsResponse::stagesIsSet() const
{
    return stagesIsSet_;
}

void ListLatestPipelineJobsResponse::unsetstages()
{
    stagesIsSet_ = false;
}

}
}
}
}
}


