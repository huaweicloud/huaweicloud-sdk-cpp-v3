

#include "huaweicloud/sdrs/v1/model/CreateReplicationRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




CreateReplicationRequest::CreateReplicationRequest()
{
    bodyIsSet_ = false;
}

CreateReplicationRequest::~CreateReplicationRequest() = default;

void CreateReplicationRequest::validate()
{
}

web::json::value CreateReplicationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateReplicationRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateReplicationRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateReplicationRequestBody CreateReplicationRequest::getBody() const
{
    return body_;
}

void CreateReplicationRequest::setBody(const CreateReplicationRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateReplicationRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateReplicationRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


