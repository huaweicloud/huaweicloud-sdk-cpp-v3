

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineQuery.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineQuery::ListPipelineQuery()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    projectIdsIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    statusIsSet_ = false;
    isPublish_ = false;
    isPublishIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorIdsIsSet_ = false;
    executorIdsIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0L;
    offsetIsSet_ = false;
    limit_ = 0L;
    limitIsSet_ = false;
    sortKey_ = "";
    sortKeyIsSet_ = false;
    sortDir_ = "";
    sortDirIsSet_ = false;
    groupPathId_ = "";
    groupPathIdIsSet_ = false;
    byGroup_ = false;
    byGroupIsSet_ = false;
    isBanned_ = false;
    isBannedIsSet_ = false;
    queryNew_ = false;
    queryNewIsSet_ = false;
    securityLevelListIsSet_ = false;
}

ListPipelineQuery::~ListPipelineQuery() = default;

void ListPipelineQuery::validate()
{
}

web::json::value ListPipelineQuery::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectIdsIsSet_) {
        val[utility::conversions::to_string_t("project_ids")] = ModelBase::toJson(projectIds_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(isPublishIsSet_) {
        val[utility::conversions::to_string_t("is_publish")] = ModelBase::toJson(isPublish_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorIdsIsSet_) {
        val[utility::conversions::to_string_t("creator_ids")] = ModelBase::toJson(creatorIds_);
    }
    if(executorIdsIsSet_) {
        val[utility::conversions::to_string_t("executor_ids")] = ModelBase::toJson(executorIds_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(sortKeyIsSet_) {
        val[utility::conversions::to_string_t("sort_key")] = ModelBase::toJson(sortKey_);
    }
    if(sortDirIsSet_) {
        val[utility::conversions::to_string_t("sort_dir")] = ModelBase::toJson(sortDir_);
    }
    if(groupPathIdIsSet_) {
        val[utility::conversions::to_string_t("group_path_id")] = ModelBase::toJson(groupPathId_);
    }
    if(byGroupIsSet_) {
        val[utility::conversions::to_string_t("by_group")] = ModelBase::toJson(byGroup_);
    }
    if(isBannedIsSet_) {
        val[utility::conversions::to_string_t("is_banned")] = ModelBase::toJson(isBanned_);
    }
    if(queryNewIsSet_) {
        val[utility::conversions::to_string_t("query_new")] = ModelBase::toJson(queryNew_);
    }
    if(securityLevelListIsSet_) {
        val[utility::conversions::to_string_t("security_level_list")] = ModelBase::toJson(securityLevelList_);
    }

    return val;
}
bool ListPipelineQuery::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("project_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_publish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_publish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("executor_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("executor_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_path_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_path_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupPathId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("by_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("by_group"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_banned"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_banned"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsBanned(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_new"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_new"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryNew(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevelList(refVal);
        }
    }
    return ok;
}


std::string ListPipelineQuery::getProjectId() const
{
    return projectId_;
}

void ListPipelineQuery::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListPipelineQuery::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListPipelineQuery::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::vector<std::string>& ListPipelineQuery::getProjectIds()
{
    return projectIds_;
}

void ListPipelineQuery::setProjectIds(const std::vector<std::string>& value)
{
    projectIds_ = value;
    projectIdsIsSet_ = true;
}

bool ListPipelineQuery::projectIdsIsSet() const
{
    return projectIdsIsSet_;
}

void ListPipelineQuery::unsetprojectIds()
{
    projectIdsIsSet_ = false;
}

std::string ListPipelineQuery::getComponentId() const
{
    return componentId_;
}

void ListPipelineQuery::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ListPipelineQuery::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ListPipelineQuery::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string ListPipelineQuery::getName() const
{
    return name_;
}

void ListPipelineQuery::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListPipelineQuery::nameIsSet() const
{
    return nameIsSet_;
}

void ListPipelineQuery::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& ListPipelineQuery::getStatus()
{
    return status_;
}

void ListPipelineQuery::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListPipelineQuery::statusIsSet() const
{
    return statusIsSet_;
}

void ListPipelineQuery::unsetstatus()
{
    statusIsSet_ = false;
}

bool ListPipelineQuery::isIsPublish() const
{
    return isPublish_;
}

void ListPipelineQuery::setIsPublish(bool value)
{
    isPublish_ = value;
    isPublishIsSet_ = true;
}

bool ListPipelineQuery::isPublishIsSet() const
{
    return isPublishIsSet_;
}

void ListPipelineQuery::unsetisPublish()
{
    isPublishIsSet_ = false;
}

std::string ListPipelineQuery::getCreatorId() const
{
    return creatorId_;
}

void ListPipelineQuery::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ListPipelineQuery::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ListPipelineQuery::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::vector<std::string>& ListPipelineQuery::getCreatorIds()
{
    return creatorIds_;
}

void ListPipelineQuery::setCreatorIds(const std::vector<std::string>& value)
{
    creatorIds_ = value;
    creatorIdsIsSet_ = true;
}

bool ListPipelineQuery::creatorIdsIsSet() const
{
    return creatorIdsIsSet_;
}

void ListPipelineQuery::unsetcreatorIds()
{
    creatorIdsIsSet_ = false;
}

std::vector<std::string>& ListPipelineQuery::getExecutorIds()
{
    return executorIds_;
}

void ListPipelineQuery::setExecutorIds(const std::vector<std::string>& value)
{
    executorIds_ = value;
    executorIdsIsSet_ = true;
}

bool ListPipelineQuery::executorIdsIsSet() const
{
    return executorIdsIsSet_;
}

void ListPipelineQuery::unsetexecutorIds()
{
    executorIdsIsSet_ = false;
}

std::string ListPipelineQuery::getStartTime() const
{
    return startTime_;
}

void ListPipelineQuery::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListPipelineQuery::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListPipelineQuery::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListPipelineQuery::getEndTime() const
{
    return endTime_;
}

void ListPipelineQuery::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListPipelineQuery::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListPipelineQuery::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t ListPipelineQuery::getOffset() const
{
    return offset_;
}

void ListPipelineQuery::setOffset(int64_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelineQuery::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelineQuery::unsetoffset()
{
    offsetIsSet_ = false;
}

int64_t ListPipelineQuery::getLimit() const
{
    return limit_;
}

void ListPipelineQuery::setLimit(int64_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelineQuery::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelineQuery::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPipelineQuery::getSortKey() const
{
    return sortKey_;
}

void ListPipelineQuery::setSortKey(const std::string& value)
{
    sortKey_ = value;
    sortKeyIsSet_ = true;
}

bool ListPipelineQuery::sortKeyIsSet() const
{
    return sortKeyIsSet_;
}

void ListPipelineQuery::unsetsortKey()
{
    sortKeyIsSet_ = false;
}

std::string ListPipelineQuery::getSortDir() const
{
    return sortDir_;
}

void ListPipelineQuery::setSortDir(const std::string& value)
{
    sortDir_ = value;
    sortDirIsSet_ = true;
}

bool ListPipelineQuery::sortDirIsSet() const
{
    return sortDirIsSet_;
}

void ListPipelineQuery::unsetsortDir()
{
    sortDirIsSet_ = false;
}

std::string ListPipelineQuery::getGroupPathId() const
{
    return groupPathId_;
}

void ListPipelineQuery::setGroupPathId(const std::string& value)
{
    groupPathId_ = value;
    groupPathIdIsSet_ = true;
}

bool ListPipelineQuery::groupPathIdIsSet() const
{
    return groupPathIdIsSet_;
}

void ListPipelineQuery::unsetgroupPathId()
{
    groupPathIdIsSet_ = false;
}

bool ListPipelineQuery::isByGroup() const
{
    return byGroup_;
}

void ListPipelineQuery::setByGroup(bool value)
{
    byGroup_ = value;
    byGroupIsSet_ = true;
}

bool ListPipelineQuery::byGroupIsSet() const
{
    return byGroupIsSet_;
}

void ListPipelineQuery::unsetbyGroup()
{
    byGroupIsSet_ = false;
}

bool ListPipelineQuery::isIsBanned() const
{
    return isBanned_;
}

void ListPipelineQuery::setIsBanned(bool value)
{
    isBanned_ = value;
    isBannedIsSet_ = true;
}

bool ListPipelineQuery::isBannedIsSet() const
{
    return isBannedIsSet_;
}

void ListPipelineQuery::unsetisBanned()
{
    isBannedIsSet_ = false;
}

bool ListPipelineQuery::isQueryNew() const
{
    return queryNew_;
}

void ListPipelineQuery::setQueryNew(bool value)
{
    queryNew_ = value;
    queryNewIsSet_ = true;
}

bool ListPipelineQuery::queryNewIsSet() const
{
    return queryNewIsSet_;
}

void ListPipelineQuery::unsetqueryNew()
{
    queryNewIsSet_ = false;
}

std::vector<int32_t>& ListPipelineQuery::getSecurityLevelList()
{
    return securityLevelList_;
}

void ListPipelineQuery::setSecurityLevelList(std::vector<int32_t> value)
{
    securityLevelList_ = value;
    securityLevelListIsSet_ = true;
}

bool ListPipelineQuery::securityLevelListIsSet() const
{
    return securityLevelListIsSet_;
}

void ListPipelineQuery::unsetsecurityLevelList()
{
    securityLevelListIsSet_ = false;
}

}
}
}
}
}


