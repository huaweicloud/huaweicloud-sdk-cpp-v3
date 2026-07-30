

#include "huaweicloud/modelarts/v1/model/GetHyperClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetHyperClusterRequest::GetHyperClusterRequest()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

GetHyperClusterRequest::~GetHyperClusterRequest() = default;

void GetHyperClusterRequest::validate()
{
}

web::json::value GetHyperClusterRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool GetHyperClusterRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string GetHyperClusterRequest::getId() const
{
    return id_;
}

void GetHyperClusterRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetHyperClusterRequest::idIsSet() const
{
    return idIsSet_;
}

void GetHyperClusterRequest::unsetid()
{
    idIsSet_ = false;
}

std::string GetHyperClusterRequest::getType() const
{
    return type_;
}

void GetHyperClusterRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool GetHyperClusterRequest::typeIsSet() const
{
    return typeIsSet_;
}

void GetHyperClusterRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


