

#include "huaweicloud/gaussdb/v3/model/ShowAuditLogResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowAuditLogResponse::ShowAuditLogResponse()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
}

ShowAuditLogResponse::~ShowAuditLogResponse() = default;

void ShowAuditLogResponse::validate()
{
}

web::json::value ShowAuditLogResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }

    return val;
}
bool ShowAuditLogResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("switch_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("switch_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSwitchStatus(refVal);
        }
    }
    return ok;
}


std::string ShowAuditLogResponse::getSwitchStatus() const
{
    return switchStatus_;
}

void ShowAuditLogResponse::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool ShowAuditLogResponse::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void ShowAuditLogResponse::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

}
}
}
}
}


