

#include "huaweicloud/functiongraph/v2/model/ShowAppTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowAppTemplateRequest::ShowAppTemplateRequest()
{
    id_ = "";
    idIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowAppTemplateRequest::~ShowAppTemplateRequest() = default;

void ShowAppTemplateRequest::validate()
{
}

web::json::value ShowAppTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}
bool ShowAppTemplateRequest::fromJson(const web::json::value& val)
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


std::string ShowAppTemplateRequest::getId() const
{
    return id_;
}

void ShowAppTemplateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowAppTemplateRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowAppTemplateRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowAppTemplateRequest::getContentType() const
{
    return contentType_;
}

void ShowAppTemplateRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowAppTemplateRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowAppTemplateRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


