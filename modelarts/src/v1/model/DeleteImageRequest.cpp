

#include "huaweicloud/modelarts/v1/model/DeleteImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteImageRequest::DeleteImageRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteImageRequest::~DeleteImageRequest() = default;

void DeleteImageRequest::validate()
{
}

web::json::value DeleteImageRequest::toJson() const
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
bool DeleteImageRequest::fromJson(const web::json::value& val)
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
            DeleteImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteImageRequest::getId() const
{
    return id_;
}

void DeleteImageRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteImageRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteImageRequest::unsetid()
{
    idIsSet_ = false;
}

DeleteImageRequestBody DeleteImageRequest::getBody() const
{
    return body_;
}

void DeleteImageRequest::setBody(const DeleteImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


