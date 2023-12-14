

#include "huaweicloud/rds/v3/model/DeleteLogConfigResponseBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeleteLogConfigResponseBody::DeleteLogConfigResponseBody()
{
    logConfigsIsSet_ = false;
}

DeleteLogConfigResponseBody::~DeleteLogConfigResponseBody() = default;

void DeleteLogConfigResponseBody::validate()
{
}

web::json::value DeleteLogConfigResponseBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool DeleteLogConfigResponseBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<DeleteLogConfigs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<DeleteLogConfigs>& DeleteLogConfigResponseBody::getLogConfigs()
{
    return logConfigs_;
}

void DeleteLogConfigResponseBody::setLogConfigs(const std::vector<DeleteLogConfigs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool DeleteLogConfigResponseBody::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void DeleteLogConfigResponseBody::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


