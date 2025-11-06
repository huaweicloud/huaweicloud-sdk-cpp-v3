

#include "huaweicloud/codeartsrepo/v4/model/ListMergeRequestApproverSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ListMergeRequestApproverSettingsResponse::ListMergeRequestApproverSettingsResponse()
{
    bodyIsSet_ = false;
}

ListMergeRequestApproverSettingsResponse::~ListMergeRequestApproverSettingsResponse() = default;

void ListMergeRequestApproverSettingsResponse::validate()
{
}

web::json::value ListMergeRequestApproverSettingsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ListMergeRequestApproverSettingsResponse::fromJson(const web::json::value& val)
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


std::vector<MergeRequestApproverSettingResultDto>& ListMergeRequestApproverSettingsResponse::getBody()
{
    return body_;
}

void ListMergeRequestApproverSettingsResponse::setBody(const std::vector<MergeRequestApproverSettingResultDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListMergeRequestApproverSettingsResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListMergeRequestApproverSettingsResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


