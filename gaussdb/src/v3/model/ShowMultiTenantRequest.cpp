

#include "huaweicloud/gaussdb/v3/model/ShowMultiTenantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowMultiTenantRequest::ShowMultiTenantRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowMultiTenantRequest::~ShowMultiTenantRequest() = default;

void ShowMultiTenantRequest::validate()
{
}

web::json::value ShowMultiTenantRequest::toJson() const
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
bool ShowMultiTenantRequest::fromJson(const web::json::value& val)
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


std::string ShowMultiTenantRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowMultiTenantRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowMultiTenantRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowMultiTenantRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowMultiTenantRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowMultiTenantRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowMultiTenantRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowMultiTenantRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


