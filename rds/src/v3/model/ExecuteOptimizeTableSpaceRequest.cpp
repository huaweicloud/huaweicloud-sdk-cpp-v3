

#include "huaweicloud/rds/v3/model/ExecuteOptimizeTableSpaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExecuteOptimizeTableSpaceRequest::ExecuteOptimizeTableSpaceRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteOptimizeTableSpaceRequest::~ExecuteOptimizeTableSpaceRequest() = default;

void ExecuteOptimizeTableSpaceRequest::validate()
{
}

web::json::value ExecuteOptimizeTableSpaceRequest::toJson() const
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
bool ExecuteOptimizeTableSpaceRequest::fromJson(const web::json::value& val)
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
            ExecuteOptimizeTableSpaceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecuteOptimizeTableSpaceRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteOptimizeTableSpaceRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteOptimizeTableSpaceRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteOptimizeTableSpaceRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteOptimizeTableSpaceRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteOptimizeTableSpaceRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteOptimizeTableSpaceRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteOptimizeTableSpaceRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

ExecuteOptimizeTableSpaceRequestBody ExecuteOptimizeTableSpaceRequest::getBody() const
{
    return body_;
}

void ExecuteOptimizeTableSpaceRequest::setBody(const ExecuteOptimizeTableSpaceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteOptimizeTableSpaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteOptimizeTableSpaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


