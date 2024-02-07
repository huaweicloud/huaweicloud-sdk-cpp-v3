

#include "huaweicloud/geip/v3/model/ListGeipResourceQuotasRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




ListGeipResourceQuotasRequest::ListGeipResourceQuotasRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    fieldsIsSet_ = false;
    typeIsSet_ = false;
}

ListGeipResourceQuotasRequest::~ListGeipResourceQuotasRequest() = default;

void ListGeipResourceQuotasRequest::validate()
{
}

web::json::value ListGeipResourceQuotasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(pageReverseIsSet_) {
        val[utility::conversions::to_string_t("page_reverse")] = ModelBase::toJson(pageReverse_);
    }
    if(fieldsIsSet_) {
        val[utility::conversions::to_string_t("fields")] = ModelBase::toJson(fields_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ListGeipResourceQuotasRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fields"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fields"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFields(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


int32_t ListGeipResourceQuotasRequest::getLimit() const
{
    return limit_;
}

void ListGeipResourceQuotasRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListGeipResourceQuotasRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListGeipResourceQuotasRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListGeipResourceQuotasRequest::getOffset() const
{
    return offset_;
}

void ListGeipResourceQuotasRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListGeipResourceQuotasRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListGeipResourceQuotasRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListGeipResourceQuotasRequest::getMarker() const
{
    return marker_;
}

void ListGeipResourceQuotasRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListGeipResourceQuotasRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListGeipResourceQuotasRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool ListGeipResourceQuotasRequest::isPageReverse() const
{
    return pageReverse_;
}

void ListGeipResourceQuotasRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool ListGeipResourceQuotasRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void ListGeipResourceQuotasRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::vector<std::string>& ListGeipResourceQuotasRequest::getFields()
{
    return fields_;
}

void ListGeipResourceQuotasRequest::setFields(const std::vector<std::string>& value)
{
    fields_ = value;
    fieldsIsSet_ = true;
}

bool ListGeipResourceQuotasRequest::fieldsIsSet() const
{
    return fieldsIsSet_;
}

void ListGeipResourceQuotasRequest::unsetfields()
{
    fieldsIsSet_ = false;
}

std::vector<std::string>& ListGeipResourceQuotasRequest::getType()
{
    return type_;
}

void ListGeipResourceQuotasRequest::setType(const std::vector<std::string>& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListGeipResourceQuotasRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListGeipResourceQuotasRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


