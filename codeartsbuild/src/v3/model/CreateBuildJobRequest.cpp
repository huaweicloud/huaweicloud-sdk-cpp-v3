

#include "huaweicloud/codeartsbuild/v3/model/CreateBuildJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateBuildJobRequest::CreateBuildJobRequest()
{
    bodyIsSet_ = false;
}

CreateBuildJobRequest::~CreateBuildJobRequest() = default;

void CreateBuildJobRequest::validate()
{
}

web::json::value CreateBuildJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateBuildJobRequest::fromJson(const web::json::value& val)
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


CreateBuildJobRequestBody CreateBuildJobRequest::getBody() const
{
    return body_;
}

void CreateBuildJobRequest::setBody(const CreateBuildJobRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBuildJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBuildJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


