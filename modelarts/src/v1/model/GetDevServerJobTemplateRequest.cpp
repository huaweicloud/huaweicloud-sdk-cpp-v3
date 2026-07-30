

#include "huaweicloud/modelarts/v1/model/GetDevServerJobTemplateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerJobTemplateRequest::GetDevServerJobTemplateRequest()
{
    id_ = "";
    idIsSet_ = false;
}

GetDevServerJobTemplateRequest::~GetDevServerJobTemplateRequest() = default;

void GetDevServerJobTemplateRequest::validate()
{
}

web::json::value GetDevServerJobTemplateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool GetDevServerJobTemplateRequest::fromJson(const web::json::value& val)
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


std::string GetDevServerJobTemplateRequest::getId() const
{
    return id_;
}

void GetDevServerJobTemplateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetDevServerJobTemplateRequest::idIsSet() const
{
    return idIsSet_;
}

void GetDevServerJobTemplateRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


