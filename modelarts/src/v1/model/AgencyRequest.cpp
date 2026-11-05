

#include "huaweicloud/modelarts/v1/model/AgencyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AgencyRequest::AgencyRequest()
{
    agencyName_ = "";
    agencyNameIsSet_ = false;
}

AgencyRequest::~AgencyRequest() = default;

void AgencyRequest::validate()
{
}

web::json::value AgencyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }

    return val;
}
bool AgencyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    return ok;
}


std::string AgencyRequest::getAgencyName() const
{
    return agencyName_;
}

void AgencyRequest::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool AgencyRequest::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void AgencyRequest::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

}
}
}
}
}


