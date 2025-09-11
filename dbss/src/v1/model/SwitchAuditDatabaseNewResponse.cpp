

#include "huaweicloud/dbss/v1/model/SwitchAuditDatabaseNewResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAuditDatabaseNewResponse::SwitchAuditDatabaseNewResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SwitchAuditDatabaseNewResponse::~SwitchAuditDatabaseNewResponse() = default;

void SwitchAuditDatabaseNewResponse::validate()
{
}

web::json::value SwitchAuditDatabaseNewResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchAuditDatabaseNewResponse::fromJson(const web::json::value& val)
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


std::string SwitchAuditDatabaseNewResponse::getStatus() const
{
    return status_;
}

void SwitchAuditDatabaseNewResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchAuditDatabaseNewResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchAuditDatabaseNewResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


