

#include "huaweicloud/cloudtest/v1/model/QueryIssueTreeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryIssueTreeInfo::QueryIssueTreeInfo()
{
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    serviceTypesIsSet_ = false;
    parentId_ = "";
    parentIdIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    filterIsSet_ = false;
    trackerId_ = "";
    trackerIdIsSet_ = false;
    moduleId_ = "";
    moduleIdIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    includeSubIssue_ = false;
    includeSubIssueIsSet_ = false;
}

QueryIssueTreeInfo::~QueryIssueTreeInfo() = default;

void QueryIssueTreeInfo::validate()
{
}

web::json::value QueryIssueTreeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(serviceTypesIsSet_) {
        val[utility::conversions::to_string_t("service_types")] = ModelBase::toJson(serviceTypes_);
    }
    if(parentIdIsSet_) {
        val[utility::conversions::to_string_t("parent_id")] = ModelBase::toJson(parentId_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(filterIsSet_) {
        val[utility::conversions::to_string_t("filter")] = ModelBase::toJson(filter_);
    }
    if(trackerIdIsSet_) {
        val[utility::conversions::to_string_t("tracker_id")] = ModelBase::toJson(trackerId_);
    }
    if(moduleIdIsSet_) {
        val[utility::conversions::to_string_t("module_id")] = ModelBase::toJson(moduleId_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(includeSubIssueIsSet_) {
        val[utility::conversions::to_string_t("include_sub_issue")] = ModelBase::toJson(includeSubIssue_);
    }

    return val;
}
bool QueryIssueTreeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_types"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("filter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("filter"));
        if(!fieldValue.is_null())
        {
            IssueListFilterInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFilter(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("module_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("module_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("include_sub_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("include_sub_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludeSubIssue(refVal);
        }
    }
    return ok;
}


int32_t QueryIssueTreeInfo::getServiceType() const
{
    return serviceType_;
}

void QueryIssueTreeInfo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool QueryIssueTreeInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void QueryIssueTreeInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::vector<int32_t>& QueryIssueTreeInfo::getServiceTypes()
{
    return serviceTypes_;
}

void QueryIssueTreeInfo::setServiceTypes(std::vector<int32_t> value)
{
    serviceTypes_ = value;
    serviceTypesIsSet_ = true;
}

bool QueryIssueTreeInfo::serviceTypesIsSet() const
{
    return serviceTypesIsSet_;
}

void QueryIssueTreeInfo::unsetserviceTypes()
{
    serviceTypesIsSet_ = false;
}

std::string QueryIssueTreeInfo::getParentId() const
{
    return parentId_;
}

void QueryIssueTreeInfo::setParentId(const std::string& value)
{
    parentId_ = value;
    parentIdIsSet_ = true;
}

bool QueryIssueTreeInfo::parentIdIsSet() const
{
    return parentIdIsSet_;
}

void QueryIssueTreeInfo::unsetparentId()
{
    parentIdIsSet_ = false;
}

int32_t QueryIssueTreeInfo::getPageNumber() const
{
    return pageNumber_;
}

void QueryIssueTreeInfo::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool QueryIssueTreeInfo::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void QueryIssueTreeInfo::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

int32_t QueryIssueTreeInfo::getPageSize() const
{
    return pageSize_;
}

void QueryIssueTreeInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryIssueTreeInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryIssueTreeInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

IssueListFilterInfo QueryIssueTreeInfo::getFilter() const
{
    return filter_;
}

void QueryIssueTreeInfo::setFilter(const IssueListFilterInfo& value)
{
    filter_ = value;
    filterIsSet_ = true;
}

bool QueryIssueTreeInfo::filterIsSet() const
{
    return filterIsSet_;
}

void QueryIssueTreeInfo::unsetfilter()
{
    filterIsSet_ = false;
}

std::string QueryIssueTreeInfo::getTrackerId() const
{
    return trackerId_;
}

void QueryIssueTreeInfo::setTrackerId(const std::string& value)
{
    trackerId_ = value;
    trackerIdIsSet_ = true;
}

bool QueryIssueTreeInfo::trackerIdIsSet() const
{
    return trackerIdIsSet_;
}

void QueryIssueTreeInfo::unsettrackerId()
{
    trackerIdIsSet_ = false;
}

std::string QueryIssueTreeInfo::getModuleId() const
{
    return moduleId_;
}

void QueryIssueTreeInfo::setModuleId(const std::string& value)
{
    moduleId_ = value;
    moduleIdIsSet_ = true;
}

bool QueryIssueTreeInfo::moduleIdIsSet() const
{
    return moduleIdIsSet_;
}

void QueryIssueTreeInfo::unsetmoduleId()
{
    moduleIdIsSet_ = false;
}

std::string QueryIssueTreeInfo::getTaskUri() const
{
    return taskUri_;
}

void QueryIssueTreeInfo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool QueryIssueTreeInfo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void QueryIssueTreeInfo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

bool QueryIssueTreeInfo::isIncludeSubIssue() const
{
    return includeSubIssue_;
}

void QueryIssueTreeInfo::setIncludeSubIssue(bool value)
{
    includeSubIssue_ = value;
    includeSubIssueIsSet_ = true;
}

bool QueryIssueTreeInfo::includeSubIssueIsSet() const
{
    return includeSubIssueIsSet_;
}

void QueryIssueTreeInfo::unsetincludeSubIssue()
{
    includeSubIssueIsSet_ = false;
}

}
}
}
}
}


