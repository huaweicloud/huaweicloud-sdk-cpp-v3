

#include "huaweicloud/cloudtest/v1/model/QueryTestItemTreeInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryTestItemTreeInfo::QueryTestItemTreeInfo()
{
    owner_ = "";
    ownerIsSet_ = false;
    stage_ = "";
    stageIsSet_ = false;
    activity_ = "";
    activityIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    serviceType_ = "";
    serviceTypeIsSet_ = false;
    containTotal_ = false;
    containTotalIsSet_ = false;
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

QueryTestItemTreeInfo::~QueryTestItemTreeInfo() = default;

void QueryTestItemTreeInfo::validate()
{
}

web::json::value QueryTestItemTreeInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(activityIsSet_) {
        val[utility::conversions::to_string_t("activity")] = ModelBase::toJson(activity_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(containTotalIsSet_) {
        val[utility::conversions::to_string_t("contain_total")] = ModelBase::toJson(containTotal_);
    }
    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool QueryTestItemTreeInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("activity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("activity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActivity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("contain_total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("contain_total"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainTotal(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sort_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
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
    return ok;
}


std::string QueryTestItemTreeInfo::getOwner() const
{
    return owner_;
}

void QueryTestItemTreeInfo::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool QueryTestItemTreeInfo::ownerIsSet() const
{
    return ownerIsSet_;
}

void QueryTestItemTreeInfo::unsetowner()
{
    ownerIsSet_ = false;
}

std::string QueryTestItemTreeInfo::getStage() const
{
    return stage_;
}

void QueryTestItemTreeInfo::setStage(const std::string& value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool QueryTestItemTreeInfo::stageIsSet() const
{
    return stageIsSet_;
}

void QueryTestItemTreeInfo::unsetstage()
{
    stageIsSet_ = false;
}

std::string QueryTestItemTreeInfo::getActivity() const
{
    return activity_;
}

void QueryTestItemTreeInfo::setActivity(const std::string& value)
{
    activity_ = value;
    activityIsSet_ = true;
}

bool QueryTestItemTreeInfo::activityIsSet() const
{
    return activityIsSet_;
}

void QueryTestItemTreeInfo::unsetactivity()
{
    activityIsSet_ = false;
}

std::string QueryTestItemTreeInfo::getVersionUri() const
{
    return versionUri_;
}

void QueryTestItemTreeInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool QueryTestItemTreeInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void QueryTestItemTreeInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string QueryTestItemTreeInfo::getTaskUri() const
{
    return taskUri_;
}

void QueryTestItemTreeInfo::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool QueryTestItemTreeInfo::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void QueryTestItemTreeInfo::unsettaskUri()
{
    taskUriIsSet_ = false;
}

std::string QueryTestItemTreeInfo::getServiceType() const
{
    return serviceType_;
}

void QueryTestItemTreeInfo::setServiceType(const std::string& value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool QueryTestItemTreeInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void QueryTestItemTreeInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

bool QueryTestItemTreeInfo::isContainTotal() const
{
    return containTotal_;
}

void QueryTestItemTreeInfo::setContainTotal(bool value)
{
    containTotal_ = value;
    containTotalIsSet_ = true;
}

bool QueryTestItemTreeInfo::containTotalIsSet() const
{
    return containTotalIsSet_;
}

void QueryTestItemTreeInfo::unsetcontainTotal()
{
    containTotalIsSet_ = false;
}

std::string QueryTestItemTreeInfo::getProjectUuid() const
{
    return projectUuid_;
}

void QueryTestItemTreeInfo::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool QueryTestItemTreeInfo::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void QueryTestItemTreeInfo::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string QueryTestItemTreeInfo::getSortType() const
{
    return sortType_;
}

void QueryTestItemTreeInfo::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool QueryTestItemTreeInfo::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void QueryTestItemTreeInfo::unsetsortType()
{
    sortTypeIsSet_ = false;
}

int32_t QueryTestItemTreeInfo::getPageNumber() const
{
    return pageNumber_;
}

void QueryTestItemTreeInfo::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool QueryTestItemTreeInfo::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void QueryTestItemTreeInfo::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

int32_t QueryTestItemTreeInfo::getPageSize() const
{
    return pageSize_;
}

void QueryTestItemTreeInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryTestItemTreeInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryTestItemTreeInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


