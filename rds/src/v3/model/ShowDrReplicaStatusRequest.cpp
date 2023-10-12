

#include "huaweicloud/rds/v3/model/ShowDrReplicaStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowDrReplicaStatusRequest::ShowDrReplicaStatusRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowDrReplicaStatusRequest::~ShowDrReplicaStatusRequest() = default;

void ShowDrReplicaStatusRequest::validate()
{
}

web::json::value ShowDrReplicaStatusRequest::toJson() const
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
bool ShowDrReplicaStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowDrReplicaStatusRequest::getXLanguage() const
{
    return xLanguage_;
}

void ShowDrReplicaStatusRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ShowDrReplicaStatusRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ShowDrReplicaStatusRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ShowDrReplicaStatusRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowDrReplicaStatusRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowDrReplicaStatusRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowDrReplicaStatusRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


