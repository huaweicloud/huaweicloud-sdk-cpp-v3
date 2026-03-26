

#include "huaweicloud/gaussdb/v3/model/HtapCreateLTSConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapCreateLTSConfigRequestBody::HtapCreateLTSConfigRequestBody()
{
    logConfigsIsSet_ = false;
}

HtapCreateLTSConfigRequestBody::~HtapCreateLTSConfigRequestBody() = default;

void HtapCreateLTSConfigRequestBody::validate()
{
}

web::json::value HtapCreateLTSConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool HtapCreateLTSConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapCreateLTSConfigRequestBody_log_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<HtapCreateLTSConfigRequestBody_log_configs>& HtapCreateLTSConfigRequestBody::getLogConfigs()
{
    return logConfigs_;
}

void HtapCreateLTSConfigRequestBody::setLogConfigs(const std::vector<HtapCreateLTSConfigRequestBody_log_configs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool HtapCreateLTSConfigRequestBody::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void HtapCreateLTSConfigRequestBody::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


