

#include "huaweicloud/modelarts/v1/model/AttachDevServerVolumeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AttachDevServerVolumeRequest::AttachDevServerVolumeRequest()
{
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

AttachDevServerVolumeRequest::~AttachDevServerVolumeRequest() = default;

void AttachDevServerVolumeRequest::validate()
{
}

web::json::value AttachDevServerVolumeRequest::toJson() const
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
bool AttachDevServerVolumeRequest::fromJson(const web::json::value& val)
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
            AttachServerVolumeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AttachDevServerVolumeRequest::getId() const
{
    return id_;
}

void AttachDevServerVolumeRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool AttachDevServerVolumeRequest::idIsSet() const
{
    return idIsSet_;
}

void AttachDevServerVolumeRequest::unsetid()
{
    idIsSet_ = false;
}

AttachServerVolumeRequest AttachDevServerVolumeRequest::getBody() const
{
    return body_;
}

void AttachDevServerVolumeRequest::setBody(const AttachServerVolumeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AttachDevServerVolumeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AttachDevServerVolumeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


