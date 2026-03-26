

#include "huaweicloud/rds/v3/model/ChangeBackupConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangeBackupConfigResponse::ChangeBackupConfigResponse()
{
    body_ = "";
    bodyIsSet_ = false;
}

ChangeBackupConfigResponse::~ChangeBackupConfigResponse() = default;

void ChangeBackupConfigResponse::validate()
{
}

web::json::value ChangeBackupConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeBackupConfigResponse::fromJson(const web::json::value& val)
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


std::string ChangeBackupConfigResponse::getBody() const
{
    return body_;
}

void ChangeBackupConfigResponse::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeBackupConfigResponse::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeBackupConfigResponse::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


