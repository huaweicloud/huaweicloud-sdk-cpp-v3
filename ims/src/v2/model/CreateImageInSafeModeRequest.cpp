

#include "huaweicloud/ims/v2/model/CreateImageInSafeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateImageInSafeModeRequest::CreateImageInSafeModeRequest()
{
    bodyIsSet_ = false;
}

CreateImageInSafeModeRequest::~CreateImageInSafeModeRequest() = default;

void CreateImageInSafeModeRequest::validate()
{
}

web::json::value CreateImageInSafeModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateImageInSafeModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateImageRequestBody CreateImageInSafeModeRequest::getBody() const
{
    return body_;
}

void CreateImageInSafeModeRequest::setBody(const CreateImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateImageInSafeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateImageInSafeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


