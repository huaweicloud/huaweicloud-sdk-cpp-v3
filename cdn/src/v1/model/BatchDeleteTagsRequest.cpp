

#include "huaweicloud/cdn/v1/model/BatchDeleteTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




BatchDeleteTagsRequest::BatchDeleteTagsRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteTagsRequest::~BatchDeleteTagsRequest() = default;

void BatchDeleteTagsRequest::validate()
{
}

web::json::value BatchDeleteTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteTagsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteTagsRequestBody BatchDeleteTagsRequest::getBody() const
{
    return body_;
}

void BatchDeleteTagsRequest::setBody(const DeleteTagsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


