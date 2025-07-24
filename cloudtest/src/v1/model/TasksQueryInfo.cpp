

#include "huaweicloud/cloudtest/v1/model/TasksQueryInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TasksQueryInfo::TasksQueryInfo()
{
    urisIsSet_ = false;
    keyword_ = "";
    keywordIsSet_ = false;
    tagsIsSet_ = false;
    own_ = false;
    ownIsSet_ = false;
    serviceType_ = 0;
    serviceTypeIsSet_ = false;
    releaseDevListIsSet_ = false;
    resultCodesIsSet_ = false;
    statusCodesIsSet_ = false;
    ownerIdsIsSet_ = false;
    executorIdsIsSet_ = false;
    creatorIdsIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    isPollingQuery_ = false;
    isPollingQueryIsSet_ = false;
    isQueryAssociatedCaseList_ = false;
    isQueryAssociatedCaseListIsSet_ = false;
    planStartStartTimestamp_ = 0L;
    planStartStartTimestampIsSet_ = false;
    planStartEndTimestamp_ = 0L;
    planStartEndTimestampIsSet_ = false;
    planEndStartTimestamp_ = 0L;
    planEndStartTimestampIsSet_ = false;
    planEndEndTimestamp_ = 0L;
    planEndEndTimestampIsSet_ = false;
    expirationStatusListIsSet_ = false;
}

TasksQueryInfo::~TasksQueryInfo() = default;

void TasksQueryInfo::validate()
{
}

