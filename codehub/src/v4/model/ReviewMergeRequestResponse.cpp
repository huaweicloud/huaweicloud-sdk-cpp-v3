

#include "huaweicloud/codehub/v4/model/ReviewMergeRequestResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ReviewMergeRequestResponse::ReviewMergeRequestResponse()
{
    bodyIsSet_ = false;
}

ReviewMergeRequestResponse::~ReviewMergeRequestResponse() = default;

void ReviewMergeRequestResponse::validate()
{
}

web::json::value ReviewMergeRequestResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ReviewMergeRequestResponse::fromJson(const web::json::value& val)
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


std::vector<ApproverBasicDto>& ReviewMergeRequestResponse::getBody()
{
    return body_;
}

void ReviewMergeRequestResponse::setBody(const std::vector<ApproverBasicDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ReviewMergeRequestResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ReviewMergeRequestResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


