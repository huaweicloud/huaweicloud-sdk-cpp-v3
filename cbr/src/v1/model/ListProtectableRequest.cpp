

#include "huaweicloud/cbr/v1/model/ListProtectableRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ListProtectableRequest::ListProtectableRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    protectableType_ = "";
    protectableTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
}

ListProtectableRequest::~ListProtectableRequest() = default;

void ListProtectableRequest::validate()
{
}

web::json::value ListProtectableRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(protectableTypeIsSet_) {
        val[utility::conversions::to_string_t("protectable_type")] = ModelBase::toJson(protectableType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}

bool ListProtectableRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protectable_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protectable_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtectableType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}

int32_t ListProtectableRequest::getLimit() const
{
    return limit_;
}

void ListProtectableRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListProtectableRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListProtectableRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListProtectableRequest::getMarker() const
{
    return marker_;
}

void ListProtectableRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListProtectableRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListProtectableRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListProtectableRequest::getName() const
{
    return name_;
}

void ListProtectableRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListProtectableRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListProtectableRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListProtectableRequest::getOffset() const
{
    return offset_;
}

void ListProtectableRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListProtectableRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListProtectableRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListProtectableRequest::getProtectableType() const
{
    return protectableType_;
}

void ListProtectableRequest::setProtectableType(const std::string& value)
{
    protectableType_ = value;
    protectableTypeIsSet_ = true;
}

bool ListProtectableRequest::protectableTypeIsSet() const
{
    return protectableTypeIsSet_;
}

void ListProtectableRequest::unsetprotectableType()
{
    protectableTypeIsSet_ = false;
}

std::string ListProtectableRequest::getStatus() const
{
    return status_;
}

void ListProtectableRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListProtectableRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListProtectableRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListProtectableRequest::getId() const
{
    return id_;
}

void ListProtectableRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListProtectableRequest::idIsSet() const
{
    return idIsSet_;
}

void ListProtectableRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListProtectableRequest::getServerId() const
{
    return serverId_;
}

void ListProtectableRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ListProtectableRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ListProtectableRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


