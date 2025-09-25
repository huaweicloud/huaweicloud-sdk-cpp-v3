

#include "huaweicloud/codehub/v4/model/ListGroupMergeRequestApproverSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListGroupMergeRequestApproverSettingsResponse::ListGroupMergeRequestApproverSettingsResponse()
{
    bodyIsSet_ = false;
}

ListGroupMergeRequestApproverSettingsResponse::~ListGroupMergeRequestApproverSettingsResponse() = default;

void ListGroupMergeRequestApproverSettingsResponse::validate()
{
}

web::json::value ListGroupMergeRequestApproverSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListGroupMergeRequestApproverSettingsResponse::fromJson(const web::json::value& val)
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


std::vector<MergeRequestApproverSettingResultDto>& ListGroupMergeRequestApproverSettingsResponse::getBody()
{
    return body_;
}

void ListGroupMergeRequestApproverSettingsResponse::setBody(const std::vector<MergeRequestApproverSettingResultDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListGroupMergeRequestApproverSettingsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListGroupMergeRequestApproverSettingsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


