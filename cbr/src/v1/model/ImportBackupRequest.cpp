

#include "huaweicloud/cbr/v1/model/ImportBackupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




ImportBackupRequest::ImportBackupRequest()
{
    bodyIsSet_ = false;
}

ImportBackupRequest::~ImportBackupRequest() = default;

void ImportBackupRequest::validate()
{
}

web::json::value ImportBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportBackupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BackupSyncReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


BackupSyncReq ImportBackupRequest::getBody() const
{
    return body_;
}

void ImportBackupRequest::setBody(const BackupSyncReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


