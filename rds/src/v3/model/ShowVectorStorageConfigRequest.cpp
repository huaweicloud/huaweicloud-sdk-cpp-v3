

#include "huaweicloud/rds/v3/model/ShowVectorStorageConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowVectorStorageConfigRequest::ShowVectorStorageConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowVectorStorageConfigRequest::~ShowVectorStorageConfigRequest() = default;

void ShowVectorStorageConfigRequest::validate()
{
}

web::json::value ShowVectorStorageConfigRequest::toJson() const
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
bool ShowVectorStorageConfigRequest::fromJson(const web::json::value& val)
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


std::string ShowVectorStorageConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowVectorStorageConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowVectorStorageConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowVectorStorageConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowVectorStorageConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowVectorStorageConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowVectorStorageConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowVectorStorageConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


