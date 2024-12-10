

#include "huaweicloud/dbss/v1/model/SwitchAuditDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SwitchAuditDatabaseResponse::SwitchAuditDatabaseResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SwitchAuditDatabaseResponse::~SwitchAuditDatabaseResponse() = default;

void SwitchAuditDatabaseResponse::validate()
{
}

web::json::value SwitchAuditDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SwitchAuditDatabaseResponse::fromJson(const web::json::value& val)
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


std::string SwitchAuditDatabaseResponse::getStatus() const
{
    return status_;
}

void SwitchAuditDatabaseResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SwitchAuditDatabaseResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SwitchAuditDatabaseResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


