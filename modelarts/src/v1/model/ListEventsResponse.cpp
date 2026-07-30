

#include "huaweicloud/modelarts/v1/model/ListEventsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ListEventsResponse::ListEventsResponse()
{
    apiVersion_ = "";
    apiVersionIsSet_ = false;
    kind_ = "";
    kindIsSet_ = false;
    metadataIsSet_ = false;
    itemsIsSet_ = false;
}

ListEventsResponse::~ListEventsResponse() = default;

void ListEventsResponse::validate()
{
}

web::json::value ListEventsResponse::toJson() const
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
bool ListEventsResponse::fromJson(const web::json::value& val)
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
            EventListMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetadata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("items"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("items"));
        if(!fieldValue.is_null())
        {
            std::vector<EventModel> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItems(refVal);
        }
    }
    return ok;
}


std::string ListEventsResponse::getApiVersion() const
{
    return apiVersion_;
}

void ListEventsResponse::setApiVersion(const std::string& value)
{
    apiVersion_ = value;
    apiVersionIsSet_ = true;
}

bool ListEventsResponse::apiVersionIsSet() const
{
    return apiVersionIsSet_;
}

void ListEventsResponse::unsetapiVersion()
{
    apiVersionIsSet_ = false;
}

std::string ListEventsResponse::getKind() const
{
    return kind_;
}

void ListEventsResponse::setKind(const std::string& value)
{
    kind_ = value;
    kindIsSet_ = true;
}

bool ListEventsResponse::kindIsSet() const
{
    return kindIsSet_;
}

void ListEventsResponse::unsetkind()
{
    kindIsSet_ = false;
}

EventListMeta ListEventsResponse::getMetadata() const
{
    return metadata_;
}

void ListEventsResponse::setMetadata(const EventListMeta& value)
{
    metadata_ = value;
    metadataIsSet_ = true;
}

bool ListEventsResponse::metadataIsSet() const
{
    return metadataIsSet_;
}

void ListEventsResponse::unsetmetadata()
{
    metadataIsSet_ = false;
}

std::vector<EventModel>& ListEventsResponse::getItems()
{
    return items_;
}

void ListEventsResponse::setItems(const std::vector<EventModel>& value)
{
    items_ = value;
    itemsIsSet_ = true;
}

bool ListEventsResponse::itemsIsSet() const
{
    return itemsIsSet_;
}

void ListEventsResponse::unsetitems()
{
    itemsIsSet_ = false;
}

}
}
}
}
}


