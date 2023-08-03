

#include "huaweicloud/rds/v3/model/ChangeOpsWindowRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ChangeOpsWindowRequest::ChangeOpsWindowRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeOpsWindowRequest::~ChangeOpsWindowRequest() = default;

void ChangeOpsWindowRequest::validate()
{
}

web::json::value ChangeOpsWindowRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ChangeOpsWindowRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
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
            OpsWindowRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ChangeOpsWindowRequest::getXLanguage() const
{
    return xLanguage_;
}

void ChangeOpsWindowRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ChangeOpsWindowRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ChangeOpsWindowRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ChangeOpsWindowRequest::getInstanceId() const
{
    return instanceId_;
}

void ChangeOpsWindowRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ChangeOpsWindowRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ChangeOpsWindowRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

OpsWindowRequest ChangeOpsWindowRequest::getBody() const
{
    return body_;
}

void ChangeOpsWindowRequest::setBody(const OpsWindowRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeOpsWindowRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeOpsWindowRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


