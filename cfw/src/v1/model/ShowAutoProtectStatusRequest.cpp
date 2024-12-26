

#include "huaweicloud/cfw/v1/model/ShowAutoProtectStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ShowAutoProtectStatusRequest::ShowAutoProtectStatusRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowAutoProtectStatusRequest::~ShowAutoProtectStatusRequest() = default;

void ShowAutoProtectStatusRequest::validate()
{
}

web::json::value ShowAutoProtectStatusRequest::toJson() const
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
bool ShowAutoProtectStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowAutoProtectStatusRequest::getObjectId() const
{
    return objectId_;
}

void ShowAutoProtectStatusRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ShowAutoProtectStatusRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ShowAutoProtectStatusRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ShowAutoProtectStatusRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowAutoProtectStatusRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowAutoProtectStatusRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowAutoProtectStatusRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


