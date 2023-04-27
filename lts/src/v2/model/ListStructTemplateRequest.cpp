

#include "huaweicloud/lts/v2/model/ListStructTemplateRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListStructTemplateRequest::ListStructTemplateRequest()
{
    contentType_ = "";
    contentTypeIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

ListStructTemplateRequest::~ListStructTemplateRequest() = default;

void ListStructTemplateRequest::validate()
{
}

web::json::value ListStructTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ListStructTemplateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
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
    return ok;
}


std::string ListStructTemplateRequest::getContentType() const
{
    return contentType_;
}

void ListStructTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListStructTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListStructTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

std::string ListStructTemplateRequest::getId() const
{
    return id_;
}

void ListStructTemplateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ListStructTemplateRequest::idIsSet() const
{
    return idIsSet_;
}

void ListStructTemplateRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


