

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowRedistributionParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowRedistributionParametersResponse::ShowRedistributionParametersResponse()
{
    expansionParametersIsSet_ = false;
}

ShowRedistributionParametersResponse::~ShowRedistributionParametersResponse() = default;

void ShowRedistributionParametersResponse::validate()
{
}

web::json::value ShowRedistributionParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expansionParametersIsSet_) {
        val[utility::conversions::to_string_t("expansion_parameters")] = ModelBase::toJson(expansionParameters_);
    }

    return val;
}
bool ShowRedistributionParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expansion_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expansion_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<RedistributionParameterResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpansionParameters(refVal);
        }
    }
    return ok;
}


std::vector<RedistributionParameterResult>& ShowRedistributionParametersResponse::getExpansionParameters()
{
    return expansionParameters_;
}

void ShowRedistributionParametersResponse::setExpansionParameters(const std::vector<RedistributionParameterResult>& value)
{
    expansionParameters_ = value;
    expansionParametersIsSet_ = true;
}

bool ShowRedistributionParametersResponse::expansionParametersIsSet() const
{
    return expansionParametersIsSet_;
}

void ShowRedistributionParametersResponse::unsetexpansionParameters()
{
    expansionParametersIsSet_ = false;
}

}
}
}
}
}


