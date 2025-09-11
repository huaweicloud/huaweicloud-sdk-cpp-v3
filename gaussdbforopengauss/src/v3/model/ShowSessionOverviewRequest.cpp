

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowSessionOverviewRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowSessionOverviewRequest::ShowSessionOverviewRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowSessionOverviewRequest::~ShowSessionOverviewRequest() = default;

void ShowSessionOverviewRequest::validate()
{
}

web::json::value ShowSessionOverviewRequest::toJson() const
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
bool ShowSessionOverviewRequest::fromJson(const web::json::value& val)
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


std::string ShowSessionOverviewRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowSessionOverviewRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowSessionOverviewRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowSessionOverviewRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowSessionOverviewRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowSessionOverviewRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowSessionOverviewRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowSessionOverviewRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


