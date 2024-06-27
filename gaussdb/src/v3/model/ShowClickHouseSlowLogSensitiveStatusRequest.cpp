

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseSlowLogSensitiveStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseSlowLogSensitiveStatusRequest::ShowClickHouseSlowLogSensitiveStatusRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    xLanguage_ = "";
    xLanguageIsSet_ = false;
}

ShowClickHouseSlowLogSensitiveStatusRequest::~ShowClickHouseSlowLogSensitiveStatusRequest() = default;

void ShowClickHouseSlowLogSensitiveStatusRequest::validate()
{
}

web::json::value ShowClickHouseSlowLogSensitiveStatusRequest::toJson() const
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
bool ShowClickHouseSlowLogSensitiveStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowClickHouseSlowLogSensitiveStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowClickHouseSlowLogSensitiveStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowClickHouseSlowLogSensitiveStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowClickHouseSlowLogSensitiveStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowClickHouseSlowLogSensitiveStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowClickHouseSlowLogSensitiveStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowClickHouseSlowLogSensitiveStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowClickHouseSlowLogSensitiveStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

}
}
}
}
}


