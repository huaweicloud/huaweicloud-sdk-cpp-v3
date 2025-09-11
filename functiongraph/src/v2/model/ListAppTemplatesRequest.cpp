

#include "huaweicloud/functiongraph/v2/model/ListAppTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListAppTemplatesRequest::ListAppTemplatesRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    maxitems_ = "";
    maxitemsIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListAppTemplatesRequest::~ListAppTemplatesRequest() = default;

void ListAppTemplatesRequest::validate()
{
}

web::json::value ListAppTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(maxitemsIsSet_) {
        val[utility::conversions::to_string_t("maxitems")] = ModelBase::toJson(maxitems_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListAppTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("maxitems"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxitems"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxitems(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListAppTemplatesRequest::getMarker() const
{
    return marker_;
}

void ListAppTemplatesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListAppTemplatesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListAppTemplatesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListAppTemplatesRequest::getMaxitems() const
{
    return maxitems_;
}

void ListAppTemplatesRequest::setMaxitems(const std::string& value)
{
    maxitems_ = value;
    maxitemsIsSet_ = true;
}

bool ListAppTemplatesRequest::maxitemsIsSet() const
{
    return maxitemsIsSet_;
}

void ListAppTemplatesRequest::unsetmaxitems()
{
    maxitemsIsSet_ = false;
}

std::string ListAppTemplatesRequest::getRuntime() const
{
    return runtime_;
}

void ListAppTemplatesRequest::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListAppTemplatesRequest::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListAppTemplatesRequest::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ListAppTemplatesRequest::getCategory() const
{
    return category_;
}

void ListAppTemplatesRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListAppTemplatesRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListAppTemplatesRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ListAppTemplatesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListAppTemplatesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListAppTemplatesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListAppTemplatesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListAppTemplatesRequest::getContentType() const
{
    return contentType_;
}

void ListAppTemplatesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListAppTemplatesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListAppTemplatesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


