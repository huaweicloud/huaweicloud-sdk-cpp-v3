

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowInstanceParamGroupDetailRequest::ShowInstanceParamGroupDetailRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowInstanceParamGroupDetailRequest::~ShowInstanceParamGroupDetailRequest() = default;

void ShowInstanceParamGroupDetailRequest::validate()
{
}

web::json::value ShowInstanceParamGroupDetailRequest::toJson() const
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
bool ShowInstanceParamGroupDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceParamGroupDetailRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowInstanceParamGroupDetailRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowInstanceParamGroupDetailRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowInstanceParamGroupDetailRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowInstanceParamGroupDetailRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceParamGroupDetailRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceParamGroupDetailRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceParamGroupDetailRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


