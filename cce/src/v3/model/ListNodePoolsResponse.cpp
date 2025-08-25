

#include "huaweicloud/cce/v3/model/ListNodePoolsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListNodePoolsResponse::ListNodePoolsResponse()
{
    kind_ = "";
    kindIsSet_ = false;
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    itemsIsSet_ = false;
}

ListNodePoolsResponse::~ListNodePoolsResponse() = default;

void ListNodePoolsResponse::validate()
{
}

web::json::value ListNodePoolsResponse::toJson() const
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
bool ListNodePoolsResponse::fromJson(const web::json::value& val)
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
            std::vector<NodePoolResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListNodePoolsResponse::getKind() const
{
    return kind_;
}

void ListNodePoolsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListNodePoolsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListNodePoolsResponse::unsetkind()
{
    kindIsSet_ = false;
}

std::string ListNodePoolsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListNodePoolsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListNodePoolsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListNodePoolsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::vector<NodePoolResp>& ListNodePoolsResponse::getItems()
{
    return items_;
}

void ListNodePoolsResponse::setItems(const std::vector<NodePoolResp>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListNodePoolsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListNodePoolsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


