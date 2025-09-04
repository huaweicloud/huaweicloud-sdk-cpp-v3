

#include "huaweicloud/dds/v3/model/UpdateBackupDownloadPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateBackupDownloadPolicyResponse::UpdateBackupDownloadPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

UpdateBackupDownloadPolicyResponse::~UpdateBackupDownloadPolicyResponse() = default;

void UpdateBackupDownloadPolicyResponse::validate()
{
}

web::json::value UpdateBackupDownloadPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateBackupDownloadPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBackupDownloadPolicyResponse::getBody() const
{
    return body_;
}

void UpdateBackupDownloadPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBackupDownloadPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBackupDownloadPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


