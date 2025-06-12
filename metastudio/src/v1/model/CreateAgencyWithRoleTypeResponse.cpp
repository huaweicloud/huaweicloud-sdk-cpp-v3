

#include "huaweicloud/metastudio/v1/model/CreateAgencyWithRoleTypeResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateAgencyWithRoleTypeResponse::CreateAgencyWithRoleTypeResponse()
{
    agencyId_ = "";
    agencyIdIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

CreateAgencyWithRoleTypeResponse::~CreateAgencyWithRoleTypeResponse() = default;

void CreateAgencyWithRoleTypeResponse::validate()
{
}

web::json::value CreateAgencyWithRoleTypeResponse::toJson() const
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
bool CreateAgencyWithRoleTypeResponse::fromJson(const web::json::value& val)
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


std::string CreateAgencyWithRoleTypeResponse::getAgencyId() const
{
    return agencyId_;
}

void CreateAgencyWithRoleTypeResponse::setAgencyId(const std::string& value)
{
    agencyId_ = value;
    agencyIdIsSet_ = true;
}

bool CreateAgencyWithRoleTypeResponse::agencyIdIsSet() const
{
    return agencyIdIsSet_;
}

void CreateAgencyWithRoleTypeResponse::unsetagencyId()
{
    agencyIdIsSet_ = false;
}

std::string CreateAgencyWithRoleTypeResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateAgencyWithRoleTypeResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateAgencyWithRoleTypeResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateAgencyWithRoleTypeResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


