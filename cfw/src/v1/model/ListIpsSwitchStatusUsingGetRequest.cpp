

#include "huaweicloud/cfw/v1/model/ListIpsSwitchStatusUsingGetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsSwitchStatusUsingGetRequest::ListIpsSwitchStatusUsingGetRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListIpsSwitchStatusUsingGetRequest::~ListIpsSwitchStatusUsingGetRequest() = default;

void ListIpsSwitchStatusUsingGetRequest::validate()
{
}

web::json::value ListIpsSwitchStatusUsingGetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool ListIpsSwitchStatusUsingGetRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    return ok;
}


std::string ListIpsSwitchStatusUsingGetRequest::getObjectId() const
{
    return objectId_;
}

void ListIpsSwitchStatusUsingGetRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListIpsSwitchStatusUsingGetRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListIpsSwitchStatusUsingGetRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListIpsSwitchStatusUsingGetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListIpsSwitchStatusUsingGetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListIpsSwitchStatusUsingGetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListIpsSwitchStatusUsingGetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListIpsSwitchStatusUsingGetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListIpsSwitchStatusUsingGetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListIpsSwitchStatusUsingGetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListIpsSwitchStatusUsingGetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


