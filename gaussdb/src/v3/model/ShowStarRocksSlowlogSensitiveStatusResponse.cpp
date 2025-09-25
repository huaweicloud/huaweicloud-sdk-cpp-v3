

#include "huaweicloud/gaussdb/v3/model/ShowStarRocksSlowlogSensitiveStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarRocksSlowlogSensitiveStatusResponse::ShowStarRocksSlowlogSensitiveStatusResponse()
{
    openSlowLogSwitch_ = "";
    openSlowLogSwitchIsSet_ = false;
}

ShowStarRocksSlowlogSensitiveStatusResponse::~ShowStarRocksSlowlogSensitiveStatusResponse() = default;

void ShowStarRocksSlowlogSensitiveStatusResponse::validate()
{
}

web::json::value ShowStarRocksSlowlogSensitiveStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(openSlowLogSwitchIsSet_) {
        val[utility::conversions::to_string_t("open_slow_log_switch")] = ModelBase::toJson(openSlowLogSwitch_);
    }

    return val;
}
bool ShowStarRocksSlowlogSensitiveStatusResponse::fromJson(const web::json::value& val)
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


std::string ShowStarRocksSlowlogSensitiveStatusResponse::getOpenSlowLogSwitch() const
{
    return openSlowLogSwitch_;
}

void ShowStarRocksSlowlogSensitiveStatusResponse::setOpenSlowLogSwitch(const std::string& value)
{
    openSlowLogSwitch_ = value;
    openSlowLogSwitchIsSet_ = true;
}

bool ShowStarRocksSlowlogSensitiveStatusResponse::openSlowLogSwitchIsSet() const
{
    return openSlowLogSwitchIsSet_;
}

void ShowStarRocksSlowlogSensitiveStatusResponse::unsetopenSlowLogSwitch()
{
    openSlowLogSwitchIsSet_ = false;
}

}
}
}
}
}


