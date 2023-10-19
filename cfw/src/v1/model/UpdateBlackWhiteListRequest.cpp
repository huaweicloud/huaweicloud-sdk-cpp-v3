

#include "huaweicloud/cfw/v1/model/UpdateBlackWhiteListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateBlackWhiteListRequest::UpdateBlackWhiteListRequest()
{
    listId_ = "";
    listIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBlackWhiteListRequest::~UpdateBlackWhiteListRequest() = default;

void UpdateBlackWhiteListRequest::validate()
{
}

web::json::value UpdateBlackWhiteListRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(listIdIsSet_) {
        val[utility::conversions::to_string_t("list_id")] = ModelBase::toJson(listId_);
    }
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
bool UpdateBlackWhiteListRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("list_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("list_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setListId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateBlackWhiteListDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateBlackWhiteListRequest::getListId() const
{
    return listId_;
}

void UpdateBlackWhiteListRequest::setListId(const std::string& value)
{
    listId_ = value;
    listIdIsSet_ = true;
}

bool UpdateBlackWhiteListRequest::listIdIsSet() const
{
    return listIdIsSet_;
}

void UpdateBlackWhiteListRequest::unsetlistId()
{
    listIdIsSet_ = false;
}

std::string UpdateBlackWhiteListRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateBlackWhiteListRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateBlackWhiteListRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateBlackWhiteListRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateBlackWhiteListRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateBlackWhiteListRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateBlackWhiteListRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateBlackWhiteListRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateBlackWhiteListDto UpdateBlackWhiteListRequest::getBody() const
{
    return body_;
}

void UpdateBlackWhiteListRequest::setBody(const UpdateBlackWhiteListDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBlackWhiteListRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBlackWhiteListRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


