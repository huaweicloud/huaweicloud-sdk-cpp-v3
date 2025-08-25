

#include "huaweicloud/cce/v3/model/ListAddonTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAddonTemplatesResponse::ListAddonTemplatesResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListAddonTemplatesResponse::~ListAddonTemplatesResponse() = default;

void ListAddonTemplatesResponse::validate()
{
}

web::json::value ListAddonTemplatesResponse::toJson() const
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
bool ListAddonTemplatesResponse::fromJson(const web::json::value& val)
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


std::string ListAddonTemplatesResponse::getKind() const
{
    return kind_;
}

void ListAddonTemplatesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAddonTemplatesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAddonTemplatesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAddonTemplatesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAddonTemplatesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAddonTemplatesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAddonTemplatesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<AddonTemplate>& ListAddonTemplatesResponse::getItems()
{
    return items_;
}

void ListAddonTemplatesResponse::setItems(const std::vector<AddonTemplate>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAddonTemplatesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAddonTemplatesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


