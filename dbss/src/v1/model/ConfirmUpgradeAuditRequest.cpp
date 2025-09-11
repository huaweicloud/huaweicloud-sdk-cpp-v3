

#include "huaweicloud/dbss/v1/model/ConfirmUpgradeAuditRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ConfirmUpgradeAuditRequest::ConfirmUpgradeAuditRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ConfirmUpgradeAuditRequest::~ConfirmUpgradeAuditRequest() = default;

void ConfirmUpgradeAuditRequest::validate()
{
}

web::json::value ConfirmUpgradeAuditRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ConfirmUpgradeAuditRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


std::string ConfirmUpgradeAuditRequest::getResourceId() const
{
    return resourceId_;
}

void ConfirmUpgradeAuditRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ConfirmUpgradeAuditRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ConfirmUpgradeAuditRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


