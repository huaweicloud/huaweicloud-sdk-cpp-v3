

#include "huaweicloud/cce/v3/model/ListPreCheckTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListPreCheckTasksResponse::ListPreCheckTasksResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
}

ListPreCheckTasksResponse::~ListPreCheckTasksResponse() = default;

void ListPreCheckTasksResponse::validate()
{
}

web::json::value ListPreCheckTasksResponse::toJson() const
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
bool ListPreCheckTasksResponse::fromJson(const web::json::value& val)
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
            Metadata refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<PrecheckClusterTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListPreCheckTasksResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListPreCheckTasksResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListPreCheckTasksResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListPreCheckTasksResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListPreCheckTasksResponse::getKind() const
{
    return kind_;
}

void ListPreCheckTasksResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListPreCheckTasksResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListPreCheckTasksResponse::unsetkind()
{
    kindIsSet_ = false;
}

Metadata ListPreCheckTasksResponse::getMetadata() const
{
    return metadata_;
}

void ListPreCheckTasksResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListPreCheckTasksResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListPreCheckTasksResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<PrecheckClusterTask>& ListPreCheckTasksResponse::getItems()
{
    return items_;
}

void ListPreCheckTasksResponse::setItems(const std::vector<PrecheckClusterTask>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListPreCheckTasksResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListPreCheckTasksResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


