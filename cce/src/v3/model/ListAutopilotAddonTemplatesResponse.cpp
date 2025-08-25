

#include "huaweicloud/cce/v3/model/ListAutopilotAddonTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotAddonTemplatesResponse::ListAutopilotAddonTemplatesResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListAutopilotAddonTemplatesResponse::~ListAutopilotAddonTemplatesResponse() = default;

void ListAutopilotAddonTemplatesResponse::validate()
{
}

web::json::value ListAutopilotAddonTemplatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListAutopilotAddonTemplatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("kind"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kind"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKind(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apiVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apiVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApiVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<AddonTemplate> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotAddonTemplatesResponse::getKind() const
{
    return kind_;
}

void ListAutopilotAddonTemplatesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotAddonTemplatesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotAddonTemplatesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAutopilotAddonTemplatesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotAddonTemplatesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotAddonTemplatesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotAddonTemplatesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<AddonTemplate>& ListAutopilotAddonTemplatesResponse::getItems()
{
    return items_;
}

void ListAutopilotAddonTemplatesResponse::setItems(const std::vector<AddonTemplate>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAutopilotAddonTemplatesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAutopilotAddonTemplatesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


