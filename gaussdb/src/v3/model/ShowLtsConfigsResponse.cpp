

#include "huaweicloud/gaussdb/v3/model/ShowLtsConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowLtsConfigsResponse::ShowLtsConfigsResponse()
{
    instanceLtsConfigsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowLtsConfigsResponse::~ShowLtsConfigsResponse() = default;

void ShowLtsConfigsResponse::validate()
{
}

web::json::value ShowLtsConfigsResponse::toJson() const
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
bool ShowLtsConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<LtsConfigsV3> refVal;
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


std::vector<LtsConfigsV3>& ShowLtsConfigsResponse::getInstanceLtsConfigs()
{
    return instanceLtsConfigs_;
}

void ShowLtsConfigsResponse::setInstanceLtsConfigs(const std::vector<LtsConfigsV3>& value)
{
    instanceLtsConfigs_ = value;
    instanceLtsConfigsIsSet_ = true;
}

bool ShowLtsConfigsResponse::instanceLtsConfigsIsSet() const
{
    return instanceLtsConfigsIsSet_;
}

void ShowLtsConfigsResponse::unsetinstanceLtsConfigs()
{
    instanceLtsConfigsIsSet_ = false;
}

int32_t ShowLtsConfigsResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowLtsConfigsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowLtsConfigsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowLtsConfigsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


