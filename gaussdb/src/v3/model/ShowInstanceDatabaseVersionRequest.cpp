

#include "huaweicloud/gaussdb/v3/model/ShowInstanceDatabaseVersionRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceDatabaseVersionRequest::ShowInstanceDatabaseVersionRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceDatabaseVersionRequest::~ShowInstanceDatabaseVersionRequest() = default;

void ShowInstanceDatabaseVersionRequest::validate()
{
}

web::json::value ShowInstanceDatabaseVersionRequest::toJson() const
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
bool ShowInstanceDatabaseVersionRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceDatabaseVersionRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceDatabaseVersionRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceDatabaseVersionRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceDatabaseVersionRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceDatabaseVersionRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceDatabaseVersionRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceDatabaseVersionRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceDatabaseVersionRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


