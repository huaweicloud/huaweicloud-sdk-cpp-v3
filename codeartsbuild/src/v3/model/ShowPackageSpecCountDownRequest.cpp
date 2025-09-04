

#include "huaweicloud/codeartsbuild/v3/model/ShowPackageSpecCountDownRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowPackageSpecCountDownRequest::ShowPackageSpecCountDownRequest()
{
    bodyIsSet_ = false;
}

ShowPackageSpecCountDownRequest::~ShowPackageSpecCountDownRequest() = default;

void ShowPackageSpecCountDownRequest::validate()
{
}

web::json::value ShowPackageSpecCountDownRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowPackageSpecCountDownRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CountdownRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CountdownRequestBody ShowPackageSpecCountDownRequest::getBody() const
{
    return body_;
}

void ShowPackageSpecCountDownRequest::setBody(const CountdownRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowPackageSpecCountDownRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowPackageSpecCountDownRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


