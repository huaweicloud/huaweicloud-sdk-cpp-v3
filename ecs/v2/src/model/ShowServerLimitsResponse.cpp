

#include "huaweicloud/ecs/model/ShowServerLimitsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerLimitsResponse::ShowServerLimitsResponse()
{
    absoluteIsSet_ = false;
}

ShowServerLimitsResponse::~ShowServerLimitsResponse() = default;

void ShowServerLimitsResponse::validate()
{
}

web::json::value ShowServerLimitsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(absoluteIsSet_) {
        val[utility::conversions::to_string_t("absolute")] = ModelBase::toJson(absolute_);
    }

    return val;
}

bool ShowServerLimitsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("absolute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("absolute"));
        if(!fieldValue.is_null())
        {
            ServerLimits refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAbsolute(refVal);
        }
    }
    return ok;
}


ServerLimits ShowServerLimitsResponse::getAbsolute() const
{
    return absolute_;
}

void ShowServerLimitsResponse::setAbsolute(const ServerLimits& value)
{
    absolute_ = value;
    absoluteIsSet_ = true;
}

bool ShowServerLimitsResponse::absoluteIsSet() const
{
    return absoluteIsSet_;
}

void ShowServerLimitsResponse::unsetabsolute()
{
    absoluteIsSet_ = false;
}

}
}
}
}
}


