

#include "huaweicloud/functiongraph/v2/model/ShowFunctionAppRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




ShowFunctionAppRequest::ShowFunctionAppRequest()
{
    id_ = "";
    idIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ShowFunctionAppRequest::~ShowFunctionAppRequest() = default;

void ShowFunctionAppRequest::validate()
{
}

web::json::value ShowFunctionAppRequest::toJson() const
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
bool ShowFunctionAppRequest::fromJson(const web::json::value& val)
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


std::string ShowFunctionAppRequest::getId() const
{
    return id_;
}

void ShowFunctionAppRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowFunctionAppRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowFunctionAppRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowFunctionAppRequest::getContentType() const
{
    return contentType_;
}

void ShowFunctionAppRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ShowFunctionAppRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ShowFunctionAppRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


