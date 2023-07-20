

#include "huaweicloud/dds/v3/model/MigrateAzRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




MigrateAzRequest::MigrateAzRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

MigrateAzRequest::~MigrateAzRequest() = default;

void MigrateAzRequest::validate()
{
}

web::json::value MigrateAzRequest::toJson() const
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

bool MigrateAzRequest::fromJson(const web::json::value& val)
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
            MigrateAzRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string MigrateAzRequest::getInstanceId() const
{
    return instanceId_;
}

void MigrateAzRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool MigrateAzRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void MigrateAzRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

MigrateAzRequestBody MigrateAzRequest::getBody() const
{
    return body_;
}

void MigrateAzRequest::setBody(const MigrateAzRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool MigrateAzRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void MigrateAzRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


