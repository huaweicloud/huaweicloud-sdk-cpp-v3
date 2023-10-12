

#include "huaweicloud/drs/v3/model/BatchSetObjectsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSetObjectsResponse::BatchSetObjectsResponse()
{
    allCounts_ = 0L;
    allCountsIsSet_ = false;
    resultsIsSet_ = false;
}

BatchSetObjectsResponse::~BatchSetObjectsResponse() = default;

void BatchSetObjectsResponse::validate()
{
}

web::json::value BatchSetObjectsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(allCountsIsSet_) {
        val[utility::conversions::to_string_t("all_counts")] = ModelBase::toJson(allCounts_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool BatchSetObjectsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_counts"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllCounts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseObjectResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


int64_t BatchSetObjectsResponse::getAllCounts() const
{
    return allCounts_;
}

void BatchSetObjectsResponse::setAllCounts(int64_t value)
{
    allCounts_ = value;
    allCountsIsSet_ = true;
}

bool BatchSetObjectsResponse::allCountsIsSet() const
{
    return allCountsIsSet_;
}

void BatchSetObjectsResponse::unsetallCounts()
{
    allCountsIsSet_ = false;
}

std::vector<DatabaseObjectResp>& BatchSetObjectsResponse::getResults()
{
    return results_;
}

void BatchSetObjectsResponse::setResults(const std::vector<DatabaseObjectResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchSetObjectsResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchSetObjectsResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


