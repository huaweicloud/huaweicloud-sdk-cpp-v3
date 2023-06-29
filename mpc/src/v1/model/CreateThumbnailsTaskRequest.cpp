

#include "huaweicloud/mpc/v1/model/CreateThumbnailsTaskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateThumbnailsTaskRequest::CreateThumbnailsTaskRequest()
{
    bodyIsSet_ = false;
}

CreateThumbnailsTaskRequest::~CreateThumbnailsTaskRequest() = default;

void CreateThumbnailsTaskRequest::validate()
{
}

web::json::value CreateThumbnailsTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateThumbnailsTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateThumbReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateThumbReq CreateThumbnailsTaskRequest::getBody() const
{
    return body_;
}

void CreateThumbnailsTaskRequest::setBody(const CreateThumbReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateThumbnailsTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateThumbnailsTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


