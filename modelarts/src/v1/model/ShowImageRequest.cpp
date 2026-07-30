

#include "huaweicloud/modelarts/v1/model/ShowImageRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowImageRequest::ShowImageRequest()
{
    id_ = "";
    idIsSet_ = false;
}

ShowImageRequest::~ShowImageRequest() = default;

void ShowImageRequest::validate()
{
}

web::json::value ShowImageRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool ShowImageRequest::fromJson(const web::json::value& val)
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


std::string ShowImageRequest::getId() const
{
    return id_;
}

void ShowImageRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowImageRequest::idIsSet() const
{
    return idIsSet_;
}

void ShowImageRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


