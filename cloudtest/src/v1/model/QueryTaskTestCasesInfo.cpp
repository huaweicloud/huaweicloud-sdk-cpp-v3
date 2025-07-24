

#include "huaweicloud/cloudtest/v1/model/QueryTaskTestCasesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryTaskTestCasesInfo::QueryTaskTestCasesInfo()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    startIndex_ = 0;
    startIndexIsSet_ = false;
    endIndex_ = 0;
    endIndexIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    testCaseUrisIsSet_ = false;
    iteratorUri_ = "";
    iteratorUriIsSet_ = false;
}

QueryTaskTestCasesInfo::~QueryTaskTestCasesInfo() = default;

void QueryTaskTestCasesInfo::validate()
{
}

web::json::value QueryTaskTestCasesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(startIndexIsSet_) {
        val[utility::conversions::to_string_t("start_index")] = ModelBase::toJson(startIndex_);
    }
    if(endIndexIsSet_) {
        val[utility::conversions::to_string_t("end_index")] = ModelBase::toJson(endIndex_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(testCaseUrisIsSet_) {
        val[utility::conversions::to_string_t("test_case_uris")] = ModelBase::toJson(testCaseUris_);
    }
    if(iteratorUriIsSet_) {
        val[utility::conversions::to_string_t("iterator_uri")] = ModelBase::toJson(iteratorUri_);
    }

    return val;
}
bool QueryTaskTestCasesInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("start_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_index"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndIndex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("test_case_uris"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_case_uris"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCaseUris(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iterator_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iterator_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIteratorUri(refVal);
        }
    }
    return ok;
}


int32_t QueryTaskTestCasesInfo::getPageNo() const
{
    return pageNo_;
}

void QueryTaskTestCasesInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool QueryTaskTestCasesInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void QueryTaskTestCasesInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t QueryTaskTestCasesInfo::getPageSize() const
{
    return pageSize_;
}

void QueryTaskTestCasesInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryTaskTestCasesInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryTaskTestCasesInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t QueryTaskTestCasesInfo::getStartIndex() const
{
    return startIndex_;
}

void QueryTaskTestCasesInfo::setStartIndex(int32_t value)
{
    startIndex_ = value;
    startIndexIsSet_ = true;
}

bool QueryTaskTestCasesInfo::startIndexIsSet() const
{
    return startIndexIsSet_;
}

void QueryTaskTestCasesInfo::unsetstartIndex()
{
    startIndexIsSet_ = false;
}

int32_t QueryTaskTestCasesInfo::getEndIndex() const
{
    return endIndex_;
}

void QueryTaskTestCasesInfo::setEndIndex(int32_t value)
{
    endIndex_ = value;
    endIndexIsSet_ = true;
}

bool QueryTaskTestCasesInfo::endIndexIsSet() const
{
    return endIndexIsSet_;
}

void QueryTaskTestCasesInfo::unsetendIndex()
{
    endIndexIsSet_ = false;
}

std::string QueryTaskTestCasesInfo::getKeyWord() const
{
    return keyWord_;
}

void QueryTaskTestCasesInfo::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool QueryTaskTestCasesInfo::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void QueryTaskTestCasesInfo::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::vector<std::string>& QueryTaskTestCasesInfo::getTestCaseUris()
{
    return testCaseUris_;
}

void QueryTaskTestCasesInfo::setTestCaseUris(const std::vector<std::string>& value)
{
    testCaseUris_ = value;
    testCaseUrisIsSet_ = true;
}

bool QueryTaskTestCasesInfo::testCaseUrisIsSet() const
{
    return testCaseUrisIsSet_;
}

void QueryTaskTestCasesInfo::unsettestCaseUris()
{
    testCaseUrisIsSet_ = false;
}

std::string QueryTaskTestCasesInfo::getIteratorUri() const
{
    return iteratorUri_;
}

void QueryTaskTestCasesInfo::setIteratorUri(const std::string& value)
{
    iteratorUri_ = value;
    iteratorUriIsSet_ = true;
}

bool QueryTaskTestCasesInfo::iteratorUriIsSet() const
{
    return iteratorUriIsSet_;
}

void QueryTaskTestCasesInfo::unsetiteratorUri()
{
    iteratorUriIsSet_ = false;
}

}
}
}
}
}


