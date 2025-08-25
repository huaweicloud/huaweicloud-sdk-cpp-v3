

#include "huaweicloud/cce/v3/model/ListNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListNodesResponse::ListNodesResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListNodesResponse::~ListNodesResponse() = default;

void ListNodesResponse::validate()
{
}

web::json::value ListNodesResponse::toJson() const
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
bool ListNodesResponse::fromJson(const web::json::value& val)
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
            std::vector<Node> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListNodesResponse::getKind() const
{
    return kind_;
}

void ListNodesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListNodesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListNodesResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListNodesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListNodesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListNodesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListNodesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<Node>& ListNodesResponse::getItems()
{
    return items_;
}

void ListNodesResponse::setItems(const std::vector<Node>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListNodesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListNodesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


