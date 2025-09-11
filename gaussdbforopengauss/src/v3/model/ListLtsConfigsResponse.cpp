

#include "huaweicloud/gaussdbforopengauss/v3/model/ListLtsConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListLtsConfigsResponse::ListLtsConfigsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    instanceLtsConfigsIsSet_ = false;
}

ListLtsConfigsResponse::~ListLtsConfigsResponse() = default;

void ListLtsConfigsResponse::validate()
{
}

web::json::value ListLtsConfigsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(instanceLtsConfigsIsSet_) {
        val[utility::conversions::to_string_t("instance_lts_configs")] = ModelBase::toJson(instanceLtsConfigs_);
    }

    return val;
}
bool ListLtsConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<InstanceLtsLogConfigResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceLtsConfigs(refVal);
        }
    }
    return ok;
}


int32_t ListLtsConfigsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListLtsConfigsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListLtsConfigsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListLtsConfigsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<InstanceLtsLogConfigResult>& ListLtsConfigsResponse::getInstanceLtsConfigs()
{
    return instanceLtsConfigs_;
}

void ListLtsConfigsResponse::setInstanceLtsConfigs(const std::vector<InstanceLtsLogConfigResult>& value)
{
    instanceLtsConfigs_ = value;
    instanceLtsConfigsIsSet_ = true;
}

bool ListLtsConfigsResponse::instanceLtsConfigsIsSet() const
{
    return instanceLtsConfigsIsSet_;
}

void ListLtsConfigsResponse::unsetinstanceLtsConfigs()
{
    instanceLtsConfigsIsSet_ = false;
}

}
}
}
}
}


