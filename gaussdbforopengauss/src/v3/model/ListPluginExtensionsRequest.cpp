

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPluginExtensionsRequest::ListPluginExtensionsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
}

ListPluginExtensionsRequest::~ListPluginExtensionsRequest() = default;

void ListPluginExtensionsRequest::validate()
{
}

web::json::value ListPluginExtensionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }

    return val;
}
bool ListPluginExtensionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plugin_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plugin_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPluginName(refVal);
        }
    }
    return ok;
}


std::string ListPluginExtensionsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListPluginExtensionsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListPluginExtensionsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListPluginExtensionsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListPluginExtensionsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListPluginExtensionsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListPluginExtensionsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListPluginExtensionsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ListPluginExtensionsRequest::getDbName() const
{
    return dbName_;
}

void ListPluginExtensionsRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListPluginExtensionsRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListPluginExtensionsRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListPluginExtensionsRequest::getPluginName() const
{
    return pluginName_;
}

void ListPluginExtensionsRequest::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ListPluginExtensionsRequest::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ListPluginExtensionsRequest::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

}
}
}
}
}


