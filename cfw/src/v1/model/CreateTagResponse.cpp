

#include "huaweicloud/cfw/v1/model/CreateTagResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




CreateTagResponse::CreateTagResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateTagResponse::~CreateTagResponse() = default;

void CreateTagResponse::validate()
{
}

web::json::value CreateTagResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTagResponse::fromJson(const web::json::value& val)
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


std::string CreateTagResponse::getBody() const
{
    return body_;
}

void CreateTagResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTagResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTagResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


