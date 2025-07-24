

#include "huaweicloud/cloudtest/v1/model/ShowPlanListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowPlanListRequest::ShowPlanListRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    currentStage_ = "";
    currentStageIsSet_ = false;
    branchUri_ = "";
    branchUriIsSet_ = false;
    queryAllVersion_ = false;
    queryAllVersionIsSet_ = false;
    fixVersionIds_ = "";
    fixVersionIdsIsSet_ = false;
}

ShowPlanListRequest::~ShowPlanListRequest() = default;

void ShowPlanListRequest::validate()
{
}

web::json::value ShowPlanListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(currentStageIsSet_) {
        val[utility::conversions::to_string_t("current_stage")] = ModelBase::toJson(currentStage_);
    }
    if(branchUriIsSet_) {
        val[utility::conversions::to_string_t("branch_uri")] = ModelBase::toJson(branchUri_);
    }
    if(queryAllVersionIsSet_) {
        val[utility::conversions::to_string_t("query_all_version")] = ModelBase::toJson(queryAllVersion_);
    }
    if(fixVersionIdsIsSet_) {
        val[utility::conversions::to_string_t("fix_version_ids")] = ModelBase::toJson(fixVersionIds_);
    }

    return val;
}
bool ShowPlanListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("current_stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_all_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_all_version"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryAllVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fix_version_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fix_version_ids"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixVersionIds(refVal);
        }
    }
    return ok;
}


std::string ShowPlanListRequest::getProjectId() const
{
    return projectId_;
}

void ShowPlanListRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPlanListRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPlanListRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int64_t ShowPlanListRequest::getOffset() const
{
    return offset_;
}

void ShowPlanListRequest::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowPlanListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowPlanListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ShowPlanListRequest::getLimit() const
{
    return limit_;
}

void ShowPlanListRequest::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowPlanListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowPlanListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowPlanListRequest::getName() const
{
    return name_;
}

void ShowPlanListRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPlanListRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPlanListRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPlanListRequest::getCurrentStage() const
{
    return currentStage_;
}

void ShowPlanListRequest::setCurrentStage(const std::string& value)
{
    currentStage_ = value;
    currentStageIsSet_ = true;
}

bool ShowPlanListRequest::currentStageIsSet() const
{
    return currentStageIsSet_;
}

void ShowPlanListRequest::unsetcurrentStage()
{
    currentStageIsSet_ = false;
}

std::string ShowPlanListRequest::getBranchUri() const
{
    return branchUri_;
}

void ShowPlanListRequest::setBranchUri(const std::string& value)
{
    branchUri_ = value;
    branchUriIsSet_ = true;
}

bool ShowPlanListRequest::branchUriIsSet() const
{
    return branchUriIsSet_;
}

void ShowPlanListRequest::unsetbranchUri()
{
    branchUriIsSet_ = false;
}

bool ShowPlanListRequest::isQueryAllVersion() const
{
    return queryAllVersion_;
}

void ShowPlanListRequest::setQueryAllVersion(bool value)
{
    queryAllVersion_ = value;
    queryAllVersionIsSet_ = true;
}

bool ShowPlanListRequest::queryAllVersionIsSet() const
{
    return queryAllVersionIsSet_;
}

void ShowPlanListRequest::unsetqueryAllVersion()
{
    queryAllVersionIsSet_ = false;
}

std::string ShowPlanListRequest::getFixVersionIds() const
{
    return fixVersionIds_;
}

void ShowPlanListRequest::setFixVersionIds(const std::string& value)
{
    fixVersionIds_ = value;
    fixVersionIdsIsSet_ = true;
}

bool ShowPlanListRequest::fixVersionIdsIsSet() const
{
    return fixVersionIdsIsSet_;
}

void ShowPlanListRequest::unsetfixVersionIds()
{
    fixVersionIdsIsSet_ = false;
}

}
}
}
}
}


