

#include "huaweicloud/functiongraph/v2/model/DeleteFunctionAppRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




DeleteFunctionAppRequest::DeleteFunctionAppRequest()
{
    id_ = "";
    idIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

DeleteFunctionAppRequest::~DeleteFunctionAppRequest() = default;

void DeleteFunctionAppRequest::validate()
{
}

web::json::value DeleteFunctionAppRequest::toJson() const
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
bool DeleteFunctionAppRequest::fromJson(const web::json::value& val)
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


std::string DeleteFunctionAppRequest::getId() const
{
    return id_;
}

void DeleteFunctionAppRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteFunctionAppRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteFunctionAppRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteFunctionAppRequest::getContentType() const
{
    return contentType_;
}

void DeleteFunctionAppRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool DeleteFunctionAppRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void DeleteFunctionAppRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


