

#include "huaweicloud/modelarts/v1/model/StartHyperinstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StartHyperinstanceRequest::StartHyperinstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
}

StartHyperinstanceRequest::~StartHyperinstanceRequest() = default;

void StartHyperinstanceRequest::validate()
{
}

web::json::value StartHyperinstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool StartHyperinstanceRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string StartHyperinstanceRequest::getId() const
{
    return id_;
}

void StartHyperinstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StartHyperinstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void StartHyperinstanceRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


