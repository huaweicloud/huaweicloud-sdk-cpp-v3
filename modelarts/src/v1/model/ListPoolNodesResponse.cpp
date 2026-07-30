

#include "huaweicloud/modelarts/v1/model/ListPoolNodesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListPoolNodesResponse::ListPoolNodesResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
}

ListPoolNodesResponse::~ListPoolNodesResponse() = default;

void ListPoolNodesResponse::validate()
{
}

web::json::value ListPoolNodesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(apiVersionIsSet_) {
        val[utility::conversions::to_string_t("apiVersion")] = ModelBase::toJson(apiVersion_);
    }
    if(kindIsSet_) {
        val[utility::conversions::to_string_t("kind")] = ModelBase::toJson(kind_);
    }
    if(metadataIsSet_) {
        val[utility::conversions::to_string_t("metadata")] = ModelBase::toJson(metadata_);
    }
    if(itemsIsSet_) {
        val[utility::conversions::to_string_t("items")] = ModelBase::toJson(items_);
    }

    return val;
}
bool ListPoolNodesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("metadata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metadata"));
        if(!fieldValue.is_null())
        {
            NodeListMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
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


std::string ListPoolNodesResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListPoolNodesResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListPoolNodesResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListPoolNodesResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListPoolNodesResponse::getKind() const
{
    return kind_;
}

void ListPoolNodesResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListPoolNodesResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListPoolNodesResponse::unsetkind()
{
    kindIsSet_ = false;
}

NodeListMetadata ListPoolNodesResponse::getMetadata() const
{
    return metadata_;
}

void ListPoolNodesResponse::setMetadata(const NodeListMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListPoolNodesResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListPoolNodesResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<Node>& ListPoolNodesResponse::getItems()
{
    return items_;
}

void ListPoolNodesResponse::setItems(const std::vector<Node>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListPoolNodesResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListPoolNodesResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


