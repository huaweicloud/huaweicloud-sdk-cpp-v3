

#include "huaweicloud/rds/v3/model/TransferBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




TransferBackupResponse::TransferBackupResponse()
{
    resultsIsSet_ = false;
}

TransferBackupResponse::~TransferBackupResponse() = default;

void TransferBackupResponse::validate()
{
}

web::json::value TransferBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool TransferBackupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<TransferBackupResponseBody_results> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<TransferBackupResponseBody_results>& TransferBackupResponse::getResults()
{
    return results_;
}

void TransferBackupResponse::setResults(const std::vector<TransferBackupResponseBody_results>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool TransferBackupResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void TransferBackupResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


