

#include "huaweicloud/rds/v3/model/InstanceLtsConfigResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




InstanceLtsConfigResp::InstanceLtsConfigResp()
{
    ltsConfigsIsSet_ = false;
    instanceIsSet_ = false;
}

InstanceLtsConfigResp::~InstanceLtsConfigResp() = default;

void InstanceLtsConfigResp::validate()
{
}

web::json::value InstanceLtsConfigResp::toJson() const
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
bool InstanceLtsConfigResp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceLtsConfigDetailResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            InstanceLtsBasicInfoResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}


std::vector<InstanceLtsConfigDetailResp>& InstanceLtsConfigResp::getLtsConfigs()
{
    return ltsConfigs_;
}

void InstanceLtsConfigResp::setLtsConfigs(const std::vector<InstanceLtsConfigDetailResp>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool InstanceLtsConfigResp::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void InstanceLtsConfigResp::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

InstanceLtsBasicInfoResp InstanceLtsConfigResp::getInstance() const
{
    return instance_;
}

void InstanceLtsConfigResp::setInstance(const InstanceLtsBasicInfoResp& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool InstanceLtsConfigResp::instanceIsSet() const
{
    return instanceIsSet_;
}

void InstanceLtsConfigResp::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


