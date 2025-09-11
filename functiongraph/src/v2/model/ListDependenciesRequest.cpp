

#include "huaweicloud/functiongraph/v2/model/ListDependenciesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ListDependenciesRequest::ListDependenciesRequest()
{
    marker_ = "";
    markerIsSet_ = false;
    maxitems_ = "";
    maxitemsIsSet_ = false;
    ispublic_ = "";
    ispublicIsSet_ = false;
    dependencyType_ = "";
    dependencyTypeIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    limit_ = "";
    limitIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListDependenciesRequest::~ListDependenciesRequest() = default;

void ListDependenciesRequest::validate()
{
}

web::json::value ListDependenciesRequest::toJson() const
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
    if(dependencyTypeIsSet_) {
        val[utility::conversions::to_string_t("dependency_type")] = ModelBase::toJson(dependencyType_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ListDependenciesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("dependency_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dependency_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDependencyType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


std::string ListDependenciesRequest::getMarker() const
{
    return marker_;
}

void ListDependenciesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListDependenciesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void ListDependenciesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string ListDependenciesRequest::getMaxitems() const
{
    return maxitems_;
}

void ListDependenciesRequest::setMaxitems(const std::string& value)
{
    maxitems_ = value;
    maxitemsIsSet_ = true;
}

bool ListDependenciesRequest::maxitemsIsSet() const
{
    return maxitemsIsSet_;
}

void ListDependenciesRequest::unsetmaxitems()
{
    maxitemsIsSet_ = false;
}

std::string ListDependenciesRequest::getIspublic() const
{
    return ispublic_;
}

void ListDependenciesRequest::setIspublic(const std::string& value)
{
    ispublic_ = value;
    ispublicIsSet_ = true;
}

bool ListDependenciesRequest::ispublicIsSet() const
{
    return ispublicIsSet_;
}

void ListDependenciesRequest::unsetispublic()
{
    ispublicIsSet_ = false;
}

std::string ListDependenciesRequest::getDependencyType() const
{
    return dependencyType_;
}

void ListDependenciesRequest::setDependencyType(const std::string& value)
{
    dependencyType_ = value;
    dependencyTypeIsSet_ = true;
}

bool ListDependenciesRequest::dependencyTypeIsSet() const
{
    return dependencyTypeIsSet_;
}

void ListDependenciesRequest::unsetdependencyType()
{
    dependencyTypeIsSet_ = false;
}

std::string ListDependenciesRequest::getRuntime() const
{
    return runtime_;
}

void ListDependenciesRequest::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ListDependenciesRequest::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ListDependenciesRequest::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ListDependenciesRequest::getName() const
{
    return name_;
}

void ListDependenciesRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListDependenciesRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListDependenciesRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ListDependenciesRequest::getLimit() const
{
    return limit_;
}

void ListDependenciesRequest::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListDependenciesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListDependenciesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListDependenciesRequest::getContentType() const
{
    return contentType_;
}

void ListDependenciesRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListDependenciesRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListDependenciesRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


