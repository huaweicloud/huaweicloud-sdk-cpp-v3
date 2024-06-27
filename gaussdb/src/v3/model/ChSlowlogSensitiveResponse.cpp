

#include "huaweicloud/gaussdb/v3/model/ChSlowlogSensitiveResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ChSlowlogSensitiveResponse::ChSlowlogSensitiveResponse()
{
    openSlowLogSwitch_ = "";
    openSlowLogSwitchIsSet_ = false;
}

ChSlowlogSensitiveResponse::~ChSlowlogSensitiveResponse() = default;

void ChSlowlogSensitiveResponse::validate()
{
}

web::json::value ChSlowlogSensitiveResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openSlowLogSwitchIsSet_) {
        val[utility::conversions::to_string_t("open_slow_log_switch")] = ModelBase::toJson(openSlowLogSwitch_);
    }

    return val;
}
bool ChSlowlogSensitiveResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("open_slow_log_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("open_slow_log_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOpenSlowLogSwitch(refVal);
        }
    }
    return ok;
}


std::string ChSlowlogSensitiveResponse::getOpenSlowLogSwitch() const
{
    return openSlowLogSwitch_;
}

void ChSlowlogSensitiveResponse::setOpenSlowLogSwitch(const std::string& value)
{
    openSlowLogSwitch_ = value;
    openSlowLogSwitchIsSet_ = true;
}

bool ChSlowlogSensitiveResponse::openSlowLogSwitchIsSet() const
{
    return openSlowLogSwitchIsSet_;
}

void ChSlowlogSensitiveResponse::unsetopenSlowLogSwitch()
{
    openSlowLogSwitchIsSet_ = false;
}

}
}
}
}
}


