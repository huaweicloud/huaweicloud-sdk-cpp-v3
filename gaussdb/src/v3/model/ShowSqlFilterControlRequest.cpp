

#include "huaweicloud/gaussdb/v3/model/ShowSqlFilterControlRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowSqlFilterControlRequest::ShowSqlFilterControlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSqlFilterControlRequest::~ShowSqlFilterControlRequest() = default;

void ShowSqlFilterControlRequest::validate()
{
}

web::json::value ShowSqlFilterControlRequest::toJson() const
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

bool ShowSqlFilterControlRequest::fromJson(const web::json::value& val)
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

std::string ShowSqlFilterControlRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSqlFilterControlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSqlFilterControlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSqlFilterControlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSqlFilterControlRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSqlFilterControlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSqlFilterControlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSqlFilterControlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


