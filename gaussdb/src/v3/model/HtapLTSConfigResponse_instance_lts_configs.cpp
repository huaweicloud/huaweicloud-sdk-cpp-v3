

#include "huaweicloud/gaussdb/v3/model/HtapLTSConfigResponse_instance_lts_configs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




HtapLTSConfigResponse_instance_lts_configs::HtapLTSConfigResponse_instance_lts_configs()
{
    ltsConfigsIsSet_ = false;
    instanceIsSet_ = false;
}

HtapLTSConfigResponse_instance_lts_configs::~HtapLTSConfigResponse_instance_lts_configs() = default;

void HtapLTSConfigResponse_instance_lts_configs::validate()
{
}

web::json::value HtapLTSConfigResponse_instance_lts_configs::toJson() const
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
bool HtapLTSConfigResponse_instance_lts_configs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapLTSConfigResponse_lts_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance"));
        if(!fieldValue.is_null())
        {
            HtapLTSConfigResponse_instance refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstance(refVal);
        }
    }
    return ok;
}


std::vector<HtapLTSConfigResponse_lts_configs>& HtapLTSConfigResponse_instance_lts_configs::getLtsConfigs()
{
    return ltsConfigs_;
}

void HtapLTSConfigResponse_instance_lts_configs::setLtsConfigs(const std::vector<HtapLTSConfigResponse_lts_configs>& value)
{
    ltsConfigs_ = value;
    ltsConfigsIsSet_ = true;
}

bool HtapLTSConfigResponse_instance_lts_configs::ltsConfigsIsSet() const
{
    return ltsConfigsIsSet_;
}

void HtapLTSConfigResponse_instance_lts_configs::unsetltsConfigs()
{
    ltsConfigsIsSet_ = false;
}

HtapLTSConfigResponse_instance HtapLTSConfigResponse_instance_lts_configs::getInstance() const
{
    return instance_;
}

void HtapLTSConfigResponse_instance_lts_configs::setInstance(const HtapLTSConfigResponse_instance& value)
{
    instance_ = value;
    instanceIsSet_ = true;
}

bool HtapLTSConfigResponse_instance_lts_configs::instanceIsSet() const
{
    return instanceIsSet_;
}

void HtapLTSConfigResponse_instance_lts_configs::unsetinstance()
{
    instanceIsSet_ = false;
}

}
}
}
}
}


