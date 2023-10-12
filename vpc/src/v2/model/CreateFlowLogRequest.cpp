

#include "huaweicloud/vpc/v2/model/CreateFlowLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateFlowLogRequest::CreateFlowLogRequest()
{
    bodyIsSet_ = false;
}

CreateFlowLogRequest::~CreateFlowLogRequest() = default;

void CreateFlowLogRequest::validate()
{
}

web::json::value CreateFlowLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateFlowLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateFlowLogReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateFlowLogReqBody CreateFlowLogRequest::getBody() const
{
    return body_;
}

void CreateFlowLogRequest::setBody(const CreateFlowLogReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFlowLogRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFlowLogRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


