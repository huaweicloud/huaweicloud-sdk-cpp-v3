

#include "huaweicloud/rds/v3/model/ShowPostgresqlParamValueRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowPostgresqlParamValueRequest::ShowPostgresqlParamValueRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

ShowPostgresqlParamValueRequest::~ShowPostgresqlParamValueRequest() = default;

void ShowPostgresqlParamValueRequest::validate()
{
}

web::json::value ShowPostgresqlParamValueRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool ShowPostgresqlParamValueRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string ShowPostgresqlParamValueRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowPostgresqlParamValueRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowPostgresqlParamValueRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowPostgresqlParamValueRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowPostgresqlParamValueRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowPostgresqlParamValueRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowPostgresqlParamValueRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowPostgresqlParamValueRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowPostgresqlParamValueRequest::getName() const
{
    return name_;
}

void ShowPostgresqlParamValueRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPostgresqlParamValueRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPostgresqlParamValueRequest::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


