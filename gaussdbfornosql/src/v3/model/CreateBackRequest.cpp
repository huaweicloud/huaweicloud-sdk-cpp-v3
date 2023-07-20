

#include "huaweicloud/gaussdbfornosql/v3/model/CreateBackRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CreateBackRequest::CreateBackRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateBackRequest::~CreateBackRequest() = default;

void CreateBackRequest::validate()
{
}

web::json::value CreateBackRequest::toJson() const
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

bool CreateBackRequest::fromJson(const web::json::value& val)
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
            NoSqlCreateBackupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string CreateBackRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateBackRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateBackRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateBackRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

NoSqlCreateBackupRequestBody CreateBackRequest::getBody() const
{
    return body_;
}

void CreateBackRequest::setBody(const NoSqlCreateBackupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateBackRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateBackRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


