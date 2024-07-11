

#include "huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListPluginExtensionsRequestBody::ListPluginExtensionsRequestBody()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    pluginName_ = "";
    pluginNameIsSet_ = false;
}

ListPluginExtensionsRequestBody::~ListPluginExtensionsRequestBody() = default;

void ListPluginExtensionsRequestBody::validate()
{
}

web::json::value ListPluginExtensionsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(pluginNameIsSet_) {
        val[utility::conversions::to_string_t("plugin_name")] = ModelBase::toJson(pluginName_);
    }

    return val;
}
bool ListPluginExtensionsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ListPluginExtensionsRequestBody::getDbName() const
{
    return dbName_;
}

void ListPluginExtensionsRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListPluginExtensionsRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListPluginExtensionsRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListPluginExtensionsRequestBody::getPluginName() const
{
    return pluginName_;
}

void ListPluginExtensionsRequestBody::setPluginName(const std::string& value)
{
    pluginName_ = value;
    pluginNameIsSet_ = true;
}

bool ListPluginExtensionsRequestBody::pluginNameIsSet() const
{
    return pluginNameIsSet_;
}

void ListPluginExtensionsRequestBody::unsetpluginName()
{
    pluginNameIsSet_ = false;
}

}
}
}
}
}


