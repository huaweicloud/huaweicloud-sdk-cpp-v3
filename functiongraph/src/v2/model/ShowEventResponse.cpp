

#include "huaweicloud/functiongraph/v2/model/ShowEventResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowEventResponse::ShowEventResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    content_ = "";
    contentIsSet_ = false;
    lastModified_ = 0.0;
    lastModifiedIsSet_ = false;
}

ShowEventResponse::~ShowEventResponse() = default;

void ShowEventResponse::validate()
{
}

web::json::value ShowEventResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(contentIsSet_) {
        val[utility::conversions::to_string_t("content")] = ModelBase::toJson(content_);
    }
    if(lastModifiedIsSet_) {
        val[utility::conversions::to_string_t("last_modified")] = ModelBase::toJson(lastModified_);
    }

    return val;
}
bool ShowEventResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_modified"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_modified"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastModified(refVal);
        }
    }
    return ok;
}


std::string ShowEventResponse::getId() const
{
    return id_;
}

void ShowEventResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowEventResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowEventResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowEventResponse::getName() const
{
    return name_;
}

void ShowEventResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowEventResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowEventResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowEventResponse::getContent() const
{
    return content_;
}

void ShowEventResponse::setContent(const std::string& value)
{
    content_ = value;
    contentIsSet_ = true;
}

bool ShowEventResponse::contentIsSet() const
{
    return contentIsSet_;
}

void ShowEventResponse::unsetcontent()
{
    contentIsSet_ = false;
}

double ShowEventResponse::getLastModified() const
{
    return lastModified_;
}

void ShowEventResponse::setLastModified(double value)
{
    lastModified_ = value;
    lastModifiedIsSet_ = true;
}

bool ShowEventResponse::lastModifiedIsSet() const
{
    return lastModifiedIsSet_;
}

void ShowEventResponse::unsetlastModified()
{
    lastModifiedIsSet_ = false;
}

}
}
}
}
}


