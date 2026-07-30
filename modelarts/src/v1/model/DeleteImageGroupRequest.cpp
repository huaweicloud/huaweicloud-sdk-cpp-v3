

#include "huaweicloud/modelarts/v1/model/DeleteImageGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteImageGroupRequest::DeleteImageGroupRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteImageGroupRequest::~DeleteImageGroupRequest() = default;

void DeleteImageGroupRequest::validate()
{
}

web::json::value DeleteImageGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteImageGroupRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteImageGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteImageGroupRequest::getId() const
{
    return id_;
}

void DeleteImageGroupRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteImageGroupRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteImageGroupRequest::unsetid()
{
    idIsSet_ = false;
}

DeleteImageGroupRequestBody DeleteImageGroupRequest::getBody() const
{
    return body_;
}

void DeleteImageGroupRequest::setBody(const DeleteImageGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteImageGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteImageGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


