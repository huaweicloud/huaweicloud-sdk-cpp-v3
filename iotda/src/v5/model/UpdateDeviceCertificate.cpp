

#include "huaweicloud/iotda/v5/model/UpdateDeviceCertificate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceCertificate::UpdateDeviceCertificate()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateDeviceCertificate::~UpdateDeviceCertificate() = default;

void UpdateDeviceCertificate::validate()
{
}

web::json::value UpdateDeviceCertificate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateDeviceCertificate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceCertificate::getStatus() const
{
    return status_;
}

void UpdateDeviceCertificate::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDeviceCertificate::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDeviceCertificate::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


