

#include "huaweicloud/drs/v5/model/ShowColumnInfoResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowColumnInfoResultResponse::ShowColumnInfoResultResponse()
{
    resultsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowColumnInfoResultResponse::~ShowColumnInfoResultResponse() = default;

void ShowColumnInfoResultResponse::validate()
{
}

web::json::value ShowColumnInfoResultResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowColumnInfoResultResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<DbObjectColumnInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
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
    return ok;
}


std::vector<DbObjectColumnInfo>& ShowColumnInfoResultResponse::getResults()
{
    return results_;
}

void ShowColumnInfoResultResponse::setResults(const std::vector<DbObjectColumnInfo>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ShowColumnInfoResultResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ShowColumnInfoResultResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t ShowColumnInfoResultResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowColumnInfoResultResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowColumnInfoResultResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowColumnInfoResultResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


