

#include "huaweicloud/modelarts/v1/model/RebootDevServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RebootDevServerRequest::RebootDevServerRequest()
{
    id_ = "";
    idIsSet_ = false;
}

RebootDevServerRequest::~RebootDevServerRequest() = default;

void RebootDevServerRequest::validate()
{
}

web::json::value RebootDevServerRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool RebootDevServerRequest::fromJson(const web::json::value& val)
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


std::string RebootDevServerRequest::getId() const
{
    return id_;
}

void RebootDevServerRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RebootDevServerRequest::idIsSet() const
{
    return idIsSet_;
}

void RebootDevServerRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


