

#include "huaweicloud/functiongraph/v2/model/ListFunctionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionsRequest::ListFunctionsRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    maxitems_ = "";
    maxitemsIsSet_ = false;
    packageName_ = "";
    packageNameIsSet_ = false;
    funcName_ = "";
    funcNameIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionsRequest::~ListFunctionsRequest() = default;

void ListFunctionsRequest::validate()
{
}

web::json::value ListFunctionsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(maxitemsIsSet_) {
        val[utility::conversions::to_string_t("maxitems")] = ModelBase::toJson(maxitems_);
    }
    if(packageNameIsSet_) {
        val[utility::conversions::to_string_t("package_name")] = ModelBase::toJson(packageName_);
    }
    if(funcNameIsSet_) {
        val[utility::conversions::to_string_t("func_name")] = ModelBase::toJson(funcName_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListFunctionsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("package_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("package_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPackageName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("func_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("func_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuncName(refVal);
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


std::string ListFunctionsRequest::getMarker() const
{
    return marker_;
}

void ListFunctionsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFunctionsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFunctionsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListFunctionsRequest::getMaxitems() const
{
    return maxitems_;
}

void ListFunctionsRequest::setMaxitems(const std::string& value)
{
    maxitems_ = value;
    maxitemsIsSet_ = true;
}

bool ListFunctionsRequest::maxitemsIsSet() const
{
    return maxitemsIsSet_;
}

void ListFunctionsRequest::unsetmaxitems()
{
    maxitemsIsSet_ = false;
}

std::string ListFunctionsRequest::getPackageName() const
{
    return packageName_;
}

void ListFunctionsRequest::setPackageName(const std::string& value)
{
    packageName_ = value;
    packageNameIsSet_ = true;
}

bool ListFunctionsRequest::packageNameIsSet() const
{
    return packageNameIsSet_;
}

void ListFunctionsRequest::unsetpackageName()
{
    packageNameIsSet_ = false;
}

std::string ListFunctionsRequest::getFuncName() const
{
    return funcName_;
}

void ListFunctionsRequest::setFuncName(const std::string& value)
{
    funcName_ = value;
    funcNameIsSet_ = true;
}

bool ListFunctionsRequest::funcNameIsSet() const
{
    return funcNameIsSet_;
}

void ListFunctionsRequest::unsetfuncName()
{
    funcNameIsSet_ = false;
}

std::string ListFunctionsRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionsRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionsRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionsRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


