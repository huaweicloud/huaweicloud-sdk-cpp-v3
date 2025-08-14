

#include "huaweicloud/identitycenter/v1/model/UpdateApplicationInstanceStatusReqBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




UpdateApplicationInstanceStatusReqBody::UpdateApplicationInstanceStatusReqBody()
{
    status_ = "";
    statusIsSet_ = false;
}

UpdateApplicationInstanceStatusReqBody::~UpdateApplicationInstanceStatusReqBody() = default;

void UpdateApplicationInstanceStatusReqBody::validate()
{
}

web::json::value UpdateApplicationInstanceStatusReqBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool UpdateApplicationInstanceStatusReqBody::fromJson(const web::json::value& val)
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


std::string UpdateApplicationInstanceStatusReqBody::getStatus() const
{
    return status_;
}

void UpdateApplicationInstanceStatusReqBody::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateApplicationInstanceStatusReqBody::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateApplicationInstanceStatusReqBody::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


