

#include "huaweicloud/cdn/v1/model/CreateTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




CreateTagsRequest::CreateTagsRequest()
{
    bodyIsSet_ = false;
}

CreateTagsRequest::~CreateTagsRequest() = default;

void CreateTagsRequest::validate()
{
}

web::json::value CreateTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


CreateTagsRequestBody CreateTagsRequest::getBody() const
{
    return body_;
}

void CreateTagsRequest::setBody(const CreateTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


