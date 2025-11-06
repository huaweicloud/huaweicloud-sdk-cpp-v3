

#include "huaweicloud/codeartsrepo/v4/model/ApprovalMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ApprovalMergeRequestResponse::ApprovalMergeRequestResponse()
{
    bodyIsSet_ = false;
}

ApprovalMergeRequestResponse::~ApprovalMergeRequestResponse() = default;

void ApprovalMergeRequestResponse::validate()
{
}

web::json::value ApprovalMergeRequestResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ApprovalMergeRequestResponse::fromJson(const web::json::value& val)
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


std::vector<ApproverBasicDto>& ApprovalMergeRequestResponse::getBody()
{
    return body_;
}

void ApprovalMergeRequestResponse::setBody(const std::vector<ApproverBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ApprovalMergeRequestResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ApprovalMergeRequestResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


