

#include "huaweicloud/gaussdb/v3/model/ListConfigurationsInstancesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListConfigurationsInstancesRequest::ListConfigurationsInstancesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    configurationId_ = "";
    configurationIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListConfigurationsInstancesRequest::~ListConfigurationsInstancesRequest() = default;

void ListConfigurationsInstancesRequest::validate()
{
}

web::json::value ListConfigurationsInstancesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(configurationIdIsSet_) {
        val[utility::conversions::to_string_t("configuration_id")] = ModelBase::toJson(configurationId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListConfigurationsInstancesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configuration_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configuration_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListConfigurationsInstancesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListConfigurationsInstancesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListConfigurationsInstancesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListConfigurationsInstancesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListConfigurationsInstancesRequest::getConfigurationId() const
{
    return configurationId_;
}

void ListConfigurationsInstancesRequest::setConfigurationId(const std::string& value)
{
    configurationId_ = value;
    configurationIdIsSet_ = true;
}

bool ListConfigurationsInstancesRequest::configurationIdIsSet() const
{
    return configurationIdIsSet_;
}

void ListConfigurationsInstancesRequest::unsetconfigurationId()
{
    configurationIdIsSet_ = false;
}

int32_t ListConfigurationsInstancesRequest::getOffset() const
{
    return offset_;
}

void ListConfigurationsInstancesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListConfigurationsInstancesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListConfigurationsInstancesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListConfigurationsInstancesRequest::getLimit() const
{
    return limit_;
}

void ListConfigurationsInstancesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListConfigurationsInstancesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListConfigurationsInstancesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


