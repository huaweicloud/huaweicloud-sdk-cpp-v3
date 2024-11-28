

#include "huaweicloud/csms/v1/model/CreateAgencyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




CreateAgencyResponse::CreateAgencyResponse()
{
    agenciesIsSet_ = false;
}

CreateAgencyResponse::~CreateAgencyResponse() = default;

void CreateAgencyResponse::validate()
{
}

web::json::value CreateAgencyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agenciesIsSet_) {
        val[utility::conversions::to_string_t("agencies")] = ModelBase::toJson(agencies_);
    }

    return val;
}
bool CreateAgencyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agencies"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agencies"));
        if(!fieldValue.is_null())
        {
            std::vector<Agency> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencies(refVal);
        }
    }
    return ok;
}


std::vector<Agency>& CreateAgencyResponse::getAgencies()
{
    return agencies_;
}

void CreateAgencyResponse::setAgencies(const std::vector<Agency>& value)
{
    agencies_ = value;
    agenciesIsSet_ = true;
}

bool CreateAgencyResponse::agenciesIsSet() const
{
    return agenciesIsSet_;
}

void CreateAgencyResponse::unsetagencies()
{
    agenciesIsSet_ = false;
}

}
}
}
}
}


