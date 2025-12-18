

#include "huaweicloud/gaussdbfornosql/v3/model/SetAutoEnlargePolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




SetAutoEnlargePolicyResponse::SetAutoEnlargePolicyResponse()
{
    errorResultsIsSet_ = false;
}

SetAutoEnlargePolicyResponse::~SetAutoEnlargePolicyResponse() = default;

void SetAutoEnlargePolicyResponse::validate()
{
}

web::json::value SetAutoEnlargePolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errorResultsIsSet_) {
        val[utility::conversions::to_string_t("error_results")] = ModelBase::toJson(errorResults_);
    }

    return val;
}
bool SetAutoEnlargePolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("error_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_results"));
        if(!fieldValue.is_null())
        {
            std::vector<SetAutoPolicyErrorResults> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorResults(refVal);
        }
    }
    return ok;
}


std::vector<SetAutoPolicyErrorResults>& SetAutoEnlargePolicyResponse::getErrorResults()
{
    return errorResults_;
}

void SetAutoEnlargePolicyResponse::setErrorResults(const std::vector<SetAutoPolicyErrorResults>& value)
{
    errorResults_ = value;
    errorResultsIsSet_ = true;
}

bool SetAutoEnlargePolicyResponse::errorResultsIsSet() const
{
    return errorResultsIsSet_;
}

void SetAutoEnlargePolicyResponse::unseterrorResults()
{
    errorResultsIsSet_ = false;
}

}
}
}
}
}


