

#include "huaweicloud/cloudtest/v1/model/QueryTestCasesByIssueInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryTestCasesByIssueInfo::QueryTestCasesByIssueInfo()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    sortField_ = "";
    sortFieldIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    versionUri_ = "";
    versionUriIsSet_ = false;
    relateType_ = "";
    relateTypeIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    rankIdsIsSet_ = false;
    resultCodesIsSet_ = false;
}

QueryTestCasesByIssueInfo::~QueryTestCasesByIssueInfo() = default;

void QueryTestCasesByIssueInfo::validate()
{
}

web::json::value QueryTestCasesByIssueInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(sortFieldIsSet_) {
        val[utility::conversions::to_string_t("sort_field")] = ModelBase::toJson(sortField_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sort_type")] = ModelBase::toJson(sortType_);
    }
    if(versionUriIsSet_) {
        val[utility::conversions::to_string_t("version_uri")] = ModelBase::toJson(versionUri_);
    }
    if(relateTypeIsSet_) {
        val[utility::conversions::to_string_t("relate_type")] = ModelBase::toJson(relateType_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(rankIdsIsSet_) {
        val[utility::conversions::to_string_t("rank_ids")] = ModelBase::toJson(rankIds_);
    }
    if(resultCodesIsSet_) {
        val[utility::conversions::to_string_t("result_codes")] = ModelBase::toJson(resultCodes_);
    }

    return val;
}
bool QueryTestCasesByIssueInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("version_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("relate_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("relate_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRelateType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rank_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankIds(refVal);
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
    return ok;
}


int32_t QueryTestCasesByIssueInfo::getPageNo() const
{
    return pageNo_;
}

void QueryTestCasesByIssueInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void QueryTestCasesByIssueInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t QueryTestCasesByIssueInfo::getPageSize() const
{
    return pageSize_;
}

void QueryTestCasesByIssueInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryTestCasesByIssueInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

std::string QueryTestCasesByIssueInfo::getSortField() const
{
    return sortField_;
}

void QueryTestCasesByIssueInfo::setSortField(const std::string& value)
{
    sortField_ = value;
    sortFieldIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::sortFieldIsSet() const
{
    return sortFieldIsSet_;
}

void QueryTestCasesByIssueInfo::unsetsortField()
{
    sortFieldIsSet_ = false;
}

std::string QueryTestCasesByIssueInfo::getSortType() const
{
    return sortType_;
}

void QueryTestCasesByIssueInfo::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void QueryTestCasesByIssueInfo::unsetsortType()
{
    sortTypeIsSet_ = false;
}

std::string QueryTestCasesByIssueInfo::getVersionUri() const
{
    return versionUri_;
}

void QueryTestCasesByIssueInfo::setVersionUri(const std::string& value)
{
    versionUri_ = value;
    versionUriIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::versionUriIsSet() const
{
    return versionUriIsSet_;
}

void QueryTestCasesByIssueInfo::unsetversionUri()
{
    versionUriIsSet_ = false;
}

std::string QueryTestCasesByIssueInfo::getRelateType() const
{
    return relateType_;
}

void QueryTestCasesByIssueInfo::setRelateType(const std::string& value)
{
    relateType_ = value;
    relateTypeIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::relateTypeIsSet() const
{
    return relateTypeIsSet_;
}

void QueryTestCasesByIssueInfo::unsetrelateType()
{
    relateTypeIsSet_ = false;
}

std::string QueryTestCasesByIssueInfo::getKeyWord() const
{
    return keyWord_;
}

void QueryTestCasesByIssueInfo::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void QueryTestCasesByIssueInfo::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::vector<std::string>& QueryTestCasesByIssueInfo::getRankIds()
{
    return rankIds_;
}

void QueryTestCasesByIssueInfo::setRankIds(const std::vector<std::string>& value)
{
    rankIds_ = value;
    rankIdsIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::rankIdsIsSet() const
{
    return rankIdsIsSet_;
}

void QueryTestCasesByIssueInfo::unsetrankIds()
{
    rankIdsIsSet_ = false;
}

std::vector<std::string>& QueryTestCasesByIssueInfo::getResultCodes()
{
    return resultCodes_;
}

void QueryTestCasesByIssueInfo::setResultCodes(const std::vector<std::string>& value)
{
    resultCodes_ = value;
    resultCodesIsSet_ = true;
}

bool QueryTestCasesByIssueInfo::resultCodesIsSet() const
{
    return resultCodesIsSet_;
}

void QueryTestCasesByIssueInfo::unsetresultCodes()
{
    resultCodesIsSet_ = false;
}

}
}
}
}
}


