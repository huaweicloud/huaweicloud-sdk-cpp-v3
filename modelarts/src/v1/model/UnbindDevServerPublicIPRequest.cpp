

#include "huaweicloud/modelarts/v1/model/UnbindDevServerPublicIPRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnbindDevServerPublicIPRequest::UnbindDevServerPublicIPRequest()
{
    id_ = "";
    idIsSet_ = false;
    publicipId_ = "";
    publicipIdIsSet_ = false;
}

UnbindDevServerPublicIPRequest::~UnbindDevServerPublicIPRequest() = default;

void UnbindDevServerPublicIPRequest::validate()
{
}

web::json::value UnbindDevServerPublicIPRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(publicipIdIsSet_) {
        val[utility::conversions::to_string_t("publicip_id")] = ModelBase::toJson(publicipId_);
    }

    return val;
}
bool UnbindDevServerPublicIPRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("publicip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicipId(refVal);
        }
    }
    return ok;
}


std::string UnbindDevServerPublicIPRequest::getId() const
{
    return id_;
}

void UnbindDevServerPublicIPRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UnbindDevServerPublicIPRequest::idIsSet() const
{
    return idIsSet_;
}

void UnbindDevServerPublicIPRequest::unsetid()
{
    idIsSet_ = false;
}

std::string UnbindDevServerPublicIPRequest::getPublicipId() const
{
    return publicipId_;
}

void UnbindDevServerPublicIPRequest::setPublicipId(const std::string& value)
{
    publicipId_ = value;
    publicipIdIsSet_ = true;
}

bool UnbindDevServerPublicIPRequest::publicipIdIsSet() const
{
    return publicipIdIsSet_;
}

void UnbindDevServerPublicIPRequest::unsetpublicipId()
{
    publicipIdIsSet_ = false;
}

}
}
}
}
}


