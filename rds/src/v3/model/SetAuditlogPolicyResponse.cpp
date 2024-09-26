

#include "huaweicloud/rds/v3/model/SetAuditlogPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SetAuditlogPolicyResponse::SetAuditlogPolicyResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetAuditlogPolicyResponse::~SetAuditlogPolicyResponse() = default;

void SetAuditlogPolicyResponse::validate()
{
}

web::json::value SetAuditlogPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetAuditlogPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SetAuditlogPolicyResponse::getStatus() const
{
    return status_;
}

void SetAuditlogPolicyResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAuditlogPolicyResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAuditlogPolicyResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


