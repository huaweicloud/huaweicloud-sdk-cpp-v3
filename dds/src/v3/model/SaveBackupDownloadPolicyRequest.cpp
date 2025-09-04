

#include "huaweicloud/dds/v3/model/SaveBackupDownloadPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SaveBackupDownloadPolicyRequest::SaveBackupDownloadPolicyRequest()
{
    bodyIsSet_ = false;
}

SaveBackupDownloadPolicyRequest::~SaveBackupDownloadPolicyRequest() = default;

void SaveBackupDownloadPolicyRequest::validate()
{
}

web::json::value SaveBackupDownloadPolicyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveBackupDownloadPolicyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            SaveBackupDownloadPolicyRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


SaveBackupDownloadPolicyRequestBody SaveBackupDownloadPolicyRequest::getBody() const
{
    return body_;
}

void SaveBackupDownloadPolicyRequest::setBody(const SaveBackupDownloadPolicyRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveBackupDownloadPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveBackupDownloadPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


