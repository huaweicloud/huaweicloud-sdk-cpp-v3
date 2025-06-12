

#include "huaweicloud/metastudio/v1/model/ShowAgencyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowAgencyResponse::ShowAgencyResponse()
{
    agencyId_ = "";
    agencyIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowAgencyResponse::~ShowAgencyResponse() = default;

void ShowAgencyResponse::validate()
{
}

web::json::value ShowAgencyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agencyIdIsSet_) {
        val[utility::conversions::to_string_t("agency_id")] = ModelBase::toJson(agencyId_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowAgencyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agency_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowAgencyResponse::getAgencyId() const
{
    return agencyId_;
}

void ShowAgencyResponse::setAgencyId(const std::string& value)
{
    agencyId_ = value;
    agencyIdIsSet_ = true;
}

bool ShowAgencyResponse::agencyIdIsSet() const
{
    return agencyIdIsSet_;
}

void ShowAgencyResponse::unsetagencyId()
{
    agencyIdIsSet_ = false;
}

std::string ShowAgencyResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowAgencyResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowAgencyResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowAgencyResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


