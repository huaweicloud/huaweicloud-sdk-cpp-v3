

#include "huaweicloud/drs/v3/model/BatchUpdateUserResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchUpdateUserResponse::BatchUpdateUserResponse()
{
    allCounts_ = 0;
    allCountsIsSet_ = false;
    resultsIsSet_ = false;
}

BatchUpdateUserResponse::~BatchUpdateUserResponse() = default;

void BatchUpdateUserResponse::validate()
{
}

web::json::value BatchUpdateUserResponse::toJson() const
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
bool BatchUpdateUserResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("all_counts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_counts"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllCounts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryUserResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


int32_t BatchUpdateUserResponse::getAllCounts() const
{
    return allCounts_;
}

void BatchUpdateUserResponse::setAllCounts(int32_t value)
{
    allCounts_ = value;
    allCountsIsSet_ = true;
}

bool BatchUpdateUserResponse::allCountsIsSet() const
{
    return allCountsIsSet_;
}

void BatchUpdateUserResponse::unsetallCounts()
{
    allCountsIsSet_ = false;
}

std::vector<QueryUserResp>& BatchUpdateUserResponse::getResults()
{
    return results_;
}

void BatchUpdateUserResponse::setResults(const std::vector<QueryUserResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchUpdateUserResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchUpdateUserResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


