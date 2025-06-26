

#include "huaweicloud/codeartsbuild/v3/model/CreateNewJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateNewJobRequest::CreateNewJobRequest()
{
    bodyIsSet_ = false;
}

CreateNewJobRequest::~CreateNewJobRequest() = default;

void CreateNewJobRequest::validate()
{
}

web::json::value CreateNewJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateNewJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateBuildJobRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateBuildJobRequestBody CreateNewJobRequest::getBody() const
{
    return body_;
}

void CreateNewJobRequest::setBody(const CreateBuildJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateNewJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateNewJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


