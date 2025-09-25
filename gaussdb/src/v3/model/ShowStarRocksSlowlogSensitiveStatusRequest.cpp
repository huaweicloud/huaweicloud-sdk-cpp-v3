

#include "huaweicloud/gaussdb/v3/model/ShowStarRocksSlowlogSensitiveStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowStarRocksSlowlogSensitiveStatusRequest::ShowStarRocksSlowlogSensitiveStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowStarRocksSlowlogSensitiveStatusRequest::~ShowStarRocksSlowlogSensitiveStatusRequest() = default;

void ShowStarRocksSlowlogSensitiveStatusRequest::validate()
{
}

web::json::value ShowStarRocksSlowlogSensitiveStatusRequest::toJson() const
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
bool ShowStarRocksSlowlogSensitiveStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowStarRocksSlowlogSensitiveStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowStarRocksSlowlogSensitiveStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowStarRocksSlowlogSensitiveStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowStarRocksSlowlogSensitiveStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowStarRocksSlowlogSensitiveStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowStarRocksSlowlogSensitiveStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowStarRocksSlowlogSensitiveStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowStarRocksSlowlogSensitiveStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


