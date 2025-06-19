

#include "huaweicloud/codeartsbuild/v3/model/CopyJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CopyJobRequest::CopyJobRequest()
{
    bodyIsSet_ = false;
}

CopyJobRequest::~CopyJobRequest() = default;

void CopyJobRequest::validate()
{
}

web::json::value CopyJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CopyJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CopyBuildJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CopyBuildJobRequestBody CopyJobRequest::getBody() const
{
    return body_;
}

void CopyJobRequest::setBody(const CopyBuildJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CopyJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CopyJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


