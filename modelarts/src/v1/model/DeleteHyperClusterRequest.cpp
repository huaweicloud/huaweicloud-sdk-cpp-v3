

#include "huaweicloud/modelarts/v1/model/DeleteHyperClusterRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




DeleteHyperClusterRequest::DeleteHyperClusterRequest()
{
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

DeleteHyperClusterRequest::~DeleteHyperClusterRequest() = default;

void DeleteHyperClusterRequest::validate()
{
}

web::json::value DeleteHyperClusterRequest::toJson() const
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
bool DeleteHyperClusterRequest::fromJson(const web::json::value& val)
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


std::string DeleteHyperClusterRequest::getId() const
{
    return id_;
}

void DeleteHyperClusterRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteHyperClusterRequest::idIsSet() const
{
    return idIsSet_;
}

void DeleteHyperClusterRequest::unsetid()
{
    idIsSet_ = false;
}

std::string DeleteHyperClusterRequest::getType() const
{
    return type_;
}

void DeleteHyperClusterRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DeleteHyperClusterRequest::typeIsSet() const
{
    return typeIsSet_;
}

void DeleteHyperClusterRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


