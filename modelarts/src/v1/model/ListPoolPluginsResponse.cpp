

#include "huaweicloud/modelarts/v1/model/ListPoolPluginsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolPluginsResponse::ListPoolPluginsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    itemsIsSet_ = false;
}

ListPoolPluginsResponse::~ListPoolPluginsResponse() = default;

void ListPoolPluginsResponse::validate()
{
}

web::json::value ListPoolPluginsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListPoolPluginsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<Plugin> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListPoolPluginsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListPoolPluginsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListPoolPluginsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListPoolPluginsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListPoolPluginsResponse::getKind() const
{
    return kind_;
}

void ListPoolPluginsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListPoolPluginsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListPoolPluginsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<Plugin>& ListPoolPluginsResponse::getItems()
{
    return items_;
}

void ListPoolPluginsResponse::setItems(const std::vector<Plugin>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListPoolPluginsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListPoolPluginsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


