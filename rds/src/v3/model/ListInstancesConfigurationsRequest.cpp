

#include "huaweicloud/rds/v3/model/ListInstancesConfigurationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListInstancesConfigurationsRequest::ListInstancesConfigurationsRequest()
{
    configId_ = "";
    configIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ListInstancesConfigurationsRequest::~ListInstancesConfigurationsRequest() = default;

void ListInstancesConfigurationsRequest::validate()
{
}

web::json::value ListInstancesConfigurationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configIdIsSet_) {
        val[utility::conversions::to_string_t("config_id")] = ModelBase::toJson(configId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ListInstancesConfigurationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("config_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ListInstancesConfigurationsRequest::getConfigId() const
{
    return configId_;
}

void ListInstancesConfigurationsRequest::setConfigId(const std::string& value)
{
    configId_ = value;
    configIdIsSet_ = true;
}

bool ListInstancesConfigurationsRequest::configIdIsSet() const
{
    return configIdIsSet_;
}

void ListInstancesConfigurationsRequest::unsetconfigId()
{
    configIdIsSet_ = false;
}

int32_t ListInstancesConfigurationsRequest::getOffset() const
{
    return offset_;
}

void ListInstancesConfigurationsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListInstancesConfigurationsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListInstancesConfigurationsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListInstancesConfigurationsRequest::getLimit() const
{
    return limit_;
}

void ListInstancesConfigurationsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListInstancesConfigurationsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListInstancesConfigurationsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListInstancesConfigurationsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListInstancesConfigurationsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListInstancesConfigurationsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListInstancesConfigurationsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


