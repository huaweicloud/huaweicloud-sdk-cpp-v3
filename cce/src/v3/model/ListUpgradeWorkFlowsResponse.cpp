

#include "huaweicloud/cce/v3/model/ListUpgradeWorkFlowsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListUpgradeWorkFlowsResponse::ListUpgradeWorkFlowsResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListUpgradeWorkFlowsResponse::~ListUpgradeWorkFlowsResponse() = default;

void ListUpgradeWorkFlowsResponse::validate()
{
}

web::json::value ListUpgradeWorkFlowsResponse::toJson() const
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
bool ListUpgradeWorkFlowsResponse::fromJson(const web::json::value& val)
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


std::string ListUpgradeWorkFlowsResponse::getKind() const
{
    return kind_;
}

void ListUpgradeWorkFlowsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListUpgradeWorkFlowsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListUpgradeWorkFlowsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListUpgradeWorkFlowsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListUpgradeWorkFlowsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListUpgradeWorkFlowsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListUpgradeWorkFlowsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

UpgradeWorkFlow ListUpgradeWorkFlowsResponse::getItems() const
{
    return items_;
}

void ListUpgradeWorkFlowsResponse::setItems(const UpgradeWorkFlow& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListUpgradeWorkFlowsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListUpgradeWorkFlowsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


