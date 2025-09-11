

#include "huaweicloud/dbss/v1/model/ListAuditInstanceJobsNewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditInstanceJobsNewRequest::ListAuditInstanceJobsNewRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

ListAuditInstanceJobsNewRequest::~ListAuditInstanceJobsNewRequest() = default;

void ListAuditInstanceJobsNewRequest::validate()
{
}

web::json::value ListAuditInstanceJobsNewRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool ListAuditInstanceJobsNewRequest::fromJson(const web::json::value& val)
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


std::string ListAuditInstanceJobsNewRequest::getResourceId() const
{
    return resourceId_;
}

void ListAuditInstanceJobsNewRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool ListAuditInstanceJobsNewRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void ListAuditInstanceJobsNewRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


