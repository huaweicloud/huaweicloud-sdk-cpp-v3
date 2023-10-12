

#include "huaweicloud/rds/v3/model/ShowReplicationStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowReplicationStatusRequest::ShowReplicationStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowReplicationStatusRequest::~ShowReplicationStatusRequest() = default;

void ShowReplicationStatusRequest::validate()
{
}

web::json::value ShowReplicationStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }

    return val;
}
bool ShowReplicationStatusRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    return ok;
}


std::string ShowReplicationStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowReplicationStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowReplicationStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowReplicationStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowReplicationStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowReplicationStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowReplicationStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowReplicationStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


