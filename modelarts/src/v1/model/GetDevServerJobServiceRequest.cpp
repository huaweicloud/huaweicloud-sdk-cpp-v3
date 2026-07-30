

#include "huaweicloud/modelarts/v1/model/GetDevServerJobServiceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerJobServiceRequest::GetDevServerJobServiceRequest()
{
    id_ = "";
    idIsSet_ = false;
}

GetDevServerJobServiceRequest::~GetDevServerJobServiceRequest() = default;

void GetDevServerJobServiceRequest::validate()
{
}

web::json::value GetDevServerJobServiceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool GetDevServerJobServiceRequest::fromJson(const web::json::value& val)
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


std::string GetDevServerJobServiceRequest::getId() const
{
    return id_;
}

void GetDevServerJobServiceRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetDevServerJobServiceRequest::idIsSet() const
{
    return idIsSet_;
}

void GetDevServerJobServiceRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


