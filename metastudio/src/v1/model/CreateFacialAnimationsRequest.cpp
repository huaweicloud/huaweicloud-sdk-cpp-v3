

#include "huaweicloud/metastudio/v1/model/CreateFacialAnimationsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateFacialAnimationsRequest::CreateFacialAnimationsRequest()
{
    bodyIsSet_ = false;
}

CreateFacialAnimationsRequest::~CreateFacialAnimationsRequest() = default;

void CreateFacialAnimationsRequest::validate()
{
}

web::json::value CreateFacialAnimationsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateFacialAnimationsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateFASReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateFASReq CreateFacialAnimationsRequest::getBody() const
{
    return body_;
}

void CreateFacialAnimationsRequest::setBody(const CreateFASReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFacialAnimationsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFacialAnimationsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


