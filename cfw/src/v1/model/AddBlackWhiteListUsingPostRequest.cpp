

#include "huaweicloud/cfw/v1/model/AddBlackWhiteListUsingPostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddBlackWhiteListUsingPostRequest::AddBlackWhiteListUsingPostRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddBlackWhiteListUsingPostRequest::~AddBlackWhiteListUsingPostRequest() = default;

void AddBlackWhiteListUsingPostRequest::validate()
{
}

web::json::value AddBlackWhiteListUsingPostRequest::toJson() const
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

bool AddBlackWhiteListUsingPostRequest::fromJson(const web::json::value& val)
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
            AddBlackWhiteListDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddBlackWhiteListUsingPostRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddBlackWhiteListUsingPostRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddBlackWhiteListUsingPostRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddBlackWhiteListUsingPostRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddBlackWhiteListUsingPostRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddBlackWhiteListUsingPostRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddBlackWhiteListUsingPostRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddBlackWhiteListUsingPostRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddBlackWhiteListDto AddBlackWhiteListUsingPostRequest::getBody() const
{
    return body_;
}

void AddBlackWhiteListUsingPostRequest::setBody(const AddBlackWhiteListDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddBlackWhiteListUsingPostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddBlackWhiteListUsingPostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


