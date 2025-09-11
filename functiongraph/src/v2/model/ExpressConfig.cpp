

#include "huaweicloud/functiongraph/v2/model/ExpressConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ExpressConfig::ExpressConfig()
{
    logLevel_ = "";
    logLevelIsSet_ = false;
}

ExpressConfig::~ExpressConfig() = default;

void ExpressConfig::validate()
{
}

web::json::value ExpressConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logLevelIsSet_) {
        val[utility::conversions::to_string_t("log_level")] = ModelBase::toJson(logLevel_);
    }

    return val;
}
bool ExpressConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogLevel(refVal);
        }
    }
    return ok;
}


std::string ExpressConfig::getLogLevel() const
{
    return logLevel_;
}

void ExpressConfig::setLogLevel(const std::string& value)
{
    logLevel_ = value;
    logLevelIsSet_ = true;
}

bool ExpressConfig::logLevelIsSet() const
{
    return logLevelIsSet_;
}

void ExpressConfig::unsetlogLevel()
{
    logLevelIsSet_ = false;
}

}
}
}
}
}


