

#include "huaweicloud/cfw/v1/model/BatchDeleteServiceItemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




BatchDeleteServiceItemsRequest::BatchDeleteServiceItemsRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteServiceItemsRequest::~BatchDeleteServiceItemsRequest() = default;

void BatchDeleteServiceItemsRequest::validate()
{
}

web::json::value BatchDeleteServiceItemsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool BatchDeleteServiceItemsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteServiceItemDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteServiceItemsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void BatchDeleteServiceItemsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool BatchDeleteServiceItemsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void BatchDeleteServiceItemsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string BatchDeleteServiceItemsRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void BatchDeleteServiceItemsRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool BatchDeleteServiceItemsRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void BatchDeleteServiceItemsRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

DeleteServiceItemDto BatchDeleteServiceItemsRequest::getBody() const
{
    return body_;
}

void BatchDeleteServiceItemsRequest::setBody(const DeleteServiceItemDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteServiceItemsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteServiceItemsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


