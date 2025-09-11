

#include "huaweicloud/dbss/v1/model/UpdateAuditTaskStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




UpdateAuditTaskStatusRequest::UpdateAuditTaskStatusRequest()
{
    busiType_ = "";
    busiTypeIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAuditTaskStatusRequest::~UpdateAuditTaskStatusRequest() = default;

void UpdateAuditTaskStatusRequest::validate()
{
}

web::json::value UpdateAuditTaskStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(busiTypeIsSet_) {
        val[utility::conversions::to_string_t("busi_type")] = ModelBase::toJson(busiType_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAuditTaskStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("busi_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("busi_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusiType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AuditSummaryStatusRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAuditTaskStatusRequest::getBusiType() const
{
    return busiType_;
}

void UpdateAuditTaskStatusRequest::setBusiType(const std::string& value)
{
    busiType_ = value;
    busiTypeIsSet_ = true;
}

bool UpdateAuditTaskStatusRequest::busiTypeIsSet() const
{
    return busiTypeIsSet_;
}

void UpdateAuditTaskStatusRequest::unsetbusiType()
{
    busiTypeIsSet_ = false;
}

AuditSummaryStatusRequest UpdateAuditTaskStatusRequest::getBody() const
{
    return body_;
}

void UpdateAuditTaskStatusRequest::setBody(const AuditSummaryStatusRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAuditTaskStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAuditTaskStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


