

#include "huaweicloud/modelarts/v1/model/UnbindDevServerPublicIPResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




UnbindDevServerPublicIPResponse::UnbindDevServerPublicIPResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UnbindDevServerPublicIPResponse::~UnbindDevServerPublicIPResponse() = default;

void UnbindDevServerPublicIPResponse::validate()
{
}

web::json::value UnbindDevServerPublicIPResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UnbindDevServerPublicIPResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UnbindDevServerPublicIPResponse::getBody() const
{
    return body_;
}

void UnbindDevServerPublicIPResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UnbindDevServerPublicIPResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UnbindDevServerPublicIPResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


