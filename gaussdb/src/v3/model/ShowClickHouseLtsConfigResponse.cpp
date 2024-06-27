

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseLtsConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseLtsConfigResponse::ShowClickHouseLtsConfigResponse()
{
    instanceLtsConfigsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowClickHouseLtsConfigResponse::~ShowClickHouseLtsConfigResponse() = default;

void ShowClickHouseLtsConfigResponse::validate()
{
}

web::json::value ShowClickHouseLtsConfigResponse::toJson() const
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
bool ShowClickHouseLtsConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ChInstanceLtsConfigs> refVal;
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


std::vector<ChInstanceLtsConfigs>& ShowClickHouseLtsConfigResponse::getInstanceLtsConfigs()
{
    return instanceLtsConfigs_;
}

void ShowClickHouseLtsConfigResponse::setInstanceLtsConfigs(const std::vector<ChInstanceLtsConfigs>& value)
{
    instanceLtsConfigs_ = value;
    instanceLtsConfigsIsSet_ = true;
}

bool ShowClickHouseLtsConfigResponse::instanceLtsConfigsIsSet() const
{
    return instanceLtsConfigsIsSet_;
}

void ShowClickHouseLtsConfigResponse::unsetinstanceLtsConfigs()
{
    instanceLtsConfigsIsSet_ = false;
}

int32_t ShowClickHouseLtsConfigResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowClickHouseLtsConfigResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowClickHouseLtsConfigResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowClickHouseLtsConfigResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


