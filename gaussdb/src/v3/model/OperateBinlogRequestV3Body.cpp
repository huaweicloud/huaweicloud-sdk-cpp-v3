

#include "huaweicloud/gaussdb/v3/model/OperateBinlogRequestV3Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




OperateBinlogRequestV3Body::OperateBinlogRequestV3Body()
{
    switchStatus_ = "";
    switchStatusIsSet_ = false;
    keepDays_ = 0;
    keepDaysIsSet_ = false;
}

OperateBinlogRequestV3Body::~OperateBinlogRequestV3Body() = default;

void OperateBinlogRequestV3Body::validate()
{
}

web::json::value OperateBinlogRequestV3Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(switchStatusIsSet_) {
        val[utility::conversions::to_string_t("switch_status")] = ModelBase::toJson(switchStatus_);
    }
    if(keepDaysIsSet_) {
        val[utility::conversions::to_string_t("keep_days")] = ModelBase::toJson(keepDays_);
    }

    return val;
}
bool OperateBinlogRequestV3Body::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("keep_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keep_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeepDays(refVal);
        }
    }
    return ok;
}


std::string OperateBinlogRequestV3Body::getSwitchStatus() const
{
    return switchStatus_;
}

void OperateBinlogRequestV3Body::setSwitchStatus(const std::string& value)
{
    switchStatus_ = value;
    switchStatusIsSet_ = true;
}

bool OperateBinlogRequestV3Body::switchStatusIsSet() const
{
    return switchStatusIsSet_;
}

void OperateBinlogRequestV3Body::unsetswitchStatus()
{
    switchStatusIsSet_ = false;
}

int32_t OperateBinlogRequestV3Body::getKeepDays() const
{
    return keepDays_;
}

void OperateBinlogRequestV3Body::setKeepDays(int32_t value)
{
    keepDays_ = value;
    keepDaysIsSet_ = true;
}

bool OperateBinlogRequestV3Body::keepDaysIsSet() const
{
    return keepDaysIsSet_;
}

void OperateBinlogRequestV3Body::unsetkeepDays()
{
    keepDaysIsSet_ = false;
}

}
}
}
}
}


