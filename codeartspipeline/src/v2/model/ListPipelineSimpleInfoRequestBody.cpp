

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineSimpleInfoRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineSimpleInfoRequestBody::ListPipelineSimpleInfoRequestBody()
{
    pipelineName_ = "";
    pipelineNameIsSet_ = false;
    projectIds_ = "";
    projectIdsIsSet_ = false;
    creatorIds_ = "";
    creatorIdsIsSet_ = false;
    executorIds_ = "";
    executorIdsIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    outcome_ = "";
    outcomeIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    gitUrl_ = "";
    gitUrlIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListPipelineSimpleInfoRequestBody::~ListPipelineSimpleInfoRequestBody() = default;

void ListPipelineSimpleInfoRequestBody::validate()
{
}

web::json::value ListPipelineSimpleInfoRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineNameIsSet_) {
        val[utility::conversions::to_string_t("pipeline_name")] = ModelBase::toJson(pipelineName_);
    }
    if(projectIdsIsSet_) {
        val[utility::conversions::to_string_t("project_ids")] = ModelBase::toJson(projectIds_);
    }
    if(creatorIdsIsSet_) {
        val[utility::conversions::to_string_t("creator_ids")] = ModelBase::toJson(creatorIds_);
    }
    if(executorIdsIsSet_) {
        val[utility::conversions::to_string_t("executor_ids")] = ModelBase::toJson(executorIds_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(outcomeIsSet_) {
        val[utility::conversions::to_string_t("outcome")] = ModelBase::toJson(outcome_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(gitUrlIsSet_) {
        val[utility::conversions::to_string_t("git_url")] = ModelBase::toJson(gitUrl_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListPipelineSimpleInfoRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("outcome"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("outcome"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutcome(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_dir"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_dir"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortDir(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListPipelineSimpleInfoRequestBody::getPipelineName() const
{
    return pipelineName_;
}

void ListPipelineSimpleInfoRequestBody::setPipelineName(const std::string& value)
{
    pipelineName_ = value;
    pipelineNameIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::pipelineNameIsSet() const
{
    return pipelineNameIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetpipelineName()
{
    pipelineNameIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getProjectIds() const
{
    return projectIds_;
}

void ListPipelineSimpleInfoRequestBody::setProjectIds(const std::string& value)
{
    projectIds_ = value;
    projectIdsIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::projectIdsIsSet() const
{
    return projectIdsIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetprojectIds()
{
    projectIdsIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getCreatorIds() const
{
    return creatorIds_;
}

void ListPipelineSimpleInfoRequestBody::setCreatorIds(const std::string& value)
{
    creatorIds_ = value;
    creatorIdsIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::creatorIdsIsSet() const
{
    return creatorIdsIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetcreatorIds()
{
    creatorIdsIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getExecutorIds() const
{
    return executorIds_;
}

void ListPipelineSimpleInfoRequestBody::setExecutorIds(const std::string& value)
{
    executorIds_ = value;
    executorIdsIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::executorIdsIsSet() const
{
    return executorIdsIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetexecutorIds()
{
    executorIdsIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getStatus() const
{
    return status_;
}

void ListPipelineSimpleInfoRequestBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::statusIsSet() const
{
    return statusIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getOutcome() const
{
    return outcome_;
}

void ListPipelineSimpleInfoRequestBody::setOutcome(const std::string& value)
{
    outcome_ = value;
    outcomeIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::outcomeIsSet() const
{
    return outcomeIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetoutcome()
{
    outcomeIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getSortKey() const
{
    return sortKey_;
}

void ListPipelineSimpleInfoRequestBody::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getSortDir() const
{
    return sortDir_;
}

void ListPipelineSimpleInfoRequestBody::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListPipelineSimpleInfoRequestBody::getGitUrl() const
{
    return gitUrl_;
}

void ListPipelineSimpleInfoRequestBody::setGitUrl(const std::string& value)
{
    gitUrl_ = value;
    gitUrlIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::gitUrlIsSet() const
{
    return gitUrlIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetgitUrl()
{
    gitUrlIsSet_ = false;
}

int32_t ListPipelineSimpleInfoRequestBody::getOffset() const
{
    return offset_;
}

void ListPipelineSimpleInfoRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPipelineSimpleInfoRequestBody::getLimit() const
{
    return limit_;
}

void ListPipelineSimpleInfoRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelineSimpleInfoRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelineSimpleInfoRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


