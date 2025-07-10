

#include "huaweicloud/rgc/v1/model/ShowComplianceStatusForOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowComplianceStatusForOrganizationalUnitResponse::ShowComplianceStatusForOrganizationalUnitResponse()
{
    complianceStatus_ = "";
    complianceStatusIsSet_ = false;
}

ShowComplianceStatusForOrganizationalUnitResponse::~ShowComplianceStatusForOrganizationalUnitResponse() = default;

void ShowComplianceStatusForOrganizationalUnitResponse::validate()
{
}

web::json::value ShowComplianceStatusForOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(complianceStatusIsSet_) {
        val[utility::conversions::to_string_t("compliance_status")] = ModelBase::toJson(complianceStatus_);
    }

    return val;
}
bool ShowComplianceStatusForOrganizationalUnitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("compliance_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compliance_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComplianceStatus(refVal);
        }
    }
    return ok;
}


std::string ShowComplianceStatusForOrganizationalUnitResponse::getComplianceStatus() const
{
    return complianceStatus_;
}

void ShowComplianceStatusForOrganizationalUnitResponse::setComplianceStatus(const std::string& value)
{
    complianceStatus_ = value;
    complianceStatusIsSet_ = true;
}

bool ShowComplianceStatusForOrganizationalUnitResponse::complianceStatusIsSet() const
{
    return complianceStatusIsSet_;
}

void ShowComplianceStatusForOrganizationalUnitResponse::unsetcomplianceStatus()
{
    complianceStatusIsSet_ = false;
}

}
}
}
}
}


