

#include "huaweicloud/gaussdb/v3/model/ExecuteKillAllProcessRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ExecuteKillAllProcessRequest::ExecuteKillAllProcessRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ExecuteKillAllProcessRequest::~ExecuteKillAllProcessRequest() = default;

void ExecuteKillAllProcessRequest::validate()
{
}

web::json::value ExecuteKillAllProcessRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool ExecuteKillAllProcessRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ExecuteKillAllProcessRequest::getXLanguage() const
{
    return xLanguage_;
}

void ExecuteKillAllProcessRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ExecuteKillAllProcessRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ExecuteKillAllProcessRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ExecuteKillAllProcessRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteKillAllProcessRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteKillAllProcessRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteKillAllProcessRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


