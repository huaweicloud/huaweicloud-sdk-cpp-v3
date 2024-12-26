

#include "huaweicloud/cfw/v1/model/ShowAntiVirusSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAntiVirusSwitchRequest::ShowAntiVirusSwitchRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowAntiVirusSwitchRequest::~ShowAntiVirusSwitchRequest() = default;

void ShowAntiVirusSwitchRequest::validate()
{
}

web::json::value ShowAntiVirusSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowAntiVirusSwitchRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowAntiVirusSwitchRequest::getObjectId() const
{
    return objectId_;
}

void ShowAntiVirusSwitchRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ShowAntiVirusSwitchRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ShowAntiVirusSwitchRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ShowAntiVirusSwitchRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowAntiVirusSwitchRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowAntiVirusSwitchRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowAntiVirusSwitchRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


