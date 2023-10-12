

#include "huaweicloud/gaussdbfornosql/v3/model/ListConfigurationTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListConfigurationTemplatesResponse::ListConfigurationTemplatesResponse()
{
    count_ = 0;
    countIsSet_ = false;
    quota_ = 0;
    quotaIsSet_ = false;
    configurationsIsSet_ = false;
}

ListConfigurationTemplatesResponse::~ListConfigurationTemplatesResponse() = default;

void ListConfigurationTemplatesResponse::validate()
{
}

web::json::value ListConfigurationTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(quotaIsSet_) {
        val[utility::conversions::to_string_t("quota")] = ModelBase::toJson(quota_);
    }
    if(configurationsIsSet_) {
        val[utility::conversions::to_string_t("configurations")] = ModelBase::toJson(configurations_);
    }

    return val;
}
bool ListConfigurationTemplatesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quota"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quota"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuota(refVal);
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


int32_t ListConfigurationTemplatesResponse::getCount() const
{
    return count_;
}

void ListConfigurationTemplatesResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ListConfigurationTemplatesResponse::countIsSet() const
{
    return countIsSet_;
}

void ListConfigurationTemplatesResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ListConfigurationTemplatesResponse::getQuota() const
{
    return quota_;
}

void ListConfigurationTemplatesResponse::setQuota(int32_t value)
{
    quota_ = value;
    quotaIsSet_ = true;
}

bool ListConfigurationTemplatesResponse::quotaIsSet() const
{
    return quotaIsSet_;
}

void ListConfigurationTemplatesResponse::unsetquota()
{
    quotaIsSet_ = false;
}

std::vector<ListConfigurationsResult>& ListConfigurationTemplatesResponse::getConfigurations()
{
    return configurations_;
}

void ListConfigurationTemplatesResponse::setConfigurations(const std::vector<ListConfigurationsResult>& value)
{
    configurations_ = value;
    configurationsIsSet_ = true;
}

bool ListConfigurationTemplatesResponse::configurationsIsSet() const
{
    return configurationsIsSet_;
}

void ListConfigurationTemplatesResponse::unsetconfigurations()
{
    configurationsIsSet_ = false;
}

}
}
}
}
}