web::json::value TasksQueryInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(urisIsSet_) {
        val[utility::conversions::to_string_t("uris")] = ModelBase::toJson(uris_);
    }
    if(keywordIsSet_) {
        val[utility::conversions::to_string_t("keyword")] = ModelBase::toJson(keyword_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(ownIsSet_) {
        val[utility::conversions::to_string_t("own")] = ModelBase::toJson(own_);
    }
    if(serviceTypeIsSet_) {
        val[utility::conversions::to_string_t("service_type")] = ModelBase::toJson(serviceType_);
    }
    if(releaseDevListIsSet_) {
        val[utility::conversions::to_string_t("release_dev_list")] = ModelBase::toJson(releaseDevList_);
    }
    if(resultCodesIsSet_) {
        val[utility::conversions::to_string_t("result_codes")] = ModelBase::toJson(resultCodes_);
    }
    if(statusCodesIsSet_) {
        val[utility::conversions::to_string_t("status_codes")] = ModelBase::toJson(statusCodes_);
    }
    if(ownerIdsIsSet_) {
        val[utility::conversions::to_string_t("owner_ids")] = ModelBase::toJson(ownerIds_);
    }
    if(executorIdsIsSet_) {
        val[utility::conversions::to_string_t("executor_ids")] = ModelBase::toJson(executorIds_);
    }
    if(creatorIdsIsSet_) {
        val[utility::conversions::to_string_t("creator_ids")] = ModelBase::toJson(creatorIds_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(isPollingQueryIsSet_) {
        val[utility::conversions::to_string_t("is_polling_query")] = ModelBase::toJson(isPollingQuery_);
    }
    if(isQueryAssociatedCaseListIsSet_) {
        val[utility::conversions::to_string_t("is_query_associated_case_list")] = ModelBase::toJson(isQueryAssociatedCaseList_);
    }
    if(planStartStartTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_start_start_timestamp")] = ModelBase::toJson(planStartStartTimestamp_);
    }
    if(planStartEndTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_start_end_timestamp")] = ModelBase::toJson(planStartEndTimestamp_);
    }
    if(planEndStartTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_end_start_timestamp")] = ModelBase::toJson(planEndStartTimestamp_);
    }
    if(planEndEndTimestampIsSet_) {
        val[utility::conversions::to_string_t("plan_end_end_timestamp")] = ModelBase::toJson(planEndEndTimestamp_);
    }
    if(expirationStatusListIsSet_) {
        val[utility::conversions::to_string_t("expiration_status_list")] = ModelBase::toJson(expirationStatusList_);
    }

    return val;
}
bool TasksQueryInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keyword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keyword"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("own"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("own"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDevList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status_codes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status_codes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatusCodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerIds(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("creator_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort_field"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortField(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_no"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_no"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_polling_query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_polling_query"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPollingQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_query_associated_case_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_query_associated_case_list"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsQueryAssociatedCaseList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_start_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_start_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_start_end_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_start_end_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanStartEndTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_start_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_start_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_end_end_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_end_end_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanEndEndTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiration_status_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiration_status_list"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpirationStatusList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& TasksQueryInfo::getUris()
{
    return uris_;
}

void TasksQueryInfo::setUris(const std::vector<std::string>& value)
{
    uris_ = value;
    urisIsSet_ = true;
}

bool TasksQueryInfo::urisIsSet() const
{
    return urisIsSet_;
}

void TasksQueryInfo::unseturis()
{
    urisIsSet_ = false;
}

std::string TasksQueryInfo::getKeyword() const
{
    return keyword_;
}

void TasksQueryInfo::setKeyword(const std::string& value)
{
    keyword_ = value;
    keywordIsSet_ = true;
}

bool TasksQueryInfo::keywordIsSet() const
{
    return keywordIsSet_;
}

void TasksQueryInfo::unsetkeyword()
{
    keywordIsSet_ = false;
}

std::vector<std::string>& TasksQueryInfo::getTags()
{
    return tags_;
}

void TasksQueryInfo::setTags(const std::vector<std::string>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool TasksQueryInfo::tagsIsSet() const
{
    return tagsIsSet_;
}

void TasksQueryInfo::unsettags()
{
    tagsIsSet_ = false;
}

bool TasksQueryInfo::isOwn() const
{
    return own_;
}

void TasksQueryInfo::setOwn(bool value)
{
    own_ = value;
    ownIsSet_ = true;
}

bool TasksQueryInfo::ownIsSet() const
{
    return ownIsSet_;
}

void TasksQueryInfo::unsetown()
{
    ownIsSet_ = false;
}

int32_t TasksQueryInfo::getServiceType() const
{
    return serviceType_;
}

void TasksQueryInfo::setServiceType(int32_t value)
{
    serviceType_ = value;
    serviceTypeIsSet_ = true;
}

bool TasksQueryInfo::serviceTypeIsSet() const
{
    return serviceTypeIsSet_;
}

void TasksQueryInfo::unsetserviceType()
{
    serviceTypeIsSet_ = false;
}

std::vector<std::string>& TasksQueryInfo::getReleaseDevList()
{
    return releaseDevList_;
}

void TasksQueryInfo::setReleaseDevList(const std::vector<std::string>& value)
{
    releaseDevList_ = value;
    releaseDevListIsSet_ = true;
}

bool TasksQueryInfo::releaseDevListIsSet() const
{
    return releaseDevListIsSet_;
}

void TasksQueryInfo::unsetreleaseDevList()
{
    releaseDevListIsSet_ = false;
}

std::vector<std::string>& TasksQueryInfo::getResultCodes()
{
    return resultCodes_;
}

void TasksQueryInfo::setResultCodes(const std::vector<std::string>& value)
{
    resultCodes_ = value;
    resultCodesIsSet_ = true;
}

bool TasksQueryInfo::resultCodesIsSet() const
{
    return resultCodesIsSet_;
}

void TasksQueryInfo::unsetresultCodes()
{
    resultCodesIsSet_ = false;
}

std::vector<std::string>& TasksQueryInfo::getStatusCodes()
{
    return statusCodes_;
}

void TasksQueryInfo::setStatusCodes(const std::vector<std::string>& value)
{
    statusCodes_ = value;
    statusCodesIsSet_ = true;
}

bool TasksQueryInfo::statusCodesIsSet() const
{
    return statusCodesIsSet_;
}

void TasksQueryInfo::unsetstatusCodes()
{
    statusCodesIsSet_ = false;
}

std::vector<std::string>& TasksQueryInfo::getOwnerIds()
{
    return ownerIds_;
}

void TasksQueryInfo::setOwnerIds(const std::vector<std::string>& value)
{
    ownerIds_ = value;
    ownerIdsIsSet_ = true;
}

bool TasksQueryInfo::ownerIdsIsSet() const
{
    return ownerIdsIsSet_;
}

void TasksQueryInfo::unsetownerIds()
{
    ownerIdsIsSet_ = false;
}

std::vector<std::string>& TasksQueryInfo::getExecutorIds()
{
    return executorIds_;
}

void TasksQueryInfo::setExecutorIds(const std::vector<std::string>& value)
{
    executorIds_ = value;
    executorIdsIsSet_ = true;
}

bool TasksQueryInfo::executorIdsIsSet() const
{
    return executorIdsIsSet_;
}

void TasksQueryInfo::unsetexecutorIds()
{
    executorIdsIsSet_ = false;
}

std::vector<std::string>& TasksQueryInfo::getCreatorIds()
{
    return creatorIds_;
}

void TasksQueryInfo::setCreatorIds(const std::vector<std::string>& value)
{
    creatorIds_ = value;
    creatorIdsIsSet_ = true;
}

bool TasksQueryInfo::creatorIdsIsSet() const
{
    return creatorIdsIsSet_;
}

void TasksQueryInfo::unsetcreatorIds()
{
    creatorIdsIsSet_ = false;
}

std::string TasksQueryInfo::getSortField() const
{
    return sortField_;
}

void TasksQueryInfo::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool TasksQueryInfo::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void TasksQueryInfo::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string TasksQueryInfo::getSortType() const
{
    return sortType_;
}

void TasksQueryInfo::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool TasksQueryInfo::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void TasksQueryInfo::unsetsortType()
{
    sortTypeIsSet_ = false;
}

int32_t TasksQueryInfo::getPageNo() const
{
    return pageNo_;
}

void TasksQueryInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool TasksQueryInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void TasksQueryInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t TasksQueryInfo::getPageSize() const
{
    return pageSize_;
}

void TasksQueryInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool TasksQueryInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void TasksQueryInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

bool TasksQueryInfo::isIsPollingQuery() const
{
    return isPollingQuery_;
}

void TasksQueryInfo::setIsPollingQuery(bool value)
{
    isPollingQuery_ = value;
    isPollingQueryIsSet_ = true;
}

bool TasksQueryInfo::isPollingQueryIsSet() const
{
    return isPollingQueryIsSet_;
}

void TasksQueryInfo::unsetisPollingQuery()
{
    isPollingQueryIsSet_ = false;
}

bool TasksQueryInfo::isIsQueryAssociatedCaseList() const
{
    return isQueryAssociatedCaseList_;
}

void TasksQueryInfo::setIsQueryAssociatedCaseList(bool value)
{
    isQueryAssociatedCaseList_ = value;
    isQueryAssociatedCaseListIsSet_ = true;
}

bool TasksQueryInfo::isQueryAssociatedCaseListIsSet() const
{
    return isQueryAssociatedCaseListIsSet_;
}

void TasksQueryInfo::unsetisQueryAssociatedCaseList()
{
    isQueryAssociatedCaseListIsSet_ = false;
}

int64_t TasksQueryInfo::getPlanStartStartTimestamp() const
{
    return planStartStartTimestamp_;
}

void TasksQueryInfo::setPlanStartStartTimestamp(int64_t value)
{
    planStartStartTimestamp_ = value;
    planStartStartTimestampIsSet_ = true;
}

bool TasksQueryInfo::planStartStartTimestampIsSet() const
{
    return planStartStartTimestampIsSet_;
}

void TasksQueryInfo::unsetplanStartStartTimestamp()
{
    planStartStartTimestampIsSet_ = false;
}

int64_t TasksQueryInfo::getPlanStartEndTimestamp() const
{
    return planStartEndTimestamp_;
}

void TasksQueryInfo::setPlanStartEndTimestamp(int64_t value)
{
    planStartEndTimestamp_ = value;
    planStartEndTimestampIsSet_ = true;
}

bool TasksQueryInfo::planStartEndTimestampIsSet() const
{
    return planStartEndTimestampIsSet_;
}

void TasksQueryInfo::unsetplanStartEndTimestamp()
{
    planStartEndTimestampIsSet_ = false;
}

int64_t TasksQueryInfo::getPlanEndStartTimestamp() const
{
    return planEndStartTimestamp_;
}

void TasksQueryInfo::setPlanEndStartTimestamp(int64_t value)
{
    planEndStartTimestamp_ = value;
    planEndStartTimestampIsSet_ = true;
}

bool TasksQueryInfo::planEndStartTimestampIsSet() const
{
    return planEndStartTimestampIsSet_;
}

void TasksQueryInfo::unsetplanEndStartTimestamp()
{
    planEndStartTimestampIsSet_ = false;
}

int64_t TasksQueryInfo::getPlanEndEndTimestamp() const
{
    return planEndEndTimestamp_;
}

void TasksQueryInfo::setPlanEndEndTimestamp(int64_t value)
{
    planEndEndTimestamp_ = value;
    planEndEndTimestampIsSet_ = true;
}

bool TasksQueryInfo::planEndEndTimestampIsSet() const
{
    return planEndEndTimestampIsSet_;
}

void TasksQueryInfo::unsetplanEndEndTimestamp()
{
    planEndEndTimestampIsSet_ = false;
}

std::vector<int32_t>& TasksQueryInfo::getExpirationStatusList()
{
    return expirationStatusList_;
}

void TasksQueryInfo::setExpirationStatusList(std::vector<int32_t> value)
{
    expirationStatusList_ = value;
    expirationStatusListIsSet_ = true;
}

bool TasksQueryInfo::expirationStatusListIsSet() const
{
    return expirationStatusListIsSet_;
}

void TasksQueryInfo::unsetexpirationStatusList()
{
    expirationStatusListIsSet_ = false;
}

}
}
}
}
}


