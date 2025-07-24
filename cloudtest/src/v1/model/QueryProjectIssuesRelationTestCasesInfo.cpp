

#include "huaweicloud/cloudtest/v1/model/QueryProjectIssuesRelationTestCasesInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




QueryProjectIssuesRelationTestCasesInfo::QueryProjectIssuesRelationTestCasesInfo()
{
    pageNo_ = 0;
    pageNoIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

QueryProjectIssuesRelationTestCasesInfo::~QueryProjectIssuesRelationTestCasesInfo() = default;

void QueryProjectIssuesRelationTestCasesInfo::validate()
{
}

web::json::value QueryProjectIssuesRelationTestCasesInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNoIsSet_) {
        val[utility::conversions::to_string_t("page_no")] = ModelBase::toJson(pageNo_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool QueryProjectIssuesRelationTestCasesInfo::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t QueryProjectIssuesRelationTestCasesInfo::getPageNo() const
{
    return pageNo_;
}

void QueryProjectIssuesRelationTestCasesInfo::setPageNo(int32_t value)
{
    pageNo_ = value;
    pageNoIsSet_ = true;
}

bool QueryProjectIssuesRelationTestCasesInfo::pageNoIsSet() const
{
    return pageNoIsSet_;
}

void QueryProjectIssuesRelationTestCasesInfo::unsetpageNo()
{
    pageNoIsSet_ = false;
}

int32_t QueryProjectIssuesRelationTestCasesInfo::getPageSize() const
{
    return pageSize_;
}

void QueryProjectIssuesRelationTestCasesInfo::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool QueryProjectIssuesRelationTestCasesInfo::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void QueryProjectIssuesRelationTestCasesInfo::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


