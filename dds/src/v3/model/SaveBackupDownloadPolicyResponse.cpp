

#include "huaweicloud/dds/v3/model/SaveBackupDownloadPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




SaveBackupDownloadPolicyResponse::SaveBackupDownloadPolicyResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

SaveBackupDownloadPolicyResponse::~SaveBackupDownloadPolicyResponse() = default;

void SaveBackupDownloadPolicyResponse::validate()
{
}

web::json::value SaveBackupDownloadPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SaveBackupDownloadPolicyResponse::fromJson(const web::json::value& val)
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


std::string SaveBackupDownloadPolicyResponse::getBody() const
{
    return body_;
}

void SaveBackupDownloadPolicyResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SaveBackupDownloadPolicyResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void SaveBackupDownloadPolicyResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


