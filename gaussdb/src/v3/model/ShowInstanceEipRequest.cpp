

#include "huaweicloud/gaussdb/v3/model/ShowInstanceEipRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowInstanceEipRequest::ShowInstanceEipRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceEipRequest::~ShowInstanceEipRequest() = default;

void ShowInstanceEipRequest::validate()
{
}

web::json::value ShowInstanceEipRequest::toJson() const
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
bool ShowInstanceEipRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceEipRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceEipRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceEipRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceEipRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceEipRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceEipRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceEipRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceEipRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


