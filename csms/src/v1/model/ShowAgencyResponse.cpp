

#include "huaweicloud/csms/v1/model/ShowAgencyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {




ShowAgencyResponse::ShowAgencyResponse()
{
    agencyGranted_ = "";
    agencyGrantedIsSet_ = false;
}

ShowAgencyResponse::~ShowAgencyResponse() = default;

void ShowAgencyResponse::validate()
{
}

web::json::value ShowAgencyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyGrantedIsSet_) {
        val[utility::conversions::to_string_t("agency_granted")] = ModelBase::toJson(agencyGranted_);
    }

    return val;
}
bool ShowAgencyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_granted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_granted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyGranted(refVal);
        }
    }
    return ok;
}


std::string ShowAgencyResponse::getAgencyGranted() const
{
    return agencyGranted_;
}

void ShowAgencyResponse::setAgencyGranted(const std::string& value)
{
    agencyGranted_ = value;
    agencyGrantedIsSet_ = true;
}

bool ShowAgencyResponse::agencyGrantedIsSet() const
{
    return agencyGrantedIsSet_;
}

void ShowAgencyResponse::unsetagencyGranted()
{
    agencyGrantedIsSet_ = false;
}

}
}
}
}
}


