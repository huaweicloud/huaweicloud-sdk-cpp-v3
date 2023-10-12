

#include "huaweicloud/dds/v3/model/ListConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListConfigurationsResponse::ListConfigurationsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    configurationsIsSet_ = false;
}

ListConfigurationsResponse::~ListConfigurationsResponse() = default;

void ListConfigurationsResponse::validate()
{
}

web::json::value ListConfigurationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool ListConfigurationsResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("configurations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurations"));
        if(!fieldValue.is_null())
        {
            std::vector<ListConfigurationsResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurations(refVal);
        }
    }
    return ok;
}


int32_t ListConfigurationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListConfigurationsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListConfigurationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListConfigurationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ListConfigurationsResult>& ListConfigurationsResponse::getConfigurations()
{
    return configurations_;
}

void ListConfigurationsResponse::setConfigurations(const std::vector<ListConfigurationsResult>& value)
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


