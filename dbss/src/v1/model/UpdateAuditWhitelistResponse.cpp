

#include "huaweicloud/dbss/v1/model/UpdateAuditWhitelistResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditWhitelistResponse::UpdateAuditWhitelistResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateAuditWhitelistResponse::~UpdateAuditWhitelistResponse() = default;

void UpdateAuditWhitelistResponse::validate()
{
}

web::json::value UpdateAuditWhitelistResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateAuditWhitelistResponse::fromJson(const web::json::value& val)
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


std::string UpdateAuditWhitelistResponse::getStatus() const
{
    return status_;
}

void UpdateAuditWhitelistResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateAuditWhitelistResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateAuditWhitelistResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


