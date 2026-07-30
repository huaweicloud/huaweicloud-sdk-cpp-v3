

#include "huaweicloud/modelarts/v1/model/ListNetworksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListNetworksResponse::ListNetworksResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
}

ListNetworksResponse::~ListNetworksResponse() = default;

void ListNetworksResponse::validate()
{
}

web::json::value ListNetworksResponse::toJson() const
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
bool ListNetworksResponse::fromJson(const web::json::value& val)
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
            NetworkListMetadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<Network> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListNetworksResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListNetworksResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListNetworksResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListNetworksResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListNetworksResponse::getKind() const
{
    return kind_;
}

void ListNetworksResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListNetworksResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListNetworksResponse::unsetkind()
{
    kindIsSet_ = false;
}

NetworkListMetadata ListNetworksResponse::getMetadata() const
{
    return metadata_;
}

void ListNetworksResponse::setMetadata(const NetworkListMetadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListNetworksResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListNetworksResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<Network>& ListNetworksResponse::getItems()
{
    return items_;
}

void ListNetworksResponse::setItems(const std::vector<Network>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListNetworksResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListNetworksResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


