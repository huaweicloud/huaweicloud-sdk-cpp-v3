

#include "huaweicloud/rds/v3/model/ListLogLtsConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListLogLtsConfigsResponse::ListLogLtsConfigsResponse()
{
    instanceLtsConfigsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListLogLtsConfigsResponse::~ListLogLtsConfigsResponse() = default;

void ListLogLtsConfigsResponse::validate()
{
}

web::json::value ListLogLtsConfigsResponse::toJson() const
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
bool ListLogLtsConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceLtsConfigResp> refVal;
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


std::vector<InstanceLtsConfigResp>& ListLogLtsConfigsResponse::getInstanceLtsConfigs()
{
    return instanceLtsConfigs_;
}

void ListLogLtsConfigsResponse::setInstanceLtsConfigs(const std::vector<InstanceLtsConfigResp>& value)
{
    instanceLtsConfigs_ = value;
    instanceLtsConfigsIsSet_ = true;
}

bool ListLogLtsConfigsResponse::instanceLtsConfigsIsSet() const
{
    return instanceLtsConfigsIsSet_;
}

void ListLogLtsConfigsResponse::unsetinstanceLtsConfigs()
{
    instanceLtsConfigsIsSet_ = false;
}

int32_t ListLogLtsConfigsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListLogLtsConfigsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListLogLtsConfigsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListLogLtsConfigsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


