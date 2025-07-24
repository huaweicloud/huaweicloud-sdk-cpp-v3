

#include "huaweicloud/cloudtest/v1/model/WorkItemVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




WorkItemVo::WorkItemVo()
{
    name_ = "";
    nameIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    path_ = "";
    pathIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    dueDate_ = "";
    dueDateIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    creator_ = "";
    creatorIsSet_ = false;
    updator_ = "";
    updatorIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    workItemId_ = "";
    workItemIdIsSet_ = false;
    statusId_ = "";
    statusIdIsSet_ = false;
    statusName_ = "";
    statusNameIsSet_ = false;
    trackerId_ = "";
    trackerIdIsSet_ = false;
    trackerName_ = "";
    trackerNameIsSet_ = false;
    iterationId_ = "";
    iterationIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    severityId_ = "";
    severityIdIsSet_ = false;
    severityName_ = "";
    severityNameIsSet_ = false;
    parentWorkitemId_ = "";
    parentWorkitemIdIsSet_ = false;
    boardId_ = "";
    boardIdIsSet_ = false;
    boardName_ = "";
    boardNameIsSet_ = false;
    createTime_ = utility::datetime();
    createTimeIsSet_ = false;
    updateTime_ = utility::datetime();
    updateTimeIsSet_ = false;
    iterationName_ = "";
    iterationNameIsSet_ = false;
    moduleName_ = "";
    moduleNameIsSet_ = false;
    modulePath_ = "";
    modulePathIsSet_ = false;
    modulePathName_ = "";
    modulePathNameIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    haveChildDynamic_ = false;
    haveChildDynamicIsSet_ = false;
    hasChild_ = false;
    hasChildIsSet_ = false;
    issueDynamicCount_ = 0;
    issueDynamicCountIsSet_ = false;
    caseCount_ = 0;
    caseCountIsSet_ = false;
    sequenceId_ = "";
    sequenceIdIsSet_ = false;
    piId_ = "";
    piIdIsSet_ = false;
    piName_ = "";
    piNameIsSet_ = false;
}

WorkItemVo::~WorkItemVo() = default;

void WorkItemVo::validate()
{
}

