

#include "huaweicloud/ims/v2/model/CreateOrUpdateTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




CreateOrUpdateTagsRequest::CreateOrUpdateTagsRequest()
{
    bodyIsSet_ = false;
}

CreateOrUpdateTagsRequest::~CreateOrUpdateTagsRequest() = default;

void CreateOrUpdateTagsRequest::validate()
{
}

web::json::value CreateOrUpdateTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateOrUpdateTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AddOrUpdateTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


AddOrUpdateTagsRequestBody CreateOrUpdateTagsRequest::getBody() const
{
    return body_;
}

void CreateOrUpdateTagsRequest::setBody(const AddOrUpdateTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateOrUpdateTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateOrUpdateTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


