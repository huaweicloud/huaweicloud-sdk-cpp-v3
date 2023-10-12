

#include "huaweicloud/gaussdb/v3/model/OperateAuditLogRequestV3Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OperateAuditLogRequestV3Body::OperateAuditLogRequestV3Body()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
}

OperateAuditLogRequestV3Body::~OperateAuditLogRequestV3Body() = default;

void OperateAuditLogRequestV3Body::validate()
{
}

web::json::value OperateAuditLogRequestV3Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }

    return val;
}
bool OperateAuditLogRequestV3Body::fromJson(const web::json::value& val)
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


std::string OperateAuditLogRequestV3Body::getSwitchStatus() const
{
    return switchStatus_;
}

void OperateAuditLogRequestV3Body::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool OperateAuditLogRequestV3Body::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void OperateAuditLogRequestV3Body::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

}
}
}
}
}


