

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterInstanceMonitorRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowCrossCloudDisasterInstanceMonitorRequest::ShowCrossCloudDisasterInstanceMonitorRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    disasterType_ = "";
    disasterTypeIsSet_ = false;
}

ShowCrossCloudDisasterInstanceMonitorRequest::~ShowCrossCloudDisasterInstanceMonitorRequest() = default;

void ShowCrossCloudDisasterInstanceMonitorRequest::validate()
{
}

web::json::value ShowCrossCloudDisasterInstanceMonitorRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(disasterTypeIsSet_) {
        val[utility::conversions::to_string_t("disaster_type")] = ModelBase::toJson(disasterType_);
    }

    return val;
}
bool ShowCrossCloudDisasterInstanceMonitorRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("disaster_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disaster_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisasterType(refVal);
        }
    }
    return ok;
}


std::string ShowCrossCloudDisasterInstanceMonitorRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowCrossCloudDisasterInstanceMonitorRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowCrossCloudDisasterInstanceMonitorRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowCrossCloudDisasterInstanceMonitorRequest::getDisasterType() const
{
    return disasterType_;
}

void ShowCrossCloudDisasterInstanceMonitorRequest::setDisasterType(const std::string& value)
{
    disasterType_ = value;
    disasterTypeIsSet_ = true;
}

bool ShowCrossCloudDisasterInstanceMonitorRequest::disasterTypeIsSet() const
{
    return disasterTypeIsSet_;
}

void ShowCrossCloudDisasterInstanceMonitorRequest::unsetdisasterType()
{
    disasterTypeIsSet_ = false;
}

}
}
}
}
}


