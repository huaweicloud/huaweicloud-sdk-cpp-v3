

#include "huaweicloud/lts/v2/model/CreatefavoriteRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreatefavoriteRequest::CreatefavoriteRequest()
{
    bodyIsSet_ = false;
}

CreatefavoriteRequest::~CreatefavoriteRequest() = default;

void CreatefavoriteRequest::validate()
{
}

web::json::value CreatefavoriteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreatefavoriteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreatefavoriteReqbody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreatefavoriteReqbody CreatefavoriteRequest::getBody() const
{
    return body_;
}

void CreatefavoriteRequest::setBody(const CreatefavoriteReqbody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatefavoriteRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatefavoriteRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


