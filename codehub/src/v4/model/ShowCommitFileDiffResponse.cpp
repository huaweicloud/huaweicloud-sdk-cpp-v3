

#include "huaweicloud/codehub/v4/model/ShowCommitFileDiffResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowCommitFileDiffResponse::ShowCommitFileDiffResponse()
{
    bodyIsSet_ = false;
}

ShowCommitFileDiffResponse::~ShowCommitFileDiffResponse() = default;

void ShowCommitFileDiffResponse::validate()
{
}

web::json::value ShowCommitFileDiffResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowCommitFileDiffResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<FileDiffDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<FileDiffDto>& ShowCommitFileDiffResponse::getBody()
{
    return body_;
}

void ShowCommitFileDiffResponse::setBody(const std::vector<FileDiffDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowCommitFileDiffResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowCommitFileDiffResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


