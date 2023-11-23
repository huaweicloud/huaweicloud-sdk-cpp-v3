

#include "huaweicloud/dds/v3/model/ListLtsConfigsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListLtsConfigsResponse::ListLtsConfigsResponse()
{
    instanceLtsConfigsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListLtsConfigsResponse::~ListLtsConfigsResponse() = default;

void ListLtsConfigsResponse::validate()
{
}

web::json::value ListLtsConfigsResponse::toJson() const
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
bool ListLtsConfigsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_lts_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_lts_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<ListLtsLogPolicyRespondBody_instance_lts_configs> refVal;
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


std::vector<ListLtsLogPolicyRespondBody_instance_lts_configs>& ListLtsConfigsResponse::getInstanceLtsConfigs()
{
    return instanceLtsConfigs_;
}

void ListLtsConfigsResponse::setInstanceLtsConfigs(const std::vector<ListLtsLogPolicyRespondBody_instance_lts_configs>& value)
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

}
}
}
}
}


