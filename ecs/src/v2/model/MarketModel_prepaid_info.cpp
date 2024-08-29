

#include "huaweicloud/ecs/v2/model/MarketModel_prepaid_info.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




MarketModel_prepaid_info::MarketModel_prepaid_info()
{
    expiredTime_ = "";
    expiredTimeIsSet_ = false;
}

MarketModel_prepaid_info::~MarketModel_prepaid_info() = default;

void MarketModel_prepaid_info::validate()
{
}

web::json::value MarketModel_prepaid_info::toJson() const
{
    web::json::value val = web::json::value::object();

    if(expiredTimeIsSet_) {
        val[utility::conversions::to_string_t("expired_time")] = ModelBase::toJson(expiredTime_);
    }

    return val;
}
bool MarketModel_prepaid_info::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("expired_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expired_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiredTime(refVal);
        }
    }
    return ok;
}


std::string MarketModel_prepaid_info::getExpiredTime() const
{
    return expiredTime_;
}

void MarketModel_prepaid_info::setExpiredTime(const std::string& value)
{
    expiredTime_ = value;
    expiredTimeIsSet_ = true;
}

bool MarketModel_prepaid_info::expiredTimeIsSet() const
{
    return expiredTimeIsSet_;
}

void MarketModel_prepaid_info::unsetexpiredTime()
{
    expiredTimeIsSet_ = false;
}

}
}
}
}
}


