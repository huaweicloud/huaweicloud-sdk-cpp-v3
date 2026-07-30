

#include "huaweicloud/modelarts/v1/model/GetHyperinstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetHyperinstanceRequest::GetHyperinstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
}

GetHyperinstanceRequest::~GetHyperinstanceRequest() = default;

void GetHyperinstanceRequest::validate()
{
}

web::json::value GetHyperinstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool GetHyperinstanceRequest::fromJson(const web::json::value& val)
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


std::string GetHyperinstanceRequest::getId() const
{
    return id_;
}

void GetHyperinstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetHyperinstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void GetHyperinstanceRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


