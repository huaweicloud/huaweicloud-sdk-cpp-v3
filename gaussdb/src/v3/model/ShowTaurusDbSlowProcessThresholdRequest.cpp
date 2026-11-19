

#include "huaweicloud/gaussdb/v3/model/ShowTaurusDbSlowProcessThresholdRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowTaurusDbSlowProcessThresholdRequest::ShowTaurusDbSlowProcessThresholdRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowTaurusDbSlowProcessThresholdRequest::~ShowTaurusDbSlowProcessThresholdRequest() = default;

void ShowTaurusDbSlowProcessThresholdRequest::validate()
{
}

web::json::value ShowTaurusDbSlowProcessThresholdRequest::toJson() const
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
bool ShowTaurusDbSlowProcessThresholdRequest::fromJson(const web::json::value& val)
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


std::string ShowTaurusDbSlowProcessThresholdRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowTaurusDbSlowProcessThresholdRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowTaurusDbSlowProcessThresholdRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowTaurusDbSlowProcessThresholdRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowTaurusDbSlowProcessThresholdRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowTaurusDbSlowProcessThresholdRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowTaurusDbSlowProcessThresholdRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowTaurusDbSlowProcessThresholdRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


