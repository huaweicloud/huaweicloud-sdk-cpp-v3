

#include "huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestApproversResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateMergeRequestApproversResponse::UpdateMergeRequestApproversResponse()
{
    bodyIsSet_ = false;
}

UpdateMergeRequestApproversResponse::~UpdateMergeRequestApproversResponse() = default;

void UpdateMergeRequestApproversResponse::validate()
{
}

web::json::value UpdateMergeRequestApproversResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateMergeRequestApproversResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ApproverBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<ApproverBasicDto>& UpdateMergeRequestApproversResponse::getBody()
{
    return body_;
}

void UpdateMergeRequestApproversResponse::setBody(const std::vector<ApproverBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateMergeRequestApproversResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateMergeRequestApproversResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


