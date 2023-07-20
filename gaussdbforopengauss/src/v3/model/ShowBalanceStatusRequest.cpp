

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowBalanceStatusRequest::ShowBalanceStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowBalanceStatusRequest::~ShowBalanceStatusRequest() = default;

void ShowBalanceStatusRequest::validate()
{
}

web::json::value ShowBalanceStatusRequest::toJson() const
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

bool ShowBalanceStatusRequest::fromJson(const web::json::value& val)
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

std::string ShowBalanceStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowBalanceStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowBalanceStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowBalanceStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowBalanceStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowBalanceStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowBalanceStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowBalanceStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


