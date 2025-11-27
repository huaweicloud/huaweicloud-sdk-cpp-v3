

#include "huaweicloud/dds/v3/model/ShowInstanceConfigurationModifyHistoryResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ShowInstanceConfigurationModifyHistoryResponse::ShowInstanceConfigurationModifyHistoryResponse()
{
    historiesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ShowInstanceConfigurationModifyHistoryResponse::~ShowInstanceConfigurationModifyHistoryResponse() = default;

void ShowInstanceConfigurationModifyHistoryResponse::validate()
{
}

web::json::value ShowInstanceConfigurationModifyHistoryResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(historiesIsSet_) {
        val[utility::conversions::to_string_t("histories")] = ModelBase::toJson(histories_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ShowInstanceConfigurationModifyHistoryResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("histories"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("histories"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationModifyHistoryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHistories(refVal);
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


std::vector<ConfigurationModifyHistoryInfo>& ShowInstanceConfigurationModifyHistoryResponse::getHistories()
{
    return histories_;
}

void ShowInstanceConfigurationModifyHistoryResponse::setHistories(const std::vector<ConfigurationModifyHistoryInfo>& value)
{
    histories_ = value;
    historiesIsSet_ = true;
}

bool ShowInstanceConfigurationModifyHistoryResponse::historiesIsSet() const
{
    return historiesIsSet_;
}

void ShowInstanceConfigurationModifyHistoryResponse::unsethistories()
{
    historiesIsSet_ = false;
}

int32_t ShowInstanceConfigurationModifyHistoryResponse::getTotalCount() const
{
    return totalCount_;
}

void ShowInstanceConfigurationModifyHistoryResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ShowInstanceConfigurationModifyHistoryResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ShowInstanceConfigurationModifyHistoryResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


