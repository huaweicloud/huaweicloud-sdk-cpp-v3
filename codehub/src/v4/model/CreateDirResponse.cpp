

#include "huaweicloud/codehub/v4/model/CreateDirResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateDirResponse::CreateDirResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateDirResponse::~CreateDirResponse() = default;

void CreateDirResponse::validate()
{
}

web::json::value CreateDirResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDirResponse::fromJson(const web::json::value& val)
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


std::string CreateDirResponse::getBody() const
{
    return body_;
}

void CreateDirResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDirResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDirResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


