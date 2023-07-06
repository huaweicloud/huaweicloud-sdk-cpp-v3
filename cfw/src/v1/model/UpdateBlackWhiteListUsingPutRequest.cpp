

#include "huaweicloud/cfw/v1/model/UpdateBlackWhiteListUsingPutRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateBlackWhiteListUsingPutRequest::UpdateBlackWhiteListUsingPutRequest()
{
    listId_ = "";
    listIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateBlackWhiteListUsingPutRequest::~UpdateBlackWhiteListUsingPutRequest() = default;

void UpdateBlackWhiteListUsingPutRequest::validate()
{
}

web::json::value UpdateBlackWhiteListUsingPutRequest::toJson() const
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

bool UpdateBlackWhiteListUsingPutRequest::fromJson(const web::json::value& val)
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

std::string UpdateBlackWhiteListUsingPutRequest::getListId() const
{
    return listId_;
}

void UpdateBlackWhiteListUsingPutRequest::setListId(const std::string& value)
{
    listId_ = value;
    listIdIsSet_ = true;
}

bool UpdateBlackWhiteListUsingPutRequest::listIdIsSet() const
{
    return listIdIsSet_;
}

void UpdateBlackWhiteListUsingPutRequest::unsetlistId()
{
    listIdIsSet_ = false;
}

std::string UpdateBlackWhiteListUsingPutRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateBlackWhiteListUsingPutRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateBlackWhiteListUsingPutRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateBlackWhiteListUsingPutRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateBlackWhiteListUsingPutRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateBlackWhiteListUsingPutRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateBlackWhiteListUsingPutRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateBlackWhiteListUsingPutRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateBlackWhiteListDto UpdateBlackWhiteListUsingPutRequest::getBody() const
{
    return body_;
}

void UpdateBlackWhiteListUsingPutRequest::setBody(const UpdateBlackWhiteListDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateBlackWhiteListUsingPutRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateBlackWhiteListUsingPutRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


