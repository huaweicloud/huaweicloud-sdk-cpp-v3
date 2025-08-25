

#include "huaweicloud/cce/v3/model/ListAddonInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAddonInstancesResponse::ListAddonInstancesResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListAddonInstancesResponse::~ListAddonInstancesResponse() = default;

void ListAddonInstancesResponse::validate()
{
}

web::json::value ListAddonInstancesResponse::toJson() const
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
bool ListAddonInstancesResponse::fromJson(const web::json::value& val)
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
            std::vector<AddonInstance> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListAddonInstancesResponse::getKind() const
{
    return kind_;
}

void ListAddonInstancesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAddonInstancesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAddonInstancesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAddonInstancesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAddonInstancesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAddonInstancesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAddonInstancesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<AddonInstance>& ListAddonInstancesResponse::getItems()
{
    return items_;
}

void ListAddonInstancesResponse::setItems(const std::vector<AddonInstance>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAddonInstancesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAddonInstancesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


