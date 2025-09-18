

#include "huaweicloud/projectman/v4/model/ListIssueRequestV4.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListIssueRequestV4::ListIssueRequestV4()
{
    assignedIdsIsSet_ = false;
    creatorIdsIsSet_ = false;
    developerIdsIsSet_ = false;
    domainIdsIsSet_ = false;
    doneRatiosIsSet_ = false;
    iterationIdsIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    moduleIdsIsSet_ = false;
    priorityIdsIsSet_ = false;
    queryType_ = "";
    queryTypeIsSet_ = false;
    severityIdsIsSet_ = false;
    statusIdsIsSet_ = false;
    storyPointIdsIsSet_ = false;
    trackerIdsIsSet_ = false;
    includeDeleted_ = false;
    includeDeletedIsSet_ = false;
    createdTimeInterval_ = "";
    createdTimeIntervalIsSet_ = false;
    updatedTimeInterval_ = "";
    updatedTimeIntervalIsSet_ = false;
    closedTimeInterval_ = "";
    closedTimeIntervalIsSet_ = false;
    customFieldsIsSet_ = false;
}

ListIssueRequestV4::~ListIssueRequestV4() = default;

void ListIssueRequestV4::validate()
{
}

web::json::value ListIssueRequestV4::toJson() const
{
    web::json::value val = web::json::value::object();

    if(assignedIdsIsSet_) {
        val[utility::conversions::to_string_t("assigned_ids")] = ModelBase::toJson(assignedIds_);
    }
    if(creatorIdsIsSet_) {
        val[utility::conversions::to_string_t("creator_ids")] = ModelBase::toJson(creatorIds_);
    }
    if(developerIdsIsSet_) {
        val[utility::conversions::to_string_t("developer_ids")] = ModelBase::toJson(developerIds_);
    }
    if(domainIdsIsSet_) {
        val[utility::conversions::to_string_t("domain_ids")] = ModelBase::toJson(domainIds_);
    }
    if(doneRatiosIsSet_) {
        val[utility::conversions::to_string_t("done_ratios")] = ModelBase::toJson(doneRatios_);
    }
    if(iterationIdsIsSet_) {
        val[utility::conversions::to_string_t("iteration_ids")] = ModelBase::toJson(iterationIds_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(moduleIdsIsSet_) {
        val[utility::conversions::to_string_t("module_ids")] = ModelBase::toJson(moduleIds_);
    }
    if(priorityIdsIsSet_) {
        val[utility::conversions::to_string_t("priority_ids")] = ModelBase::toJson(priorityIds_);
    }
    if(queryTypeIsSet_) {
        val[utility::conversions::to_string_t("query_type")] = ModelBase::toJson(queryType_);
    }
    if(severityIdsIsSet_) {
        val[utility::conversions::to_string_t("severity_ids")] = ModelBase::toJson(severityIds_);
    }
    if(statusIdsIsSet_) {
        val[utility::conversions::to_string_t("status_ids")] = ModelBase::toJson(statusIds_);
    }
    if(storyPointIdsIsSet_) {
        val[utility::conversions::to_string_t("story_point_ids")] = ModelBase::toJson(storyPointIds_);
    }
    if(trackerIdsIsSet_) {
        val[utility::conversions::to_string_t("tracker_ids")] = ModelBase::toJson(trackerIds_);
    }
    if(includeDeletedIsSet_) {
        val[utility::conversions::to_string_t("include_deleted")] = ModelBase::toJson(includeDeleted_);
    }
    if(createdTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("created_time_interval")] = ModelBase::toJson(createdTimeInterval_);
    }
    if(updatedTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("updated_time_interval")] = ModelBase::toJson(updatedTimeInterval_);
    }
    if(closedTimeIntervalIsSet_) {
        val[utility::conversions::to_string_t("closed_time_interval")] = ModelBase::toJson(closedTimeInterval_);
    }
    if(customFieldsIsSet_) {
        val[utility::conversions::to_string_t("custom_fields")] = ModelBase::toJson(customFields_);
    }

    return val;
}
bool ListIssueRequestV4::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("assigned_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assigned_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignedIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("developer_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("developer_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeveloperIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("done_ratios"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("done_ratios"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDoneRatios(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iteration_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iteration_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIterationIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("module_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriorityIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverityIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("story_point_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("story_point_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStoryPointIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tracker_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tracker_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrackerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTimeInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTimeInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_time_interval"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedTimeInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_fields"));
        if(!fieldValue.is_null())
        {
            std::vector<ListIssueRequestV4_custom_fields> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomFields(refVal);
        }
    }
    return ok;
}


