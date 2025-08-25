

#include "huaweicloud/cce/v3/model/ListAutopilotAddonInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotAddonInstancesResponse::ListAutopilotAddonInstancesResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListAutopilotAddonInstancesResponse::~ListAutopilotAddonInstancesResponse() = default;

void ListAutopilotAddonInstancesResponse::validate()
{
}

web::json::value ListAutopilotAddonInstancesResponse::toJson() const
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
bool ListAutopilotAddonInstancesResponse::fromJson(const web::json::value& val)
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


std::string ListAutopilotAddonInstancesResponse::getKind() const
{
    return kind_;
}

void ListAutopilotAddonInstancesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotAddonInstancesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotAddonInstancesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAutopilotAddonInstancesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotAddonInstancesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotAddonInstancesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotAddonInstancesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<AddonInstance>& ListAutopilotAddonInstancesResponse::getItems()
{
    return items_;
}

void ListAutopilotAddonInstancesResponse::setItems(const std::vector<AddonInstance>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAutopilotAddonInstancesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAutopilotAddonInstancesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


