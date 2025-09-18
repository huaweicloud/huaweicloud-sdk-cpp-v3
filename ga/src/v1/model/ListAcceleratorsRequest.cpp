

#include "huaweicloud/ga/v1/model/ListAcceleratorsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ga {
namespace V1 {
namespace Model {




ListAcceleratorsRequest::ListAcceleratorsRequest()
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
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListAcceleratorsRequest::~ListAcceleratorsRequest() = default;

void ListAcceleratorsRequest::validate()
{
}

web::json::value ListAcceleratorsRequest::toJson() const
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
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ListAcceleratorsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


int32_t ListAcceleratorsRequest::getLimit() const
{
    return limit_;
}

void ListAcceleratorsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAcceleratorsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAcceleratorsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListAcceleratorsRequest::getMarker() const
{
    return marker_;
}

void ListAcceleratorsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAcceleratorsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAcceleratorsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListAcceleratorsRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListAcceleratorsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListAcceleratorsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListAcceleratorsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::string ListAcceleratorsRequest::getId() const
{
    return id_;
}

void ListAcceleratorsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListAcceleratorsRequest::idIsSet() const
{
    return idIsSet_;
}

void ListAcceleratorsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ListAcceleratorsRequest::getName() const
{
    return name_;
}

void ListAcceleratorsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListAcceleratorsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListAcceleratorsRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListAcceleratorsRequest::getStatus() const
{
    return status_;
}

void ListAcceleratorsRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ListAcceleratorsRequest::statusIsSet() const
{
    return statusIsSet_;
}

void ListAcceleratorsRequest::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ListAcceleratorsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAcceleratorsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAcceleratorsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAcceleratorsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


