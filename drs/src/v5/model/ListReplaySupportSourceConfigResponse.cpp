

#include "huaweicloud/drs/v5/model/ListReplaySupportSourceConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ListReplaySupportSourceConfigResponse::ListReplaySupportSourceConfigResponse()
{
    configListIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListReplaySupportSourceConfigResponse::~ListReplaySupportSourceConfigResponse() = default;

void ListReplaySupportSourceConfigResponse::validate()
{
}

web::json::value ListReplaySupportSourceConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configListIsSet_) {
        val[utility::conversions::to_string_t("config_list")] = ModelBase::toJson(configList_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListReplaySupportSourceConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ReplaySourceConfigResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigList(refVal);
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


std::vector<ReplaySourceConfigResp>& ListReplaySupportSourceConfigResponse::getConfigList()
{
    return configList_;
}

void ListReplaySupportSourceConfigResponse::setConfigList(const std::vector<ReplaySourceConfigResp>& value)
{
    configList_ = value;
    configListIsSet_ = true;
}

bool ListReplaySupportSourceConfigResponse::configListIsSet() const
{
    return configListIsSet_;
}

void ListReplaySupportSourceConfigResponse::unsetconfigList()
{
    configListIsSet_ = false;
}

int32_t ListReplaySupportSourceConfigResponse::getTotalCount() const
{
    return totalCount_;
}

void ListReplaySupportSourceConfigResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListReplaySupportSourceConfigResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListReplaySupportSourceConfigResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


