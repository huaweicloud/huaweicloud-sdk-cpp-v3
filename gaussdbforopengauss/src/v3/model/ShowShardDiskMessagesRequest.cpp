

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowShardDiskMessagesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowShardDiskMessagesRequest::ShowShardDiskMessagesRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowShardDiskMessagesRequest::~ShowShardDiskMessagesRequest() = default;

void ShowShardDiskMessagesRequest::validate()
{
}

web::json::value ShowShardDiskMessagesRequest::toJson() const
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
bool ShowShardDiskMessagesRequest::fromJson(const web::json::value& val)
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


std::string ShowShardDiskMessagesRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowShardDiskMessagesRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowShardDiskMessagesRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowShardDiskMessagesRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowShardDiskMessagesRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowShardDiskMessagesRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowShardDiskMessagesRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowShardDiskMessagesRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


