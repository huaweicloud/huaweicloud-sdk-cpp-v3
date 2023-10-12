

#include "huaweicloud/drs/v3/model/BatchResetPasswordResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchResetPasswordResponse::BatchResetPasswordResponse()
{
    resultsIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
}

BatchResetPasswordResponse::~BatchResetPasswordResponse() = default;

void BatchResetPasswordResponse::validate()
{
}

web::json::value BatchResetPasswordResponse::toJson() const
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
bool BatchResetPasswordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyDbPwdResp> refVal;
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


std::vector<ModifyDbPwdResp>& BatchResetPasswordResponse::getResults()
{
    return results_;
}

void BatchResetPasswordResponse::setResults(const std::vector<ModifyDbPwdResp>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool BatchResetPasswordResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void BatchResetPasswordResponse::unsetresults()
{
    resultsIsSet_ = false;
}

int32_t BatchResetPasswordResponse::getCount() const
{
    return count_;
}

void BatchResetPasswordResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool BatchResetPasswordResponse::countIsSet() const
{
    return countIsSet_;
}

void BatchResetPasswordResponse::unsetcount()
{
    countIsSet_ = false;
}

}
}
}
}
}