std::vector<int32_t>& ListIssueRequestV4::getAssignedIds()
{
    return assignedIds_;
}

void ListIssueRequestV4::setAssignedIds(std::vector<int32_t> value)
{
    assignedIds_ = value;
    assignedIdsIsSet_ = true;
}

bool ListIssueRequestV4::assignedIdsIsSet() const
{
    return assignedIdsIsSet_;
}

void ListIssueRequestV4::unsetassignedIds()
{
    assignedIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getCreatorIds()
{
    return creatorIds_;
}

void ListIssueRequestV4::setCreatorIds(std::vector<int32_t> value)
{
    creatorIds_ = value;
    creatorIdsIsSet_ = true;
}

bool ListIssueRequestV4::creatorIdsIsSet() const
{
    return creatorIdsIsSet_;
}

void ListIssueRequestV4::unsetcreatorIds()
{
    creatorIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getDeveloperIds()
{
    return developerIds_;
}

void ListIssueRequestV4::setDeveloperIds(std::vector<int32_t> value)
{
    developerIds_ = value;
    developerIdsIsSet_ = true;
}

bool ListIssueRequestV4::developerIdsIsSet() const
{
    return developerIdsIsSet_;
}

void ListIssueRequestV4::unsetdeveloperIds()
{
    developerIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getDomainIds()
{
    return domainIds_;
}

void ListIssueRequestV4::setDomainIds(std::vector<int32_t> value)
{
    domainIds_ = value;
    domainIdsIsSet_ = true;
}

bool ListIssueRequestV4::domainIdsIsSet() const
{
    return domainIdsIsSet_;
}

void ListIssueRequestV4::unsetdomainIds()
{
    domainIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getDoneRatios()
{
    return doneRatios_;
}

void ListIssueRequestV4::setDoneRatios(std::vector<int32_t> value)
{
    doneRatios_ = value;
    doneRatiosIsSet_ = true;
}

bool ListIssueRequestV4::doneRatiosIsSet() const
{
    return doneRatiosIsSet_;
}

void ListIssueRequestV4::unsetdoneRatios()
{
    doneRatiosIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getIterationIds()
{
    return iterationIds_;
}

void ListIssueRequestV4::setIterationIds(std::vector<int32_t> value)
{
    iterationIds_ = value;
    iterationIdsIsSet_ = true;
}

bool ListIssueRequestV4::iterationIdsIsSet() const
{
    return iterationIdsIsSet_;
}

void ListIssueRequestV4::unsetiterationIds()
{
    iterationIdsIsSet_ = false;
}

int32_t ListIssueRequestV4::getLimit() const
{
    return limit_;
}

void ListIssueRequestV4::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIssueRequestV4::limitIsSet() const
{
    return limitIsSet_;
}

void ListIssueRequestV4::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListIssueRequestV4::getOffset() const
{
    return offset_;
}

void ListIssueRequestV4::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIssueRequestV4::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIssueRequestV4::unsetoffset()
{
    offsetIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getModuleIds()
{
    return moduleIds_;
}

void ListIssueRequestV4::setModuleIds(std::vector<int32_t> value)
{
    moduleIds_ = value;
    moduleIdsIsSet_ = true;
}

bool ListIssueRequestV4::moduleIdsIsSet() const
{
    return moduleIdsIsSet_;
}

void ListIssueRequestV4::unsetmoduleIds()
{
    moduleIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getPriorityIds()
{
    return priorityIds_;
}

void ListIssueRequestV4::setPriorityIds(std::vector<int32_t> value)
{
    priorityIds_ = value;
    priorityIdsIsSet_ = true;
}

bool ListIssueRequestV4::priorityIdsIsSet() const
{
    return priorityIdsIsSet_;
}

void ListIssueRequestV4::unsetpriorityIds()
{
    priorityIdsIsSet_ = false;
}

std::string ListIssueRequestV4::getQueryType() const
{
    return queryType_;
}

void ListIssueRequestV4::setQueryType(const std::string& value)
{
    queryType_ = value;
    queryTypeIsSet_ = true;
}

bool ListIssueRequestV4::queryTypeIsSet() const
{
    return queryTypeIsSet_;
}

void ListIssueRequestV4::unsetqueryType()
{
    queryTypeIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getSeverityIds()
{
    return severityIds_;
}

void ListIssueRequestV4::setSeverityIds(std::vector<int32_t> value)
{
    severityIds_ = value;
    severityIdsIsSet_ = true;
}

bool ListIssueRequestV4::severityIdsIsSet() const
{
    return severityIdsIsSet_;
}

void ListIssueRequestV4::unsetseverityIds()
{
    severityIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getStatusIds()
{
    return statusIds_;
}

void ListIssueRequestV4::setStatusIds(std::vector<int32_t> value)
{
    statusIds_ = value;
    statusIdsIsSet_ = true;
}

bool ListIssueRequestV4::statusIdsIsSet() const
{
    return statusIdsIsSet_;
}

void ListIssueRequestV4::unsetstatusIds()
{
    statusIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getStoryPointIds()
{
    return storyPointIds_;
}

void ListIssueRequestV4::setStoryPointIds(std::vector<int32_t> value)
{
    storyPointIds_ = value;
    storyPointIdsIsSet_ = true;
}

bool ListIssueRequestV4::storyPointIdsIsSet() const
{
    return storyPointIdsIsSet_;
}

void ListIssueRequestV4::unsetstoryPointIds()
{
    storyPointIdsIsSet_ = false;
}

std::vector<int32_t>& ListIssueRequestV4::getTrackerIds()
{
    return trackerIds_;
}

void ListIssueRequestV4::setTrackerIds(std::vector<int32_t> value)
{
    trackerIds_ = value;
    trackerIdsIsSet_ = true;
}

bool ListIssueRequestV4::trackerIdsIsSet() const
{
    return trackerIdsIsSet_;
}

void ListIssueRequestV4::unsettrackerIds()
{
    trackerIdsIsSet_ = false;
}

bool ListIssueRequestV4::isIncludeDeleted() const
{
    return includeDeleted_;
}

void ListIssueRequestV4::setIncludeDeleted(bool value)
{
    includeDeleted_ = value;
    includeDeletedIsSet_ = true;
}

bool ListIssueRequestV4::includeDeletedIsSet() const
{
    return includeDeletedIsSet_;
}

void ListIssueRequestV4::unsetincludeDeleted()
{
    includeDeletedIsSet_ = false;
}

std::string ListIssueRequestV4::getCreatedTimeInterval() const
{
    return createdTimeInterval_;
}

void ListIssueRequestV4::setCreatedTimeInterval(const std::string& value)
{
    createdTimeInterval_ = value;
    createdTimeIntervalIsSet_ = true;
}

bool ListIssueRequestV4::createdTimeIntervalIsSet() const
{
    return createdTimeIntervalIsSet_;
}

void ListIssueRequestV4::unsetcreatedTimeInterval()
{
    createdTimeIntervalIsSet_ = false;
}

std::string ListIssueRequestV4::getUpdatedTimeInterval() const
{
    return updatedTimeInterval_;
}

void ListIssueRequestV4::setUpdatedTimeInterval(const std::string& value)
{
    updatedTimeInterval_ = value;
    updatedTimeIntervalIsSet_ = true;
}

bool ListIssueRequestV4::updatedTimeIntervalIsSet() const
{
    return updatedTimeIntervalIsSet_;
}

void ListIssueRequestV4::unsetupdatedTimeInterval()
{
    updatedTimeIntervalIsSet_ = false;
}

std::string ListIssueRequestV4::getClosedTimeInterval() const
{
    return closedTimeInterval_;
}

void ListIssueRequestV4::setClosedTimeInterval(const std::string& value)
{
    closedTimeInterval_ = value;
    closedTimeIntervalIsSet_ = true;
}

bool ListIssueRequestV4::closedTimeIntervalIsSet() const
{
    return closedTimeIntervalIsSet_;
}

void ListIssueRequestV4::unsetclosedTimeInterval()
{
    closedTimeIntervalIsSet_ = false;
}

std::vector<ListIssueRequestV4_custom_fields>& ListIssueRequestV4::getCustomFields()
{
    return customFields_;
}

void ListIssueRequestV4::setCustomFields(const std::vector<ListIssueRequestV4_custom_fields>& value)
{
    customFields_ = value;
    customFieldsIsSet_ = true;
}

bool ListIssueRequestV4::customFieldsIsSet() const
{
    return customFieldsIsSet_;
}

void ListIssueRequestV4::unsetcustomFields()
{
    customFieldsIsSet_ = false;
}

}
}
}
}
}


