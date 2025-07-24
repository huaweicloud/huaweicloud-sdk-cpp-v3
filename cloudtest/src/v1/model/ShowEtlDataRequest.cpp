

#include "huaweicloud/cloudtest/v1/model/ShowEtlDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ShowEtlDataRequest::ShowEtlDataRequest()
{
    bodyIsSet_ = false;
}

ShowEtlDataRequest::~ShowEtlDataRequest() = default;

void ShowEtlDataRequest::validate()
{
}

web::json::value ShowEtlDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowEtlDataRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            EtlRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


EtlRequestBody ShowEtlDataRequest::getBody() const
{
    return body_;
}

void ShowEtlDataRequest::setBody(const EtlRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowEtlDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowEtlDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


