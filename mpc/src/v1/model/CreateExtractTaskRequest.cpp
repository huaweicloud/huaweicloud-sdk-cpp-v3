

#include "huaweicloud/mpc/v1/model/CreateExtractTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateExtractTaskRequest::CreateExtractTaskRequest()
{
    bodyIsSet_ = false;
}

CreateExtractTaskRequest::~CreateExtractTaskRequest() = default;

void CreateExtractTaskRequest::validate()
{
}

web::json::value CreateExtractTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateExtractTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateExtractTaskReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateExtractTaskReq CreateExtractTaskRequest::getBody() const
{
    return body_;
}

void CreateExtractTaskRequest::setBody(const CreateExtractTaskReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateExtractTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateExtractTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


