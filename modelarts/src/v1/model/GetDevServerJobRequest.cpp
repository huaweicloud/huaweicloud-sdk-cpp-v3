

#include "huaweicloud/modelarts/v1/model/GetDevServerJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GetDevServerJobRequest::GetDevServerJobRequest()
{
    id_ = "";
    idIsSet_ = false;
}

GetDevServerJobRequest::~GetDevServerJobRequest() = default;

void GetDevServerJobRequest::validate()
{
}

web::json::value GetDevServerJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool GetDevServerJobRequest::fromJson(const web::json::value& val)
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


std::string GetDevServerJobRequest::getId() const
{
    return id_;
}

void GetDevServerJobRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GetDevServerJobRequest::idIsSet() const
{
    return idIsSet_;
}

void GetDevServerJobRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