web::json::value WorkItemVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(pathIsSet_) {
        val[utility::conversions::to_string_t("path")] = ModelBase::toJson(path_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(dueDateIsSet_) {
        val[utility::conversions::to_string_t("due_date")] = ModelBase::toJson(dueDate_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(creatorIsSet_) {
        val[utility::conversions::to_string_t("creator")] = ModelBase::toJson(creator_);
    }
    if(updatorIsSet_) {
        val[utility::conversions::to_string_t("updator")] = ModelBase::toJson(updator_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(workItemIdIsSet_) {
        val[utility::conversions::to_string_t("work_item_id")] = ModelBase::toJson(workItemId_);
    }
    if(statusIdIsSet_) {
        val[utility::conversions::to_string_t("status_id")] = ModelBase::toJson(statusId_);
    }
    if(statusNameIsSet_) {
        val[utility::conversions::to_string_t("status_name")] = ModelBase::toJson(statusName_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(trackerNameIsSet_) {
        val[utility::conversions::to_string_t("tracker_name")] = ModelBase::toJson(trackerName_);
    }
    if(iterationIdIsSet_) {
        val[utility::conversions::to_string_t("iteration_id")] = ModelBase::toJson(iterationId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(severityIdIsSet_) {
        val[utility::conversions::to_string_t("severity_id")] = ModelBase::toJson(severityId_);
    }
    if(severityNameIsSet_) {
        val[utility::conversions::to_string_t("severity_name")] = ModelBase::toJson(severityName_);
    }
    if(parentWorkitemIdIsSet_) {
        val[utility::conversions::to_string_t("parent_workitem_id")] = ModelBase::toJson(parentWorkitemId_);
    }
    if(boardIdIsSet_) {
        val[utility::conversions::to_string_t("board_id")] = ModelBase::toJson(boardId_);
    }
    if(boardNameIsSet_) {
        val[utility::conversions::to_string_t("board_name")] = ModelBase::toJson(boardName_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(iterationNameIsSet_) {
        val[utility::conversions::to_string_t("iteration_name")] = ModelBase::toJson(iterationName_);
    }
    if(moduleNameIsSet_) {
        val[utility::conversions::to_string_t("module_name")] = ModelBase::toJson(moduleName_);
    }
    if(modulePathIsSet_) {
        val[utility::conversions::to_string_t("module_path")] = ModelBase::toJson(modulePath_);
    }
    if(modulePathNameIsSet_) {
        val[utility::conversions::to_string_t("module_path_name")] = ModelBase::toJson(modulePathName_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(haveChildDynamicIsSet_) {
        val[utility::conversions::to_string_t("have_child_dynamic")] = ModelBase::toJson(haveChildDynamic_);
    }
    if(hasChildIsSet_) {
        val[utility::conversions::to_string_t("has_child")] = ModelBase::toJson(hasChild_);
    }
    if(issueDynamicCountIsSet_) {
        val[utility::conversions::to_string_t("issue_dynamic_count")] = ModelBase::toJson(issueDynamicCount_);
    }
    if(caseCountIsSet_) {
        val[utility::conversions::to_string_t("case_count")] = ModelBase::toJson(caseCount_);
    }
    if(sequenceIdIsSet_) {
        val[utility::conversions::to_string_t("sequence_id")] = ModelBase::toJson(sequenceId_);
    }
    if(piIdIsSet_) {
        val[utility::conversions::to_string_t("pi_id")] = ModelBase::toJson(piId_);
    }
    if(piNameIsSet_) {
        val[utility::conversions::to_string_t("pi_name")] = ModelBase::toJson(piName_);
    }

    return val;
}
bool WorkItemVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("due_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("due_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updator"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdator(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkItemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_workitem_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_workitem_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentWorkitemId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("board_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("board_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoardId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("board_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("board_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoardName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModulePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_path_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_path_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModulePathName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("have_child_dynamic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("have_child_dynamic"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHaveChildDynamic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("has_child"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("has_child"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHasChild(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_dynamic_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_dynamic_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDynamicCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sequence_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sequence_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSequenceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pi_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pi_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPiName(refVal);
        }
    }
    return ok;
}


std::string WorkItemVo::getName() const
{
    return name_;
}

void WorkItemVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WorkItemVo::nameIsSet() const
{
    return nameIsSet_;
}

void WorkItemVo::unsetname()
{
    nameIsSet_ = false;
}

std::string WorkItemVo::getOwner() const
{
    return owner_;
}

void WorkItemVo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool WorkItemVo::ownerIsSet() const
{
    return ownerIsSet_;
}

void WorkItemVo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string WorkItemVo::getPath() const
{
    return path_;
}

void WorkItemVo::setPath(const std::string& value)
{
    path_ = value;
    pathIsSet_ = true;
}

bool WorkItemVo::pathIsSet() const
{
    return pathIsSet_;
}

void WorkItemVo::unsetpath()
{
    pathIsSet_ = false;
}

std::string WorkItemVo::getStartDate() const
{
    return startDate_;
}

void WorkItemVo::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool WorkItemVo::startDateIsSet() const
{
    return startDateIsSet_;
}

void WorkItemVo::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string WorkItemVo::getDueDate() const
{
    return dueDate_;
}

void WorkItemVo::setDueDate(const std::string& value)
{
    dueDate_ = value;
    dueDateIsSet_ = true;
}

bool WorkItemVo::dueDateIsSet() const
{
    return dueDateIsSet_;
}

void WorkItemVo::unsetdueDate()
{
    dueDateIsSet_ = false;
}

std::string WorkItemVo::getRegion() const
{
    return region_;
}

void WorkItemVo::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool WorkItemVo::regionIsSet() const
{
    return regionIsSet_;
}

void WorkItemVo::unsetregion()
{
    regionIsSet_ = false;
}

std::string WorkItemVo::getCreator() const
{
    return creator_;
}

void WorkItemVo::setCreator(const std::string& value)
{
    creator_ = value;
    creatorIsSet_ = true;
}

bool WorkItemVo::creatorIsSet() const
{
    return creatorIsSet_;
}

void WorkItemVo::unsetcreator()
{
    creatorIsSet_ = false;
}

std::string WorkItemVo::getUpdator() const
{
    return updator_;
}

void WorkItemVo::setUpdator(const std::string& value)
{
    updator_ = value;
    updatorIsSet_ = true;
}

bool WorkItemVo::updatorIsSet() const
{
    return updatorIsSet_;
}

void WorkItemVo::unsetupdator()
{
    updatorIsSet_ = false;
}

std::string WorkItemVo::getProjectUuid() const
{
    return projectUuid_;
}

void WorkItemVo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool WorkItemVo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void WorkItemVo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string WorkItemVo::getWorkItemId() const
{
    return workItemId_;
}

void WorkItemVo::setWorkItemId(const std::string& value)
{
    workItemId_ = value;
    workItemIdIsSet_ = true;
}

bool WorkItemVo::workItemIdIsSet() const
{
    return workItemIdIsSet_;
}

void WorkItemVo::unsetworkItemId()
{
    workItemIdIsSet_ = false;
}

std::string WorkItemVo::getStatusId() const
{
    return statusId_;
}

void WorkItemVo::setStatusId(const std::string& value)
{
    statusId_ = value;
    statusIdIsSet_ = true;
}

bool WorkItemVo::statusIdIsSet() const
{
    return statusIdIsSet_;
}

void WorkItemVo::unsetstatusId()
{
    statusIdIsSet_ = false;
}

std::string WorkItemVo::getStatusName() const
{
    return statusName_;
}

void WorkItemVo::setStatusName(const std::string& value)
{
    statusName_ = value;
    statusNameIsSet_ = true;
}

bool WorkItemVo::statusNameIsSet() const
{
    return statusNameIsSet_;
}

void WorkItemVo::unsetstatusName()
{
    statusNameIsSet_ = false;
}

std::string WorkItemVo::getTrackerId() const
{
    return trackerId_;
}

void WorkItemVo::setTrackerId(const std::string& value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool WorkItemVo::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void WorkItemVo::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string WorkItemVo::getTrackerName() const
{
    return trackerName_;
}

void WorkItemVo::setTrackerName(const std::string& value)
{
    trackerName_ = value;
    trackerNameIsSet_ = true;
}

bool WorkItemVo::trackerNameIsSet() const
{
    return trackerNameIsSet_;
}

void WorkItemVo::unsettrackerName()
{
    trackerNameIsSet_ = false;
}

std::string WorkItemVo::getIterationId() const
{
    return iterationId_;
}

void WorkItemVo::setIterationId(const std::string& value)
{
    iterationId_ = value;
    iterationIdIsSet_ = true;
}

bool WorkItemVo::iterationIdIsSet() const
{
    return iterationIdIsSet_;
}

void WorkItemVo::unsetiterationId()
{
    iterationIdIsSet_ = false;
}

std::string WorkItemVo::getModuleId() const
{
    return moduleId_;
}

void WorkItemVo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool WorkItemVo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void WorkItemVo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string WorkItemVo::getSeverityId() const
{
    return severityId_;
}

void WorkItemVo::setSeverityId(const std::string& value)
{
    severityId_ = value;
    severityIdIsSet_ = true;
}

bool WorkItemVo::severityIdIsSet() const
{
    return severityIdIsSet_;
}

void WorkItemVo::unsetseverityId()
{
    severityIdIsSet_ = false;
}

std::string WorkItemVo::getSeverityName() const
{
    return severityName_;
}

void WorkItemVo::setSeverityName(const std::string& value)
{
    severityName_ = value;
    severityNameIsSet_ = true;
}

bool WorkItemVo::severityNameIsSet() const
{
    return severityNameIsSet_;
}

void WorkItemVo::unsetseverityName()
{
    severityNameIsSet_ = false;
}

std::string WorkItemVo::getParentWorkitemId() const
{
    return parentWorkitemId_;
}

void WorkItemVo::setParentWorkitemId(const std::string& value)
{
    parentWorkitemId_ = value;
    parentWorkitemIdIsSet_ = true;
}

bool WorkItemVo::parentWorkitemIdIsSet() const
{
    return parentWorkitemIdIsSet_;
}

void WorkItemVo::unsetparentWorkitemId()
{
    parentWorkitemIdIsSet_ = false;
}

std::string WorkItemVo::getBoardId() const
{
    return boardId_;
}

void WorkItemVo::setBoardId(const std::string& value)
{
    boardId_ = value;
    boardIdIsSet_ = true;
}

bool WorkItemVo::boardIdIsSet() const
{
    return boardIdIsSet_;
}

void WorkItemVo::unsetboardId()
{
    boardIdIsSet_ = false;
}

std::string WorkItemVo::getBoardName() const
{
    return boardName_;
}

void WorkItemVo::setBoardName(const std::string& value)
{
    boardName_ = value;
    boardNameIsSet_ = true;
}

bool WorkItemVo::boardNameIsSet() const
{
    return boardNameIsSet_;
}

void WorkItemVo::unsetboardName()
{
    boardNameIsSet_ = false;
}

utility::datetime WorkItemVo::getCreateTime() const
{
    return createTime_;
}

void WorkItemVo::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool WorkItemVo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void WorkItemVo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime WorkItemVo::getUpdateTime() const
{
    return updateTime_;
}

void WorkItemVo::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool WorkItemVo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void WorkItemVo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string WorkItemVo::getIterationName() const
{
    return iterationName_;
}

void WorkItemVo::setIterationName(const std::string& value)
{
    iterationName_ = value;
    iterationNameIsSet_ = true;
}

bool WorkItemVo::iterationNameIsSet() const
{
    return iterationNameIsSet_;
}

void WorkItemVo::unsetiterationName()
{
    iterationNameIsSet_ = false;
}

std::string WorkItemVo::getModuleName() const
{
    return moduleName_;
}

void WorkItemVo::setModuleName(const std::string& value)
{
    moduleName_ = value;
    moduleNameIsSet_ = true;
}

bool WorkItemVo::moduleNameIsSet() const
{
    return moduleNameIsSet_;
}

void WorkItemVo::unsetmoduleName()
{
    moduleNameIsSet_ = false;
}

std::string WorkItemVo::getModulePath() const
{
    return modulePath_;
}

void WorkItemVo::setModulePath(const std::string& value)
{
    modulePath_ = value;
    modulePathIsSet_ = true;
}

bool WorkItemVo::modulePathIsSet() const
{
    return modulePathIsSet_;
}

void WorkItemVo::unsetmodulePath()
{
    modulePathIsSet_ = false;
}

std::string WorkItemVo::getModulePathName() const
{
    return modulePathName_;
}

void WorkItemVo::setModulePathName(const std::string& value)
{
    modulePathName_ = value;
    modulePathNameIsSet_ = true;
}

bool WorkItemVo::modulePathNameIsSet() const
{
    return modulePathNameIsSet_;
}

void WorkItemVo::unsetmodulePathName()
{
    modulePathNameIsSet_ = false;
}

std::string WorkItemVo::getOwnerName() const
{
    return ownerName_;
}

void WorkItemVo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool WorkItemVo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void WorkItemVo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

bool WorkItemVo::isHaveChildDynamic() const
{
    return haveChildDynamic_;
}

void WorkItemVo::setHaveChildDynamic(bool value)
{
    haveChildDynamic_ = value;
    haveChildDynamicIsSet_ = true;
}

bool WorkItemVo::haveChildDynamicIsSet() const
{
    return haveChildDynamicIsSet_;
}

void WorkItemVo::unsethaveChildDynamic()
{
    haveChildDynamicIsSet_ = false;
}

bool WorkItemVo::isHasChild() const
{
    return hasChild_;
}

void WorkItemVo::setHasChild(bool value)
{
    hasChild_ = value;
    hasChildIsSet_ = true;
}

bool WorkItemVo::hasChildIsSet() const
{
    return hasChildIsSet_;
}

void WorkItemVo::unsethasChild()
{
    hasChildIsSet_ = false;
}

int32_t WorkItemVo::getIssueDynamicCount() const
{
    return issueDynamicCount_;
}

void WorkItemVo::setIssueDynamicCount(int32_t value)
{
    issueDynamicCount_ = value;
    issueDynamicCountIsSet_ = true;
}

bool WorkItemVo::issueDynamicCountIsSet() const
{
    return issueDynamicCountIsSet_;
}

void WorkItemVo::unsetissueDynamicCount()
{
    issueDynamicCountIsSet_ = false;
}

int32_t WorkItemVo::getCaseCount() const
{
    return caseCount_;
}

void WorkItemVo::setCaseCount(int32_t value)
{
    caseCount_ = value;
    caseCountIsSet_ = true;
}

bool WorkItemVo::caseCountIsSet() const
{
    return caseCountIsSet_;
}

void WorkItemVo::unsetcaseCount()
{
    caseCountIsSet_ = false;
}

std::string WorkItemVo::getSequenceId() const
{
    return sequenceId_;
}

void WorkItemVo::setSequenceId(const std::string& value)
{
    sequenceId_ = value;
    sequenceIdIsSet_ = true;
}

bool WorkItemVo::sequenceIdIsSet() const
{
    return sequenceIdIsSet_;
}

void WorkItemVo::unsetsequenceId()
{
    sequenceIdIsSet_ = false;
}

std::string WorkItemVo::getPiId() const
{
    return piId_;
}

void WorkItemVo::setPiId(const std::string& value)
{
    piId_ = value;
    piIdIsSet_ = true;
}

bool WorkItemVo::piIdIsSet() const
{
    return piIdIsSet_;
}

void WorkItemVo::unsetpiId()
{
    piIdIsSet_ = false;
}

std::string WorkItemVo::getPiName() const
{
    return piName_;
}

void WorkItemVo::setPiName(const std::string& value)
{
    piName_ = value;
    piNameIsSet_ = true;
}

bool WorkItemVo::piNameIsSet() const
{
    return piNameIsSet_;
}

void WorkItemVo::unsetpiName()
{
    piNameIsSet_ = false;
}

}
}
}
}
}


