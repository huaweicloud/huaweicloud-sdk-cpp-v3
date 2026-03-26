

#include "huaweicloud/gaussdb/v3/model/HtapDeleteLTSConfigRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapDeleteLTSConfigRequestBody::HtapDeleteLTSConfigRequestBody()
{
    logConfigsIsSet_ = false;
}

HtapDeleteLTSConfigRequestBody::~HtapDeleteLTSConfigRequestBody() = default;

void HtapDeleteLTSConfigRequestBody::validate()
{
}

web::json::value HtapDeleteLTSConfigRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool HtapDeleteLTSConfigRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapDeleteLTSConfigRequestBody_log_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<HtapDeleteLTSConfigRequestBody_log_configs>& HtapDeleteLTSConfigRequestBody::getLogConfigs()
{
    return logConfigs_;
}

void HtapDeleteLTSConfigRequestBody::setLogConfigs(const std::vector<HtapDeleteLTSConfigRequestBody_log_configs>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool HtapDeleteLTSConfigRequestBody::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void HtapDeleteLTSConfigRequestBody::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


