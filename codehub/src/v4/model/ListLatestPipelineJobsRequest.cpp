

#include "huaweicloud/codehub/v4/model/ListLatestPipelineJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListLatestPipelineJobsRequest::ListLatestPipelineJobsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    pipelineId_ = 0;
    pipelineIdIsSet_ = false;
}

ListLatestPipelineJobsRequest::~ListLatestPipelineJobsRequest() = default;

void ListLatestPipelineJobsRequest::validate()
{
}

web::json::value ListLatestPipelineJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(pipelineIdIsSet_) {
        val[utility::conversions::to_string_t("pipeline_id")] = ModelBase::toJson(pipelineId_);
    }

    return val;
}
bool ListLatestPipelineJobsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


int32_t ListLatestPipelineJobsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListLatestPipelineJobsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListLatestPipelineJobsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListLatestPipelineJobsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ListLatestPipelineJobsRequest::getPipelineId() const
{
    return pipelineId_;
}

void ListLatestPipelineJobsRequest::setPipelineId(int32_t value)
{
    pipelineId_ = value;
    pipelineIdIsSet_ = true;
}

bool ListLatestPipelineJobsRequest::pipelineIdIsSet() const
{
    return pipelineIdIsSet_;
}

void ListLatestPipelineJobsRequest::unsetpipelineId()
{
    pipelineIdIsSet_ = false;
}

}
}
}
}
}


