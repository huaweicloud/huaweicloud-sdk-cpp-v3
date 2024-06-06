

#include "huaweicloud/gaussdb/v3/model/LtsConfigsV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




LtsConfigsV3::LtsConfigsV3()
{
    ltsConfigsIsSet_ = false;
    instanceIsSet_ = false;
}

LtsConfigsV3::~LtsConfigsV3() = default;

void LtsConfigsV3::validate()
{
}

web::json::value LtsConfigsV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ltsConfigsIsSet_) {
        val[utility::conversions::to_string_t("lts_configs")] = ModelBase::toJson(ltsConfigs_);
    }
    if(instanceIsSet_) {
        val[utility::conversions::to_string_t("instance")] = ModelBase::toJson(instance_);
    }

    return val;
}
bool LtsConfigsV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<LtsConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            InstanceLtsBasicInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}


std::vector<LtsConfig>& LtsConfigsV3::getLtsConfigs()
{
    return ltsConfigs_;
}

void LtsConfigsV3::setLtsConfigs(const std::vector<LtsConfig>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool LtsConfigsV3::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void LtsConfigsV3::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

InstanceLtsBasicInfo LtsConfigsV3::getInstance() const
{
    return instance_;
}

void LtsConfigsV3::setInstance(const InstanceLtsBasicInfo& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool LtsConfigsV3::instanceIsSet() const
{
    return instanceIsSet_;
}

void LtsConfigsV3::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


