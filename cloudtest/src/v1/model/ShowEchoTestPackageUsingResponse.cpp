

#include "huaweicloud/cloudtest/v1/model/ShowEchoTestPackageUsingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowEchoTestPackageUsingResponse::ShowEchoTestPackageUsingResponse()
{
    bodyIsSet_ = false;
}

ShowEchoTestPackageUsingResponse::~ShowEchoTestPackageUsingResponse() = default;

void ShowEchoTestPackageUsingResponse::validate()
{
}

web::json::value ShowEchoTestPackageUsingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowEchoTestPackageUsingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


Object ShowEchoTestPackageUsingResponse::getBody() const
{
    return body_;
}

void ShowEchoTestPackageUsingResponse::setBody(const Object& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowEchoTestPackageUsingResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowEchoTestPackageUsingResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


