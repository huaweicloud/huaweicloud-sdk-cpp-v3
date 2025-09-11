

#include "huaweicloud/dbss/v1/model/ListAuditTrendHistoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditTrendHistoryRequest::ListAuditTrendHistoryRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ListAuditTrendHistoryRequest::~ListAuditTrendHistoryRequest() = default;

void ListAuditTrendHistoryRequest::validate()
{
}

web::json::value ListAuditTrendHistoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ListAuditTrendHistoryRequest::fromJson(const web::json::value& val)
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


std::string ListAuditTrendHistoryRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditTrendHistoryRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditTrendHistoryRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditTrendHistoryRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


