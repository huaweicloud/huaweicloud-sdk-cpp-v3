

#include "huaweicloud/dbss/v1/model/ListAuditInstanceJobsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstanceJobsRequest::ListAuditInstanceJobsRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ListAuditInstanceJobsRequest::~ListAuditInstanceJobsRequest() = default;

void ListAuditInstanceJobsRequest::validate()
{
}

web::json::value ListAuditInstanceJobsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ListAuditInstanceJobsRequest::fromJson(const web::json::value& val)
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


std::string ListAuditInstanceJobsRequest::getResourceId() const
{
    return resourceId_;
}

void ListAuditInstanceJobsRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListAuditInstanceJobsRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListAuditInstanceJobsRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


