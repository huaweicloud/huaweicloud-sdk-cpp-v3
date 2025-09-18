

#include "huaweicloud/ga/v1/model/ListListenersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListListenersRequest::ListListenersRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    acceleratorId_ = "";
    acceleratorIdIsSet_ = false;
}

ListListenersRequest::~ListListenersRequest() = default;

void ListListenersRequest::validate()
{
}

web::json::value ListListenersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(pageReverseIsSet_) {
        val[utility::conversions::to_string_t("page_reverse")] = ModelBase::toJson(pageReverse_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(acceleratorIdIsSet_) {
        val[utility::conversions::to_string_t("accelerator_id")] = ModelBase::toJson(acceleratorId_);
    }

    return val;
}
bool ListListenersRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_reverse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_reverse"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageReverse(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("accelerator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accelerator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceleratorId(refVal);
        }
    }
    return ok;
}


int32_t ListListenersRequest::getLimit() const
{
    return limit_;
}

void ListListenersRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListListenersRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListListenersRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListListenersRequest::getMarker() const
{
    return marker_;
}

void ListListenersRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListListenersRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListListenersRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListListenersRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListListenersRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListListenersRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListListenersRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::string ListListenersRequest::getId() const
{
    return id_;
}

void ListListenersRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListListenersRequest::idIsSet() const
{
    return idIsSet_;
}

void ListListenersRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListListenersRequest::getName() const
{
    return name_;
}

void ListListenersRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListListenersRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListListenersRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListListenersRequest::getStatus() const
{
    return status_;
}

void ListListenersRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListListenersRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListListenersRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListListenersRequest::getAcceleratorId() const
{
    return acceleratorId_;
}

void ListListenersRequest::setAcceleratorId(const std::string& value)
{
    acceleratorId_ = value;
    acceleratorIdIsSet_ = true;
}

bool ListListenersRequest::acceleratorIdIsSet() const
{
    return acceleratorIdIsSet_;
}

void ListListenersRequest::unsetacceleratorId()
{
    acceleratorIdIsSet_ = false;
}

}
}
}
}
}


