

#include "huaweicloud/tms/v1/model/CreatePredefineTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




CreatePredefineTagsRequest::CreatePredefineTagsRequest()
{
    bodyIsSet_ = false;
}

CreatePredefineTagsRequest::~CreatePredefineTagsRequest() = default;

void CreatePredefineTagsRequest::validate()
{
}

web::json::value CreatePredefineTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreatePredefineTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReqCreatePredefineTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ReqCreatePredefineTag CreatePredefineTagsRequest::getBody() const
{
    return body_;
}

void CreatePredefineTagsRequest::setBody(const ReqCreatePredefineTag& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreatePredefineTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreatePredefineTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


