

#include "huaweicloud/modelarts/v1/model/CreateImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CreateImageRequest::CreateImageRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

CreateImageRequest::~CreateImageRequest() = default;

void CreateImageRequest::validate()
{
}

web::json::value CreateImageRequest::toJson() const
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
bool CreateImageRequest::fromJson(const web::json::value& val)
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
            ImageCreateReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateImageRequest::getId() const
{
    return id_;
}

void CreateImageRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateImageRequest::idIsSet() const
{
    return idIsSet_;
}

void CreateImageRequest::unsetid()
{
    idIsSet_ = false;
}

ImageCreateReq CreateImageRequest::getBody() const
{
    return body_;
}

void CreateImageRequest::setBody(const ImageCreateReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateImageRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateImageRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


