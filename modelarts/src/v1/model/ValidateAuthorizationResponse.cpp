

#include "huaweicloud/modelarts/v1/model/ValidateAuthorizationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ValidateAuthorizationResponse::ValidateAuthorizationResponse()
{
    resultsIsSet_ = false;
}

ValidateAuthorizationResponse::~ValidateAuthorizationResponse() = default;

void ValidateAuthorizationResponse::validate()
{
}

web::json::value ValidateAuthorizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }

    return val;
}
bool ValidateAuthorizationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<ValidateAuthResults> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    return ok;
}


std::vector<ValidateAuthResults>& ValidateAuthorizationResponse::getResults()
{
    return results_;
}

void ValidateAuthorizationResponse::setResults(const std::vector<ValidateAuthResults>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool ValidateAuthorizationResponse::resultsIsSet() const
{
    return resultsIsSet_;
}

void ValidateAuthorizationResponse::unsetresults()
{
    resultsIsSet_ = false;
}

}
}
}
}
}


