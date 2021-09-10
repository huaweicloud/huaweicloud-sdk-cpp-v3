

#include "huaweicloud/frs/v2/model/CreateFaceSetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Frs {
namespace V2 {
namespace Model {




CreateFaceSetRequest::CreateFaceSetRequest()
{
    bodyIsSet_ = false;
}

CreateFaceSetRequest::~CreateFaceSetRequest() = default;

void CreateFaceSetRequest::validate()
{
}

web::json::value CreateFaceSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateFaceSetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateFaceSetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateFaceSetReq CreateFaceSetRequest::getBody() const
{
    return body_;
}

void CreateFaceSetRequest::setBody(const CreateFaceSetReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFaceSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFaceSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


