

#include "huaweicloud/cce/v3/model/ListAutopilotUpgradeWorkFlowsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotUpgradeWorkFlowsResponse::ListAutopilotUpgradeWorkFlowsResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListAutopilotUpgradeWorkFlowsResponse::~ListAutopilotUpgradeWorkFlowsResponse() = default;

void ListAutopilotUpgradeWorkFlowsResponse::validate()
{
}

web::json::value ListAutopilotUpgradeWorkFlowsResponse::toJson() const
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
bool ListAutopilotUpgradeWorkFlowsResponse::fromJson(const web::json::value& val)
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
            UpgradeWorkFlow refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListAutopilotUpgradeWorkFlowsResponse::getKind() const
{
    return kind_;
}

void ListAutopilotUpgradeWorkFlowsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotUpgradeWorkFlowsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotUpgradeWorkFlowsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListAutopilotUpgradeWorkFlowsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotUpgradeWorkFlowsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotUpgradeWorkFlowsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotUpgradeWorkFlowsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

UpgradeWorkFlow ListAutopilotUpgradeWorkFlowsResponse::getItems() const
{
    return items_;
}

void ListAutopilotUpgradeWorkFlowsResponse::setItems(const UpgradeWorkFlow& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAutopilotUpgradeWorkFlowsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAutopilotUpgradeWorkFlowsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


