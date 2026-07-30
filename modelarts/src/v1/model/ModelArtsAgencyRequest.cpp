

#include "huaweicloud/modelarts/v1/model/ModelArtsAgencyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ModelArtsAgencyRequest::ModelArtsAgencyRequest()
{
    agencyNameSuffix_ = "";
    agencyNameSuffixIsSet_ = false;
}

ModelArtsAgencyRequest::~ModelArtsAgencyRequest() = default;

void ModelArtsAgencyRequest::validate()
{
}

web::json::value ModelArtsAgencyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameSuffixIsSet_) {
        val[utility::conversions::to_string_t("agency_name_suffix")] = ModelBase::toJson(agencyNameSuffix_);
    }

    return val;
}
bool ModelArtsAgencyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_name_suffix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name_suffix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyNameSuffix(refVal);
        }
    }
    return ok;
}


std::string ModelArtsAgencyRequest::getAgencyNameSuffix() const
{
    return agencyNameSuffix_;
}

void ModelArtsAgencyRequest::setAgencyNameSuffix(const std::string& value)
{
    agencyNameSuffix_ = value;
    agencyNameSuffixIsSet_ = true;
}

bool ModelArtsAgencyRequest::agencyNameSuffixIsSet() const
{
    return agencyNameSuffixIsSet_;
}

void ModelArtsAgencyRequest::unsetagencyNameSuffix()
{
    agencyNameSuffixIsSet_ = false;
}

}
}
}
}
}


