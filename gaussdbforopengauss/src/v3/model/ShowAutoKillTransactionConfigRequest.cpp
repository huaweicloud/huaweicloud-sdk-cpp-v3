

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowAutoKillTransactionConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowAutoKillTransactionConfigRequest::ShowAutoKillTransactionConfigRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowAutoKillTransactionConfigRequest::~ShowAutoKillTransactionConfigRequest() = default;

void ShowAutoKillTransactionConfigRequest::validate()
{
}

web::json::value ShowAutoKillTransactionConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowAutoKillTransactionConfigRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string ShowAutoKillTransactionConfigRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowAutoKillTransactionConfigRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowAutoKillTransactionConfigRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowAutoKillTransactionConfigRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowAutoKillTransactionConfigRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowAutoKillTransactionConfigRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowAutoKillTransactionConfigRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowAutoKillTransactionConfigRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowAutoKillTransactionConfigRequest::getType() const
{
    return type_;
}

void ShowAutoKillTransactionConfigRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowAutoKillTransactionConfigRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ShowAutoKillTransactionConfigRequest::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


