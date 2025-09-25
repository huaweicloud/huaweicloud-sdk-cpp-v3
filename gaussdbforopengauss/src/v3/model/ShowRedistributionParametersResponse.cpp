

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowRedistributionParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowRedistributionParametersResponse::ShowRedistributionParametersResponse()
{
    redistributionParametersIsSet_ = false;
}

ShowRedistributionParametersResponse::~ShowRedistributionParametersResponse() = default;

void ShowRedistributionParametersResponse::validate()
{
}

web::json::value ShowRedistributionParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(redistributionParametersIsSet_) {
        val[utility::conversions::to_string_t("redistribution_parameters")] = ModelBase::toJson(redistributionParameters_);
    }

    return val;
}
bool ShowRedistributionParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("redistribution_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("redistribution_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<RedistributionParameterResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRedistributionParameters(refVal);
        }
    }
    return ok;
}


std::vector<RedistributionParameterResult>& ShowRedistributionParametersResponse::getRedistributionParameters()
{
    return redistributionParameters_;
}

void ShowRedistributionParametersResponse::setRedistributionParameters(const std::vector<RedistributionParameterResult>& value)
{
    redistributionParameters_ = value;
    redistributionParametersIsSet_ = true;
}

bool ShowRedistributionParametersResponse::redistributionParametersIsSet() const
{
    return redistributionParametersIsSet_;
}

void ShowRedistributionParametersResponse::unsetredistributionParameters()
{
    redistributionParametersIsSet_ = false;
}

}
}
}
}
}


