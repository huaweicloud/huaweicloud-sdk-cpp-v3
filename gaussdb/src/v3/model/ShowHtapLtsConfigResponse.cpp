

#include "huaweicloud/gaussdb/v3/model/ShowHtapLtsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowHtapLtsConfigResponse::ShowHtapLtsConfigResponse()
{
    instanceLtsConfigsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowHtapLtsConfigResponse::~ShowHtapLtsConfigResponse() = default;

void ShowHtapLtsConfigResponse::validate()
{
}

web::json::value ShowHtapLtsConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceLtsConfigsIsSet_) {
        val[utility::conversions::to_string_t("instance_lts_configs")] = ModelBase::toJson(instanceLtsConfigs_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowHtapLtsConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<HtapLTSConfigResponse_instance_lts_configs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceLtsConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<HtapLTSConfigResponse_instance_lts_configs>& ShowHtapLtsConfigResponse::getInstanceLtsConfigs()
{
    return instanceLtsConfigs_;
}

void ShowHtapLtsConfigResponse::setInstanceLtsConfigs(const std::vector<HtapLTSConfigResponse_instance_lts_configs>& value)
{
    instanceLtsConfigs_ = value;
    instanceLtsConfigsIsSet_ = true;
}

bool ShowHtapLtsConfigResponse::instanceLtsConfigsIsSet() const
{
    return instanceLtsConfigsIsSet_;
}

void ShowHtapLtsConfigResponse::unsetinstanceLtsConfigs()
{
    instanceLtsConfigsIsSet_ = false;
}

int32_t ShowHtapLtsConfigResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowHtapLtsConfigResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowHtapLtsConfigResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowHtapLtsConfigResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


