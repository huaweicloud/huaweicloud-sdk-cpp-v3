

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceDiskRequest::ShowInstanceDiskRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceDiskRequest::~ShowInstanceDiskRequest() = default;

void ShowInstanceDiskRequest::validate()
{
}

web::json::value ShowInstanceDiskRequest::toJson() const
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

bool ShowInstanceDiskRequest::fromJson(const web::json::value& val)
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

std::string ShowInstanceDiskRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceDiskRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceDiskRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceDiskRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceDiskRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceDiskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceDiskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceDiskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


