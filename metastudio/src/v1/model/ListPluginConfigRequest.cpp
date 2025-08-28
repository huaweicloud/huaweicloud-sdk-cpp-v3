

#include "huaweicloud/metastudio/v1/model/ListPluginConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ListPluginConfigRequest::ListPluginConfigRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    xProjectId_ = "";
    xProjectIdIsSet_ = false;
    xAppUserId_ = "";
    xAppUserIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    pluginProvider_ = "";
    pluginProviderIsSet_ = false;
    pluginType_ = "";
    pluginTypeIsSet_ = false;
}

ListPluginConfigRequest::~ListPluginConfigRequest() = default;

void ListPluginConfigRequest::validate()
{
}

web::json::value ListPluginConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(xProjectIdIsSet_) {
        val[utility::conversions::to_string_t("X-Project-Id")] = ModelBase::toJson(xProjectId_);
    }
    if(xAppUserIdIsSet_) {
        val[utility::conversions::to_string_t("X-App-UserId")] = ModelBase::toJson(xAppUserId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(pluginProviderIsSet_) {
        val[utility::conversions::to_string_t("plugin_provider")] = ModelBase::toJson(pluginProvider_);
    }
    if(pluginTypeIsSet_) {
        val[utility::conversions::to_string_t("plugin_type")] = ModelBase::toJson(pluginType_);
    }

    return val;
}
bool ListPluginConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Project-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Project-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-App-UserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-App-UserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAppUserId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("plugin_provider"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_provider"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginProvider(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginType(refVal);
        }
    }
    return ok;
}


std::string ListPluginConfigRequest::getAuthorization() const
{
    return authorization_;
}

void ListPluginConfigRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListPluginConfigRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListPluginConfigRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListPluginConfigRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListPluginConfigRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListPluginConfigRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListPluginConfigRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListPluginConfigRequest::getXProjectId() const
{
    return xProjectId_;
}

void ListPluginConfigRequest::setXProjectId(const std::string& value)
{
    xProjectId_ = value;
    xProjectIdIsSet_ = true;
}

bool ListPluginConfigRequest::xProjectIdIsSet() const
{
    return xProjectIdIsSet_;
}

void ListPluginConfigRequest::unsetxProjectId()
{
    xProjectIdIsSet_ = false;
}

std::string ListPluginConfigRequest::getXAppUserId() const
{
    return xAppUserId_;
}

void ListPluginConfigRequest::setXAppUserId(const std::string& value)
{
    xAppUserId_ = value;
    xAppUserIdIsSet_ = true;
}

bool ListPluginConfigRequest::xAppUserIdIsSet() const
{
    return xAppUserIdIsSet_;
}

void ListPluginConfigRequest::unsetxAppUserId()
{
    xAppUserIdIsSet_ = false;
}

int32_t ListPluginConfigRequest::getOffset() const
{
    return offset_;
}

void ListPluginConfigRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPluginConfigRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPluginConfigRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPluginConfigRequest::getLimit() const
{
    return limit_;
}

void ListPluginConfigRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPluginConfigRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListPluginConfigRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListPluginConfigRequest::getPluginProvider() const
{
    return pluginProvider_;
}

void ListPluginConfigRequest::setPluginProvider(const std::string& value)
{
    pluginProvider_ = value;
    pluginProviderIsSet_ = true;
}

bool ListPluginConfigRequest::pluginProviderIsSet() const
{
    return pluginProviderIsSet_;
}

void ListPluginConfigRequest::unsetpluginProvider()
{
    pluginProviderIsSet_ = false;
}

std::string ListPluginConfigRequest::getPluginType() const
{
    return pluginType_;
}

void ListPluginConfigRequest::setPluginType(const std::string& value)
{
    pluginType_ = value;
    pluginTypeIsSet_ = true;
}

bool ListPluginConfigRequest::pluginTypeIsSet() const
{
    return pluginTypeIsSet_;
}

void ListPluginConfigRequest::unsetpluginType()
{
    pluginTypeIsSet_ = false;
}

}
}
}
}
}


