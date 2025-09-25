

#include "huaweicloud/codehub/v4/model/ListProjectMergeRequestApproverSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListProjectMergeRequestApproverSettingsResponse::ListProjectMergeRequestApproverSettingsResponse()
{
    bodyIsSet_ = false;
}

ListProjectMergeRequestApproverSettingsResponse::~ListProjectMergeRequestApproverSettingsResponse() = default;

void ListProjectMergeRequestApproverSettingsResponse::validate()
{
}

web::json::value ListProjectMergeRequestApproverSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListProjectMergeRequestApproverSettingsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestApproverSettingResultDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::vector<MergeRequestApproverSettingResultDto>& ListProjectMergeRequestApproverSettingsResponse::getBody()
{
    return body_;
}

void ListProjectMergeRequestApproverSettingsResponse::setBody(const std::vector<MergeRequestApproverSettingResultDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListProjectMergeRequestApproverSettingsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListProjectMergeRequestApproverSettingsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


