

#include "huaweicloud/dbss/v1/model/ListAuditBackupRiskTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditBackupRiskTemplatesRequest::ListAuditBackupRiskTemplatesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListAuditBackupRiskTemplatesRequest::~ListAuditBackupRiskTemplatesRequest() = default;

void ListAuditBackupRiskTemplatesRequest::validate()
{
}

web::json::value ListAuditBackupRiskTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListAuditBackupRiskTemplatesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListAuditBackupRiskTemplatesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditBackupRiskTemplatesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditBackupRiskTemplatesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditBackupRiskTemplatesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


