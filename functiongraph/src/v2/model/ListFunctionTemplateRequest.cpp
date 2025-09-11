

#include "huaweicloud/functiongraph/v2/model/ListFunctionTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListFunctionTemplateRequest::ListFunctionTemplateRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    maxitems_ = "";
    maxitemsIsSet_ = false;
    ispublic_ = "";
    ispublicIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
    service_ = "";
    serviceIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListFunctionTemplateRequest::~ListFunctionTemplateRequest() = default;

void ListFunctionTemplateRequest::validate()
{
}

web::json::value ListFunctionTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(maxitemsIsSet_) {
        val[utility::conversions::to_string_t("maxitems")] = ModelBase::toJson(maxitems_);
    }
    if(ispublicIsSet_) {
        val[utility::conversions::to_string_t("ispublic")] = ModelBase::toJson(ispublic_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
    }
    if(serviceIsSet_) {
        val[utility::conversions::to_string_t("service")] = ModelBase::toJson(service_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListFunctionTemplateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ispublic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ispublic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIspublic(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setService(refVal);
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


std::string ListFunctionTemplateRequest::getMarker() const
{
    return marker_;
}

void ListFunctionTemplateRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListFunctionTemplateRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListFunctionTemplateRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListFunctionTemplateRequest::getMaxitems() const
{
    return maxitems_;
}

void ListFunctionTemplateRequest::setMaxitems(const std::string& value)
{
    maxitems_ = value;
    maxitemsIsSet_ = true;
}

bool ListFunctionTemplateRequest::maxitemsIsSet() const
{
    return maxitemsIsSet_;
}

void ListFunctionTemplateRequest::unsetmaxitems()
{
    maxitemsIsSet_ = false;
}

std::string ListFunctionTemplateRequest::getIspublic() const
{
    return ispublic_;
}

void ListFunctionTemplateRequest::setIspublic(const std::string& value)
{
    ispublic_ = value;
    ispublicIsSet_ = true;
}

bool ListFunctionTemplateRequest::ispublicIsSet() const
{
    return ispublicIsSet_;
}

void ListFunctionTemplateRequest::unsetispublic()
{
    ispublicIsSet_ = false;
}

std::string ListFunctionTemplateRequest::getRuntime() const
{
    return runtime_;
}

void ListFunctionTemplateRequest::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListFunctionTemplateRequest::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListFunctionTemplateRequest::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ListFunctionTemplateRequest::getScene() const
{
    return scene_;
}

void ListFunctionTemplateRequest::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ListFunctionTemplateRequest::sceneIsSet() const
{
    return sceneIsSet_;
}

void ListFunctionTemplateRequest::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ListFunctionTemplateRequest::getService() const
{
    return service_;
}

void ListFunctionTemplateRequest::setService(const std::string& value)
{
    service_ = value;
    serviceIsSet_ = true;
}

bool ListFunctionTemplateRequest::serviceIsSet() const
{
    return serviceIsSet_;
}

void ListFunctionTemplateRequest::unsetservice()
{
    serviceIsSet_ = false;
}

std::string ListFunctionTemplateRequest::getContentType() const
{
    return contentType_;
}

void ListFunctionTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListFunctionTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListFunctionTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


