

#include "huaweicloud/mpc/v1/model/CreateEditingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateEditingJobRequest::CreateEditingJobRequest()
{
    bodyIsSet_ = false;
}

CreateEditingJobRequest::~CreateEditingJobRequest() = default;

void CreateEditingJobRequest::validate()
{
}

web::json::value CreateEditingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateEditingJobRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateEditingJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateEditingJobReq CreateEditingJobRequest::getBody() const
{
    return body_;
}

void CreateEditingJobRequest::setBody(const CreateEditingJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateEditingJobRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateEditingJobRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


