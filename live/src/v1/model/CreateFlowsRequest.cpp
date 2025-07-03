

#include "huaweicloud/live/v1/model/CreateFlowsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateFlowsRequest::CreateFlowsRequest()
{
    bodyIsSet_ = false;
}

CreateFlowsRequest::~CreateFlowsRequest() = default;

void CreateFlowsRequest::validate()
{
}

web::json::value CreateFlowsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateFlowsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateFlowsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateFlowsRequestBody CreateFlowsRequest::getBody() const
{
    return body_;
}

void CreateFlowsRequest::setBody(const CreateFlowsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateFlowsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateFlowsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


