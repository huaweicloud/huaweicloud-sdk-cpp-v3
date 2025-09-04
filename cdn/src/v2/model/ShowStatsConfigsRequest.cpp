

#include "huaweicloud/cdn/v2/model/ShowStatsConfigsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowStatsConfigsRequest::ShowStatsConfigsRequest()
{
    configType_ = 0;
    configTypeIsSet_ = false;
}

ShowStatsConfigsRequest::~ShowStatsConfigsRequest() = default;

void ShowStatsConfigsRequest::validate()
{
}

web::json::value ShowStatsConfigsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configTypeIsSet_) {
        val[utility::conversions::to_string_t("config_type")] = ModelBase::toJson(configType_);
    }

    return val;
}
bool ShowStatsConfigsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigType(refVal);
        }
    }
    return ok;
}


int32_t ShowStatsConfigsRequest::getConfigType() const
{
    return configType_;
}

void ShowStatsConfigsRequest::setConfigType(int32_t value)
{
    configType_ = value;
    configTypeIsSet_ = true;
}

bool ShowStatsConfigsRequest::configTypeIsSet() const
{
    return configTypeIsSet_;
}

void ShowStatsConfigsRequest::unsetconfigType()
{
    configTypeIsSet_ = false;
}

}
}
}
}
}


