

#include "huaweicloud/drs/v3/model/BatchRestoreTaskResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchRestoreTaskResponse::BatchRestoreTaskResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchRestoreTaskResponse::~BatchRestoreTaskResponse() = default;

void BatchRestoreTaskResponse::validate()
{
}

web::json::value BatchRestoreTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }

    return val;
}

bool BatchRestoreTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<RetryTaskResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    return ok;
}

std::vector<RetryTaskResp>& BatchRestoreTaskResponse::getResults()
{
    return results_;
}

void BatchRestoreTaskResponse::setResults(const std::vector<RetryTaskResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchRestoreTaskResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchRestoreTaskResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchRestoreTaskResponse::getCount() const
{
    return count_;
}

void BatchRestoreTaskResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchRestoreTaskResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchRestoreTaskResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


