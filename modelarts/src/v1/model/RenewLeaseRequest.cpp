

#include "huaweicloud/modelarts/v1/model/RenewLeaseRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RenewLeaseRequest::RenewLeaseRequest()
{
    duration_ = 0L;
    durationIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    bodyIsSet_ = false;
}

RenewLeaseRequest::~RenewLeaseRequest() = default;

void RenewLeaseRequest::validate()
{
}

web::json::value RenewLeaseRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RenewLeaseRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LeaseReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int64_t RenewLeaseRequest::getDuration() const
{
    return duration_;
}

void RenewLeaseRequest::setDuration(int64_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool RenewLeaseRequest::durationIsSet() const
{
    return durationIsSet_;
}

void RenewLeaseRequest::unsetduration()
{
    durationIsSet_ = false;
}

std::string RenewLeaseRequest::getId() const
{
    return id_;
}

void RenewLeaseRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RenewLeaseRequest::idIsSet() const
{
    return idIsSet_;
}

void RenewLeaseRequest::unsetid()
{
    idIsSet_ = false;
}

LeaseReq RenewLeaseRequest::getBody() const
{
    return body_;
}

void RenewLeaseRequest::setBody(const LeaseReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RenewLeaseRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RenewLeaseRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


