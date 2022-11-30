

#include "huaweicloud/ecs/v2/model/CreateServersRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServersRequest::CreateServersRequest()
{
    xClientToken_ = "";
    xClientTokenIsSet_ = false;
    bodyIsSet_ = false;
}

CreateServersRequest::~CreateServersRequest() = default;

void CreateServersRequest::validate()
{
}

web::json::value CreateServersRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xClientTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Client-Token")] = ModelBase::toJson(xClientToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateServersRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Client-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Client-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXClientToken(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateServersRequest::getXClientToken() const
{
    return xClientToken_;
}

void CreateServersRequest::setXClientToken(const std::string& value)
{
    xClientToken_ = value;
    xClientTokenIsSet_ = true;
}

bool CreateServersRequest::xClientTokenIsSet() const
{
    return xClientTokenIsSet_;
}

void CreateServersRequest::unsetxClientToken()
{
    xClientTokenIsSet_ = false;
}

CreateServersRequestBody CreateServersRequest::getBody() const
{
    return body_;
}

void CreateServersRequest::setBody(const CreateServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


