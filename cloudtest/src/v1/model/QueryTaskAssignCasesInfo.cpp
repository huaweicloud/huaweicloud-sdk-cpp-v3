

#include "huaweicloud/cloudtest/v1/model/QueryTaskAssignCasesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryTaskAssignCasesInfo::QueryTaskAssignCasesInfo()
{
    stage_ = 0;
    stageIsSet_ = false;
    ownersIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    resultsIsSet_ = false;
    statusIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    releaseDev_ = "";
    releaseDevIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    featureUri_ = "";
    featureUriIsSet_ = false;
    taskResultUri_ = "";
    taskResultUriIsSet_ = false;
    rankIdsIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    issueId_ = "";
    issueIdIsSet_ = false;
    associatedIssue_ = false;
    associatedIssueIsSet_ = false;
    selectAllPages_ = false;
    selectAllPagesIsSet_ = false;
    isAvailable_ = false;
    isAvailableIsSet_ = false;
    isScriptExist_ = false;
    isScriptExistIsSet_ = false;
}

QueryTaskAssignCasesInfo::~QueryTaskAssignCasesInfo() = default;

void QueryTaskAssignCasesInfo::validate()
{
}

web::json::value QueryTaskAssignCasesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stageIsSet_) {
        val[utility::conversions::to_string_t("stage")] = ModelBase::toJson(stage_);
    }
    if(ownersIsSet_) {
        val[utility::conversions::to_string_t("owners")] = ModelBase::toJson(owners_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(releaseDevIsSet_) {
        val[utility::conversions::to_string_t("release_dev")] = ModelBase::toJson(releaseDev_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(featureUriIsSet_) {
        val[utility::conversions::to_string_t("feature_uri")] = ModelBase::toJson(featureUri_);
    }
    if(taskResultUriIsSet_) {
        val[utility::conversions::to_string_t("task_result_uri")] = ModelBase::toJson(taskResultUri_);
    }
    if(rankIdsIsSet_) {
        val[utility::conversions::to_string_t("rank_ids")] = ModelBase::toJson(rankIds_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(issueIdIsSet_) {
        val[utility::conversions::to_string_t("issue_id")] = ModelBase::toJson(issueId_);
    }
    if(associatedIssueIsSet_) {
        val[utility::conversions::to_string_t("associated_issue")] = ModelBase::toJson(associatedIssue_);
    }
    if(selectAllPagesIsSet_) {
        val[utility::conversions::to_string_t("select_all_pages")] = ModelBase::toJson(selectAllPages_);
    }
    if(isAvailableIsSet_) {
        val[utility::conversions::to_string_t("is_available")] = ModelBase::toJson(isAvailable_);
    }
    if(isScriptExistIsSet_) {
        val[utility::conversions::to_string_t("is_script_exist")] = ModelBase::toJson(isScriptExist_);
    }

    return val;
}
bool QueryTaskAssignCasesInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("stage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owners"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owners"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwners(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("release_dev"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("release_dev"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReleaseDev(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("feature_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeatureUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_result_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResultUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("associated_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("associated_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssociatedIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("select_all_pages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("select_all_pages"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSelectAllPages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_script_exist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_script_exist"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsScriptExist(refVal);
        }
    }
    return ok;
}


int32_t QueryTaskAssignCasesInfo::getStage() const
{
    return stage_;
}

void QueryTaskAssignCasesInfo::setStage(int32_t value)
{
    stage_ = value;
    stageIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::stageIsSet() const
{
    return stageIsSet_;
}

void QueryTaskAssignCasesInfo::unsetstage()
{
    stageIsSet_ = false;
}

std::vector<std::string>& QueryTaskAssignCasesInfo::getOwners()
{
    return owners_;
}

void QueryTaskAssignCasesInfo::setOwners(const std::vector<std::string>& value)
{
    owners_ = value;
    ownersIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::ownersIsSet() const
{
    return ownersIsSet_;
}

void QueryTaskAssignCasesInfo::unsetowners()
{
    ownersIsSet_ = false;
}

int32_t QueryTaskAssignCasesInfo::getPageNo() const
{
    return pageNo_;
}

void QueryTaskAssignCasesInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void QueryTaskAssignCasesInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t QueryTaskAssignCasesInfo::getPageSize() const
{
    return pageSize_;
}

void QueryTaskAssignCasesInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryTaskAssignCasesInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::vector<std::string>& QueryTaskAssignCasesInfo::getResults()
{
    return results_;
}

void QueryTaskAssignCasesInfo::setResults(const std::vector<std::string>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::resultsIsSet() const
{
    return resultsIsSet_;
}

void QueryTaskAssignCasesInfo::unsetresults()
{
    resultsIsSet_ = false;
}

std::vector<std::string>& QueryTaskAssignCasesInfo::getStatus()
{
    return status_;
}

void QueryTaskAssignCasesInfo::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::statusIsSet() const
{
    return statusIsSet_;
}

void QueryTaskAssignCasesInfo::unsetstatus()
{
    statusIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getVersionUri() const
{
    return versionUri_;
}

void QueryTaskAssignCasesInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void QueryTaskAssignCasesInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getReleaseDev() const
{
    return releaseDev_;
}

void QueryTaskAssignCasesInfo::setReleaseDev(const std::string& value)
{
    releaseDev_ = value;
    releaseDevIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::releaseDevIsSet() const
{
    return releaseDevIsSet_;
}

void QueryTaskAssignCasesInfo::unsetreleaseDev()
{
    releaseDevIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getSortField() const
{
    return sortField_;
}

void QueryTaskAssignCasesInfo::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void QueryTaskAssignCasesInfo::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getSortType() const
{
    return sortType_;
}

void QueryTaskAssignCasesInfo::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void QueryTaskAssignCasesInfo::unsetsortType()
{
    sortTypeIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getFeatureUri() const
{
    return featureUri_;
}

void QueryTaskAssignCasesInfo::setFeatureUri(const std::string& value)
{
    featureUri_ = value;
    featureUriIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::featureUriIsSet() const
{
    return featureUriIsSet_;
}

void QueryTaskAssignCasesInfo::unsetfeatureUri()
{
    featureUriIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getTaskResultUri() const
{
    return taskResultUri_;
}

void QueryTaskAssignCasesInfo::setTaskResultUri(const std::string& value)
{
    taskResultUri_ = value;
    taskResultUriIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::taskResultUriIsSet() const
{
    return taskResultUriIsSet_;
}

void QueryTaskAssignCasesInfo::unsettaskResultUri()
{
    taskResultUriIsSet_ = false;
}

std::vector<int32_t>& QueryTaskAssignCasesInfo::getRankIds()
{
    return rankIds_;
}

void QueryTaskAssignCasesInfo::setRankIds(std::vector<int32_t> value)
{
    rankIds_ = value;
    rankIdsIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::rankIdsIsSet() const
{
    return rankIdsIsSet_;
}

void QueryTaskAssignCasesInfo::unsetrankIds()
{
    rankIdsIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getKeyWord() const
{
    return keyWord_;
}

void QueryTaskAssignCasesInfo::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void QueryTaskAssignCasesInfo::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::string QueryTaskAssignCasesInfo::getIssueId() const
{
    return issueId_;
}

void QueryTaskAssignCasesInfo::setIssueId(const std::string& value)
{
    issueId_ = value;
    issueIdIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::issueIdIsSet() const
{
    return issueIdIsSet_;
}

void QueryTaskAssignCasesInfo::unsetissueId()
{
    issueIdIsSet_ = false;
}

bool QueryTaskAssignCasesInfo::isAssociatedIssue() const
{
    return associatedIssue_;
}

void QueryTaskAssignCasesInfo::setAssociatedIssue(bool value)
{
    associatedIssue_ = value;
    associatedIssueIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::associatedIssueIsSet() const
{
    return associatedIssueIsSet_;
}

void QueryTaskAssignCasesInfo::unsetassociatedIssue()
{
    associatedIssueIsSet_ = false;
}

bool QueryTaskAssignCasesInfo::isSelectAllPages() const
{
    return selectAllPages_;
}

void QueryTaskAssignCasesInfo::setSelectAllPages(bool value)
{
    selectAllPages_ = value;
    selectAllPagesIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::selectAllPagesIsSet() const
{
    return selectAllPagesIsSet_;
}

void QueryTaskAssignCasesInfo::unsetselectAllPages()
{
    selectAllPagesIsSet_ = false;
}

bool QueryTaskAssignCasesInfo::isIsAvailable() const
{
    return isAvailable_;
}

void QueryTaskAssignCasesInfo::setIsAvailable(bool value)
{
    isAvailable_ = value;
    isAvailableIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::isAvailableIsSet() const
{
    return isAvailableIsSet_;
}

void QueryTaskAssignCasesInfo::unsetisAvailable()
{
    isAvailableIsSet_ = false;
}

bool QueryTaskAssignCasesInfo::isIsScriptExist() const
{
    return isScriptExist_;
}

void QueryTaskAssignCasesInfo::setIsScriptExist(bool value)
{
    isScriptExist_ = value;
    isScriptExistIsSet_ = true;
}

bool QueryTaskAssignCasesInfo::isScriptExistIsSet() const
{
    return isScriptExistIsSet_;
}

void QueryTaskAssignCasesInfo::unsetisScriptExist()
{
    isScriptExistIsSet_ = false;
}

}
}
}
}
}


