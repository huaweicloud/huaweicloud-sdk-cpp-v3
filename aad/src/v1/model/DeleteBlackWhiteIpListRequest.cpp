

#include "huaweicloud/aad/v1/model/DeleteBlackWhiteIpListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V1 {
namespace Model {




DeleteBlackWhiteIpListRequest::DeleteBlackWhiteIpListRequest()
{
    bodyIsSet_ = false;
}

DeleteBlackWhiteIpListRequest::~DeleteBlackWhiteIpListRequest() = default;

void DeleteBlackWhiteIpListRequest::validate()
{
}

web::json::value DeleteBlackWhiteIpListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool DeleteBlackWhiteIpListRequest::fromJson(const web::json::value& val)
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


BlackWhiteIpListRequest DeleteBlackWhiteIpListRequest::getBody() const
{
    return body_;
}

void DeleteBlackWhiteIpListRequest::setBody(const BlackWhiteIpListRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteBlackWhiteIpListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteBlackWhiteIpListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


