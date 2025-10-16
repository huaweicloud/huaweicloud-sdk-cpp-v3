

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPluginInfoListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPluginInfoListResponse::ListPluginInfoListResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    pluginsIsSet_ = false;
}

ListPluginInfoListResponse::~ListPluginInfoListResponse() = default;

void ListPluginInfoListResponse::validate()
{
}

web::json::value ListPluginInfoListResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(pluginsIsSet_) {
        val[utility::conversions::to_string_t("plugins")] = ModelBase::toJson(plugins_);
    }

    return val;
}
bool ListPluginInfoListResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("plugins"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugins"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomerPluginInfoResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlugins(refVal);
        }
    }
    return ok;
}


int32_t ListPluginInfoListResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPluginInfoListResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPluginInfoListResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPluginInfoListResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<CustomerPluginInfoResult>& ListPluginInfoListResponse::getPlugins()
{
    return plugins_;
}

void ListPluginInfoListResponse::setPlugins(const std::vector<CustomerPluginInfoResult>& value)
{
    plugins_ = value;
    pluginsIsSet_ = true;
}

bool ListPluginInfoListResponse::pluginsIsSet() const
{
    return pluginsIsSet_;
}

void ListPluginInfoListResponse::unsetplugins()
{
    pluginsIsSet_ = false;
}

}
}
}
}
}


