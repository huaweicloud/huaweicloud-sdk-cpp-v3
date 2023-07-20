

#include "huaweicloud/dds/v3/model/CreateManualBackupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateManualBackupRequest::CreateManualBackupRequest()
{
    bodyIsSet_ = false;
}

CreateManualBackupRequest::~CreateManualBackupRequest() = default;

void CreateManualBackupRequest::validate()
{
}

web::json::value CreateManualBackupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool CreateManualBackupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateManualBackupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

CreateManualBackupRequestBody CreateManualBackupRequest::getBody() const
{
    return body_;
}

void CreateManualBackupRequest::setBody(const CreateManualBackupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateManualBackupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateManualBackupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


