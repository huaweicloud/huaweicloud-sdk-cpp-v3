

#include "huaweicloud/drs/v3/model/ShowMonitoringDataRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ShowMonitoringDataRequest::ShowMonitoringDataRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    bodyIsSet_ = false;
}

ShowMonitoringDataRequest::~ShowMonitoringDataRequest() = default;

void ShowMonitoringDataRequest::validate()
{
}

web::json::value ShowMonitoringDataRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ShowMonitoringDataRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            BatchQueryJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowMonitoringDataRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowMonitoringDataRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowMonitoringDataRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowMonitoringDataRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

BatchQueryJobReq ShowMonitoringDataRequest::getBody() const
{
    return body_;
}

void ShowMonitoringDataRequest::setBody(const BatchQueryJobReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowMonitoringDataRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowMonitoringDataRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


