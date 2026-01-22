

#include "huaweicloud/cfw/v1/model/BatchDeleteBlackWhiteListsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteBlackWhiteListsRequest::BatchDeleteBlackWhiteListsRequest()
{
    bodyIsSet_ = false;
}

BatchDeleteBlackWhiteListsRequest::~BatchDeleteBlackWhiteListsRequest() = default;

void BatchDeleteBlackWhiteListsRequest::validate()
{
}

web::json::value BatchDeleteBlackWhiteListsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteBlackWhiteListsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteBlackWhiteDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


DeleteBlackWhiteDto BatchDeleteBlackWhiteListsRequest::getBody() const
{
    return body_;
}

void BatchDeleteBlackWhiteListsRequest::setBody(const DeleteBlackWhiteDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteBlackWhiteListsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteBlackWhiteListsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


