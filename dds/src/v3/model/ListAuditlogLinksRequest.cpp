

#include "huaweicloud/dds/v3/model/ListAuditlogLinksRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListAuditlogLinksRequest::ListAuditlogLinksRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListAuditlogLinksRequest::~ListAuditlogLinksRequest() = default;

void ListAuditlogLinksRequest::validate()
{
}

web::json::value ListAuditlogLinksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ListAuditlogLinksRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ProduceAuditlogLinksRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ListAuditlogLinksRequest::getInstanceId() const
{
    return instanceId_;
}

void ListAuditlogLinksRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListAuditlogLinksRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListAuditlogLinksRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ProduceAuditlogLinksRequestBody ListAuditlogLinksRequest::getBody() const
{
    return body_;
}

void ListAuditlogLinksRequest::setBody(const ProduceAuditlogLinksRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListAuditlogLinksRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListAuditlogLinksRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


