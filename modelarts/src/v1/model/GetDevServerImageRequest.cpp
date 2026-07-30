

#include "huaweicloud/modelarts/v1/model/GetDevServerImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerImageRequest::GetDevServerImageRequest()
{
    id_ = "";
    idIsSet_ = false;
}

GetDevServerImageRequest::~GetDevServerImageRequest() = default;

void GetDevServerImageRequest::validate()
{
}

web::json::value GetDevServerImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool GetDevServerImageRequest::fromJson(const web::json::value& val)
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


std::string GetDevServerImageRequest::getId() const
{
    return id_;
}

void GetDevServerImageRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetDevServerImageRequest::idIsSet() const
{
    return idIsSet_;
}

void GetDevServerImageRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


