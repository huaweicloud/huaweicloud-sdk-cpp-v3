

#include "huaweicloud/cloudtest/v1/model/ListTestcasesByProjectIssuesRelationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTestcasesByProjectIssuesRelationResponse::ListTestcasesByProjectIssuesRelationResponse()
{
    testcasesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListTestcasesByProjectIssuesRelationResponse::~ListTestcasesByProjectIssuesRelationResponse() = default;

void ListTestcasesByProjectIssuesRelationResponse::validate()
{
}

web::json::value ListTestcasesByProjectIssuesRelationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testcasesIsSet_) {
        val[utility::conversions::to_string_t("testcases")] = ModelBase::toJson(testcases_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListTestcasesByProjectIssuesRelationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testcases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcases"));
        if(!fieldValue.is_null())
        {
            std::vector<IssuesRelationTestCaseVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
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
    return ok;
}


std::vector<IssuesRelationTestCaseVo>& ListTestcasesByProjectIssuesRelationResponse::getTestcases()
{
    return testcases_;
}

void ListTestcasesByProjectIssuesRelationResponse::setTestcases(const std::vector<IssuesRelationTestCaseVo>& value)
{
    testcases_ = value;
    testcasesIsSet_ = true;
}

bool ListTestcasesByProjectIssuesRelationResponse::testcasesIsSet() const
{
    return testcasesIsSet_;
}

void ListTestcasesByProjectIssuesRelationResponse::unsettestcases()
{
    testcasesIsSet_ = false;
}

int32_t ListTestcasesByProjectIssuesRelationResponse::getTotalCount() const
{
    return totalCount_;
}

void ListTestcasesByProjectIssuesRelationResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListTestcasesByProjectIssuesRelationResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListTestcasesByProjectIssuesRelationResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

int32_t ListTestcasesByProjectIssuesRelationResponse::getPageNo() const
{
    return pageNo_;
}

void ListTestcasesByProjectIssuesRelationResponse::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool ListTestcasesByProjectIssuesRelationResponse::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void ListTestcasesByProjectIssuesRelationResponse::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t ListTestcasesByProjectIssuesRelationResponse::getPageSize() const
{
    return pageSize_;
}

void ListTestcasesByProjectIssuesRelationResponse::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListTestcasesByProjectIssuesRelationResponse::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListTestcasesByProjectIssuesRelationResponse::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


