

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowExpansionParametersResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowExpansionParametersResponse::ShowExpansionParametersResponse()
{
    expansionParametersIsSet_ = false;
}

ShowExpansionParametersResponse::~ShowExpansionParametersResponse() = default;

void ShowExpansionParametersResponse::validate()
{
}

web::json::value ShowExpansionParametersResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expansionParametersIsSet_) {
        val[utility::conversions::to_string_t("expansion_parameters")] = ModelBase::toJson(expansionParameters_);
    }

    return val;
}
bool ShowExpansionParametersResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expansion_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expansion_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<ExpansionParameterResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpansionParameters(refVal);
        }
    }
    return ok;
}


std::vector<ExpansionParameterResult>& ShowExpansionParametersResponse::getExpansionParameters()
{
    return expansionParameters_;
}

void ShowExpansionParametersResponse::setExpansionParameters(const std::vector<ExpansionParameterResult>& value)
{
    expansionParameters_ = value;
    expansionParametersIsSet_ = true;
}

bool ShowExpansionParametersResponse::expansionParametersIsSet() const
{
    return expansionParametersIsSet_;
}

void ShowExpansionParametersResponse::unsetexpansionParameters()
{
    expansionParametersIsSet_ = false;
}

}
}
}
}
}


