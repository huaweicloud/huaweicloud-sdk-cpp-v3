

#include "huaweicloud/modelarts/v1/model/ListResourceFlavorsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListResourceFlavorsResponse::ListResourceFlavorsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
}

ListResourceFlavorsResponse::~ListResourceFlavorsResponse() = default;

void ListResourceFlavorsResponse::validate()
{
}

web::json::value ListResourceFlavorsResponse::toJson() const
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
bool ListResourceFlavorsResponse::fromJson(const web::json::value& val)
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
            ResourceFlavorList_metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceFlavor> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListResourceFlavorsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListResourceFlavorsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListResourceFlavorsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListResourceFlavorsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListResourceFlavorsResponse::getKind() const
{
    return kind_;
}

void ListResourceFlavorsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListResourceFlavorsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListResourceFlavorsResponse::unsetkind()
{
    kindIsSet_ = false;
}

ResourceFlavorList_metadata ListResourceFlavorsResponse::getMetadata() const
{
    return metadata_;
}

void ListResourceFlavorsResponse::setMetadata(const ResourceFlavorList_metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListResourceFlavorsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListResourceFlavorsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<ResourceFlavor>& ListResourceFlavorsResponse::getItems()
{
    return items_;
}

void ListResourceFlavorsResponse::setItems(const std::vector<ResourceFlavor>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListResourceFlavorsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListResourceFlavorsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


