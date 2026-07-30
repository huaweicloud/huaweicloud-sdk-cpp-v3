

#include "huaweicloud/modelarts/v1/model/ListPluginTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPluginTemplatesResponse::ListPluginTemplatesResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    itemsIsSet_ = false;
}

ListPluginTemplatesResponse::~ListPluginTemplatesResponse() = default;

void ListPluginTemplatesResponse::validate()
{
}

web::json::value ListPluginTemplatesResponse::toJson() const
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
bool ListPluginTemplatesResponse::fromJson(const web::json::value& val)
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
            std::vector<PluginTemplateV2> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListPluginTemplatesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListPluginTemplatesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListPluginTemplatesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListPluginTemplatesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListPluginTemplatesResponse::getKind() const
{
    return kind_;
}

void ListPluginTemplatesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListPluginTemplatesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListPluginTemplatesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::vector<PluginTemplateV2>& ListPluginTemplatesResponse::getItems()
{
    return items_;
}

void ListPluginTemplatesResponse::setItems(const std::vector<PluginTemplateV2>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListPluginTemplatesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListPluginTemplatesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


