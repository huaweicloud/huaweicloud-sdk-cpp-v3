

#include "huaweicloud/tms/v1/model/UpdatePredefineTagsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




UpdatePredefineTagsRequest::UpdatePredefineTagsRequest()
{
    bodyIsSet_ = false;
}

UpdatePredefineTagsRequest::~UpdatePredefineTagsRequest() = default;

void UpdatePredefineTagsRequest::validate()
{
}

web::json::value UpdatePredefineTagsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdatePredefineTagsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ModifyPrefineTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


ModifyPrefineTag UpdatePredefineTagsRequest::getBody() const
{
    return body_;
}

void UpdatePredefineTagsRequest::setBody(const ModifyPrefineTag& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdatePredefineTagsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdatePredefineTagsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


