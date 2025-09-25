

#include "huaweicloud/gaussdbforopengauss/v3/model/StopFullSqlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




StopFullSqlRequest::StopFullSqlRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

StopFullSqlRequest::~StopFullSqlRequest() = default;

void StopFullSqlRequest::validate()
{
}

web::json::value StopFullSqlRequest::toJson() const
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
bool StopFullSqlRequest::fromJson(const web::json::value& val)
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


std::string StopFullSqlRequest::getXLanguage() const
{
    return xLanguage_;
}

void StopFullSqlRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool StopFullSqlRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void StopFullSqlRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string StopFullSqlRequest::getInstanceId() const
{
    return instanceId_;
}

void StopFullSqlRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool StopFullSqlRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void StopFullSqlRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


