

#include "huaweicloud/mpc/v1/model/CreateMergeChannelsTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateMergeChannelsTaskRequest::CreateMergeChannelsTaskRequest()
{
    bodyIsSet_ = false;
}

CreateMergeChannelsTaskRequest::~CreateMergeChannelsTaskRequest() = default;

void CreateMergeChannelsTaskRequest::validate()
{
}

web::json::value CreateMergeChannelsTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateMergeChannelsTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateMergeChannelsReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateMergeChannelsReq CreateMergeChannelsTaskRequest::getBody() const
{
    return body_;
}

void CreateMergeChannelsTaskRequest::setBody(const CreateMergeChannelsReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateMergeChannelsTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateMergeChannelsTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


