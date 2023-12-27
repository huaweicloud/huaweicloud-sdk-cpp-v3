

#include "huaweicloud/aad/v1/model/AddBlackWhiteIpListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




AddBlackWhiteIpListRequest::AddBlackWhiteIpListRequest()
{
    bodyIsSet_ = false;
}

AddBlackWhiteIpListRequest::~AddBlackWhiteIpListRequest() = default;

void AddBlackWhiteIpListRequest::validate()
{
}

web::json::value AddBlackWhiteIpListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool AddBlackWhiteIpListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BlackWhiteIpListRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BlackWhiteIpListRequest AddBlackWhiteIpListRequest::getBody() const
{
    return body_;
}

void AddBlackWhiteIpListRequest::setBody(const BlackWhiteIpListRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddBlackWhiteIpListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddBlackWhiteIpListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


