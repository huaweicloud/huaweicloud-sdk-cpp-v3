

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlConfigurationsResponse::ListGaussMySqlConfigurationsResponse()
{
    configurationsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListGaussMySqlConfigurationsResponse::~ListGaussMySqlConfigurationsResponse() = default;

void ListGaussMySqlConfigurationsResponse::validate()
{
}

web::json::value ListGaussMySqlConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListGaussMySqlConfigurationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
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


std::vector<ConfigurationSummary>& ListGaussMySqlConfigurationsResponse::getConfigurations()
{
    return configurations_;
}

void ListGaussMySqlConfigurationsResponse::setConfigurations(const std::vector<ConfigurationSummary>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ListGaussMySqlConfigurationsResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ListGaussMySqlConfigurationsResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

int32_t ListGaussMySqlConfigurationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListGaussMySqlConfigurationsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListGaussMySqlConfigurationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListGaussMySqlConfigurationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


