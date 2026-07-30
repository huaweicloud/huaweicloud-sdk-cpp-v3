

#include "huaweicloud/modelarts/v1/model/ShowInferServiceClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferServiceClusterRequest::ShowInferServiceClusterRequest()
{
    id_ = "";
    idIsSet_ = false;
    xUserToken_ = "";
    xUserTokenIsSet_ = false;
}

ShowInferServiceClusterRequest::~ShowInferServiceClusterRequest() = default;

void ShowInferServiceClusterRequest::validate()
{
}

web::json::value ShowInferServiceClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(xUserTokenIsSet_) {
        val[utility::conversions::to_string_t("X-User-Token")] = ModelBase::toJson(xUserToken_);
    }

    return val;
}
bool ShowInferServiceClusterRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-User-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-User-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXUserToken(refVal);
        }
    }
    return ok;
}


std::string ShowInferServiceClusterRequest::getId() const
{
    return id_;
}

void ShowInferServiceClusterRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInferServiceClusterRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowInferServiceClusterRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInferServiceClusterRequest::getXUserToken() const
{
    return xUserToken_;
}

void ShowInferServiceClusterRequest::setXUserToken(const std::string& value)
{
    xUserToken_ = value;
    xUserTokenIsSet_ = true;
}

bool ShowInferServiceClusterRequest::xUserTokenIsSet() const
{
    return xUserTokenIsSet_;
}

void ShowInferServiceClusterRequest::unsetxUserToken()
{
    xUserTokenIsSet_ = false;
}

}
}
}
}
}


