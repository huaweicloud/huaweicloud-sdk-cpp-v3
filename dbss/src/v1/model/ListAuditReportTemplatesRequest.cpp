

#include "huaweicloud/dbss/v1/model/ListAuditReportTemplatesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditReportTemplatesRequest::ListAuditReportTemplatesRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListAuditReportTemplatesRequest::~ListAuditReportTemplatesRequest() = default;

void ListAuditReportTemplatesRequest::validate()
{
}

web::json::value ListAuditReportTemplatesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListAuditReportTemplatesRequest::fromJson(const web::json::value& val)
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


std::string ListAuditReportTemplatesRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditReportTemplatesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditReportTemplatesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditReportTemplatesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


