

#include "huaweicloud/cce/v3/model/ListAutopilotUpgradePlansResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotUpgradePlansResponse::ListAutopilotUpgradePlansResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListAutopilotUpgradePlansResponse::~ListAutopilotUpgradePlansResponse() = default;

void ListAutopilotUpgradePlansResponse::validate()
{
}

web::json::value ListAutopilotUpgradePlansResponse::toJson() const
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
bool ListAutopilotUpgradePlansResponse::fromJson(const web::json::value& val)
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
            UpgradePlan refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotUpgradePlansResponse::getKind() const
{
    return kind_;
}

void ListAutopilotUpgradePlansResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotUpgradePlansResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotUpgradePlansResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAutopilotUpgradePlansResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotUpgradePlansResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotUpgradePlansResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotUpgradePlansResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

UpgradePlan ListAutopilotUpgradePlansResponse::getItems() const
{
    return items_;
}

void ListAutopilotUpgradePlansResponse::setItems(const UpgradePlan& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAutopilotUpgradePlansResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAutopilotUpgradePlansResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


