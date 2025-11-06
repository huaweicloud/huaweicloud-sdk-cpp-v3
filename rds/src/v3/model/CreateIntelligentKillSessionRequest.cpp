

#include "huaweicloud/rds/v3/model/CreateIntelligentKillSessionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CreateIntelligentKillSessionRequest::CreateIntelligentKillSessionRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateIntelligentKillSessionRequest::~CreateIntelligentKillSessionRequest() = default;

void CreateIntelligentKillSessionRequest::validate()
{
}

web::json::value CreateIntelligentKillSessionRequest::toJson() const
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
bool CreateIntelligentKillSessionRequest::fromJson(const web::json::value& val)
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
            IntelligentKillSessionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateIntelligentKillSessionRequest::getInstanceId() const
{
    return instanceId_;
}

void CreateIntelligentKillSessionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool CreateIntelligentKillSessionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void CreateIntelligentKillSessionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

IntelligentKillSessionReq CreateIntelligentKillSessionRequest::getBody() const
{
    return body_;
}

void CreateIntelligentKillSessionRequest::setBody(const IntelligentKillSessionReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateIntelligentKillSessionRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateIntelligentKillSessionRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


