

#include "huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListConfigurationsResponse::ListConfigurationsResponse()
{
    count_ = 0;
    countIsSet_ = false;
    configurationsIsSet_ = false;
}

ListConfigurationsResponse::~ListConfigurationsResponse() = default;

void ListConfigurationsResponse::validate()
{
}

web::json::value ListConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}

bool ListConfigurationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigurationSummary> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}

int32_t ListConfigurationsResponse::getCount() const
{
    return count_;
}

void ListConfigurationsResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListConfigurationsResponse::countIsSet() const
{
    return countIsSet_;
}

void ListConfigurationsResponse::unsetcount()
{
    countIsSet_ = false;
}

std::vector<ConfigurationSummary>& ListConfigurationsResponse::getConfigurations()
{
    return configurations_;
}

void ListConfigurationsResponse::setConfigurations(const std::vector<ConfigurationSummary>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ListConfigurationsResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ListConfigurationsResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


