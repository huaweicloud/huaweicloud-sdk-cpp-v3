

#include "huaweicloud/dds/v3/model/UpdateBackupDownloadPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateBackupDownloadPolicyRequest::UpdateBackupDownloadPolicyRequest()
{
    bodyIsSet_ = false;
}

UpdateBackupDownloadPolicyRequest::~UpdateBackupDownloadPolicyRequest() = default;

void UpdateBackupDownloadPolicyRequest::validate()
{
}

web::json::value UpdateBackupDownloadPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBackupDownloadPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateBackupDownloadPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


UpdateBackupDownloadPolicyRequestBody UpdateBackupDownloadPolicyRequest::getBody() const
{
    return body_;
}

void UpdateBackupDownloadPolicyRequest::setBody(const UpdateBackupDownloadPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBackupDownloadPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBackupDownloadPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


