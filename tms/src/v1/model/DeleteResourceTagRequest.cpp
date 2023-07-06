

#include "huaweicloud/tms/v1/model/DeleteResourceTagRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




DeleteResourceTagRequest::DeleteResourceTagRequest()
{
    bodyIsSet_ = false;
}

DeleteResourceTagRequest::~DeleteResourceTagRequest() = default;

void DeleteResourceTagRequest::validate()
{
}

web::json::value DeleteResourceTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteResourceTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ReqDeleteTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

ReqDeleteTag DeleteResourceTagRequest::getBody() const
{
    return body_;
}

void DeleteResourceTagRequest::setBody(const ReqDeleteTag& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteResourceTagRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteResourceTagRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


