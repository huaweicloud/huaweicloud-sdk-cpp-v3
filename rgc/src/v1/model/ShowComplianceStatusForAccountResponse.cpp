

#include "huaweicloud/rgc/v1/model/ShowComplianceStatusForAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowComplianceStatusForAccountResponse::ShowComplianceStatusForAccountResponse()
{
    complianceStatus_ = "";
    complianceStatusIsSet_ = false;
}

ShowComplianceStatusForAccountResponse::~ShowComplianceStatusForAccountResponse() = default;

void ShowComplianceStatusForAccountResponse::validate()
{
}

web::json::value ShowComplianceStatusForAccountResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(complianceStatusIsSet_) {
        val[utility::conversions::to_string_t("compliance_status")] = ModelBase::toJson(complianceStatus_);
    }

    return val;
}
bool ShowComplianceStatusForAccountResponse::fromJson(const web::json::value& val)
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


std::string ShowComplianceStatusForAccountResponse::getComplianceStatus() const
{
    return complianceStatus_;
}

void ShowComplianceStatusForAccountResponse::setComplianceStatus(const std::string& value)
{
    complianceStatus_ = value;
    complianceStatusIsSet_ = true;
}

bool ShowComplianceStatusForAccountResponse::complianceStatusIsSet() const
{
    return complianceStatusIsSet_;
}

void ShowComplianceStatusForAccountResponse::unsetcomplianceStatus()
{
    complianceStatusIsSet_ = false;
}

}
}
}
}
}


