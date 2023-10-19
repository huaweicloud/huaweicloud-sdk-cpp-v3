

#include "huaweicloud/cfw/v1/model/ListEipCountRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListEipCountRequest::ListEipCountRequest()
{
    objectId_ = "";
    objectIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListEipCountRequest::~ListEipCountRequest() = default;

void ListEipCountRequest::validate()
{
}

web::json::value ListEipCountRequest::toJson() const
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
bool ListEipCountRequest::fromJson(const web::json::value& val)
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


std::string ListEipCountRequest::getObjectId() const
{
    return objectId_;
}

void ListEipCountRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListEipCountRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListEipCountRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

std::string ListEipCountRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListEipCountRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListEipCountRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListEipCountRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListEipCountRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListEipCountRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListEipCountRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListEipCountRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


