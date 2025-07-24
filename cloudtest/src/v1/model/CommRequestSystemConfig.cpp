

#include "huaweicloud/cloudtest/v1/model/CommRequestSystemConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommRequestSystemConfig::CommRequestSystemConfig()
{
    paramsIsSet_ = false;
}

CommRequestSystemConfig::~CommRequestSystemConfig() = default;

void CommRequestSystemConfig::validate()
{
}

web::json::value CommRequestSystemConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramsIsSet_) {
        val[utility::conversions::to_string_t("params")] = ModelBase::toJson(params_);
    }

    return val;
}
bool CommRequestSystemConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("params"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("params"));
        if(!fieldValue.is_null())
        {
            SystemConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParams(refVal);
        }
    }
    return ok;
}


SystemConfig CommRequestSystemConfig::getParams() const
{
    return params_;
}

void CommRequestSystemConfig::setParams(const SystemConfig& value)
{
    params_ = value;
    paramsIsSet_ = true;
}

bool CommRequestSystemConfig::paramsIsSet() const
{
    return paramsIsSet_;
}

void CommRequestSystemConfig::unsetparams()
{
    paramsIsSet_ = false;
}

}
}
}
}
}


