

#include "huaweicloud/rds/v3/model/AddLogConfigResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




AddLogConfigResponseBody::AddLogConfigResponseBody()
{
    logConfigsIsSet_ = false;
}

AddLogConfigResponseBody::~AddLogConfigResponseBody() = default;

void AddLogConfigResponseBody::validate()
{
}

web::json::value AddLogConfigResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool AddLogConfigResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<AddLogConfigs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<AddLogConfigs>& AddLogConfigResponseBody::getLogConfigs()
{
    return logConfigs_;
}

void AddLogConfigResponseBody::setLogConfigs(const std::vector<AddLogConfigs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool AddLogConfigResponseBody::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void AddLogConfigResponseBody::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


