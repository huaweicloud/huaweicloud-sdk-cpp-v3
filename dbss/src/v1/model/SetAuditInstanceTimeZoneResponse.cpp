

#include "huaweicloud/dbss/v1/model/SetAuditInstanceTimeZoneResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SetAuditInstanceTimeZoneResponse::SetAuditInstanceTimeZoneResponse()
{
    status_ = "";
    statusIsSet_ = false;
}

SetAuditInstanceTimeZoneResponse::~SetAuditInstanceTimeZoneResponse() = default;

void SetAuditInstanceTimeZoneResponse::validate()
{
}

web::json::value SetAuditInstanceTimeZoneResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SetAuditInstanceTimeZoneResponse::fromJson(const web::json::value& val)
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


std::string SetAuditInstanceTimeZoneResponse::getStatus() const
{
    return status_;
}

void SetAuditInstanceTimeZoneResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SetAuditInstanceTimeZoneResponse::statusIsSet() const
{
    return statusIsSet_;
}

void SetAuditInstanceTimeZoneResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


