

#include "huaweicloud/drs/v3/model/ListDataLevelTableCompareJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ListDataLevelTableCompareJobsResponse::ListDataLevelTableCompareJobsResponse()
{
    compareJobsIsSet_ = false;
    count_ = 0L;
    countIsSet_ = false;
}

ListDataLevelTableCompareJobsResponse::~ListDataLevelTableCompareJobsResponse() = default;

void ListDataLevelTableCompareJobsResponse::validate()
{
}

web::json::value ListDataLevelTableCompareJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(compareJobsIsSet_) {
        val[utility::conversions::to_string_t("compare_jobs")] = ModelBase::toJson(compareJobs_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}
bool ListDataLevelTableCompareJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compare_jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareJobInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareJobs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}


std::vector<CompareJobInfo>& ListDataLevelTableCompareJobsResponse::getCompareJobs()
{
    return compareJobs_;
}

void ListDataLevelTableCompareJobsResponse::setCompareJobs(const std::vector<CompareJobInfo>& value)
{
    compareJobs_ = value;
    compareJobsIsSet_ = true;
}

bool ListDataLevelTableCompareJobsResponse::compareJobsIsSet() const
{
    return compareJobsIsSet_;
}

void ListDataLevelTableCompareJobsResponse::unsetcompareJobs()
{
    compareJobsIsSet_ = false;
}

int64_t ListDataLevelTableCompareJobsResponse::getCount() const
{
    return count_;
}

void ListDataLevelTableCompareJobsResponse::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListDataLevelTableCompareJobsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListDataLevelTableCompareJobsResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


