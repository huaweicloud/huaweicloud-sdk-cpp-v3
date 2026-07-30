

#include "huaweicloud/modelarts/v1/model/StopHyperinstanceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopHyperinstanceRequest::StopHyperinstanceRequest()
{
    id_ = "";
    idIsSet_ = false;
}

StopHyperinstanceRequest::~StopHyperinstanceRequest() = default;

void StopHyperinstanceRequest::validate()
{
}

web::json::value StopHyperinstanceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool StopHyperinstanceRequest::fromJson(const web::json::value& val)
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


std::string StopHyperinstanceRequest::getId() const
{
    return id_;
}

void StopHyperinstanceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StopHyperinstanceRequest::idIsSet() const
{
    return idIsSet_;
}

void StopHyperinstanceRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


