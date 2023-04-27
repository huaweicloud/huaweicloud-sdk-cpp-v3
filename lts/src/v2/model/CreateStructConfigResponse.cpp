

#include "huaweicloud/lts/v2/model/CreateStructConfigResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateStructConfigResponse::CreateStructConfigResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

CreateStructConfigResponse::~CreateStructConfigResponse() = default;

void CreateStructConfigResponse::validate()
{
}

web::json::value CreateStructConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateStructConfigResponse::fromJson(const web::json::value& val)
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


std::string CreateStructConfigResponse::getBody() const
{
    return body_;
}

void CreateStructConfigResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateStructConfigResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateStructConfigResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


