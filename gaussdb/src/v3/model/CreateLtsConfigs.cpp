

#include "huaweicloud/gaussdb/v3/model/CreateLtsConfigs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateLtsConfigs::CreateLtsConfigs()
{
    logConfigsIsSet_ = false;
}

CreateLtsConfigs::~CreateLtsConfigs() = default;

void CreateLtsConfigs::validate()
{
}

web::json::value CreateLtsConfigs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }

    return val;
}
bool CreateLtsConfigs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceSaveLtsConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    return ok;
}


std::vector<InstanceSaveLtsConfig>& CreateLtsConfigs::getLogConfigs()
{
    return logConfigs_;
}

void CreateLtsConfigs::setLogConfigs(const std::vector<InstanceSaveLtsConfig>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool CreateLtsConfigs::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void CreateLtsConfigs::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

}
}
}
}
}


