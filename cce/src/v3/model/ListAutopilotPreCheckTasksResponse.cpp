

#include "huaweicloud/cce/v3/model/ListAutopilotPreCheckTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ListAutopilotPreCheckTasksResponse::ListAutopilotPreCheckTasksResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
}

ListAutopilotPreCheckTasksResponse::~ListAutopilotPreCheckTasksResponse() = default;

void ListAutopilotPreCheckTasksResponse::validate()
{
}

web::json::value ListAutopilotPreCheckTasksResponse::toJson() const
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
bool ListAutopilotPreCheckTasksResponse::fromJson(const web::json::value& val)
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


std::string ListAutopilotPreCheckTasksResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListAutopilotPreCheckTasksResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListAutopilotPreCheckTasksResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListAutopilotPreCheckTasksResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListAutopilotPreCheckTasksResponse::getKind() const
{
    return kind_;
}

void ListAutopilotPreCheckTasksResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListAutopilotPreCheckTasksResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListAutopilotPreCheckTasksResponse::unsetkind()
{
    kindIsSet_ = false;
}

Metadata ListAutopilotPreCheckTasksResponse::getMetadata() const
{
    return metadata_;
}

void ListAutopilotPreCheckTasksResponse::setMetadata(const Metadata& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListAutopilotPreCheckTasksResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListAutopilotPreCheckTasksResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<PrecheckClusterTask>& ListAutopilotPreCheckTasksResponse::getItems()
{
    return items_;
}

void ListAutopilotPreCheckTasksResponse::setItems(const std::vector<PrecheckClusterTask>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListAutopilotPreCheckTasksResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListAutopilotPreCheckTasksResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


