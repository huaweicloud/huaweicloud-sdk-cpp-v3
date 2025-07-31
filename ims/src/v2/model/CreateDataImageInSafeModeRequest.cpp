

#include "huaweicloud/ims/v2/model/CreateDataImageInSafeModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateDataImageInSafeModeRequest::CreateDataImageInSafeModeRequest()
{
    bodyIsSet_ = false;
}

CreateDataImageInSafeModeRequest::~CreateDataImageInSafeModeRequest() = default;

void CreateDataImageInSafeModeRequest::validate()
{
}

web::json::value CreateDataImageInSafeModeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateDataImageInSafeModeRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateDataImageRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateDataImageRequestBody CreateDataImageInSafeModeRequest::getBody() const
{
    return body_;
}

void CreateDataImageInSafeModeRequest::setBody(const CreateDataImageRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateDataImageInSafeModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateDataImageInSafeModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


