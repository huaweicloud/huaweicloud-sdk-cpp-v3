

#include "huaweicloud/tms/v1/model/DeletePredefineTagsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




DeletePredefineTagsRequest::DeletePredefineTagsRequest()
{
    bodyIsSet_ = false;
}

DeletePredefineTagsRequest::~DeletePredefineTagsRequest() = default;

void DeletePredefineTagsRequest::validate()
{
}

web::json::value DeletePredefineTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeletePredefineTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReqDeletePredefineTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ReqDeletePredefineTag DeletePredefineTagsRequest::getBody() const
{
    return body_;
}

void DeletePredefineTagsRequest::setBody(const ReqDeletePredefineTag& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeletePredefineTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeletePredefineTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


