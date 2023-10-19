

#include "huaweicloud/cfw/v1/model/DeleteBlackWhiteListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteBlackWhiteListRequest::DeleteBlackWhiteListRequest()
{
    listId_ = "";
    listIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

DeleteBlackWhiteListRequest::~DeleteBlackWhiteListRequest() = default;

void DeleteBlackWhiteListRequest::validate()
{
}

web::json::value DeleteBlackWhiteListRequest::toJson() const
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

    return val;
}
bool DeleteBlackWhiteListRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteBlackWhiteListRequest::getListId() const
{
    return listId_;
}

void DeleteBlackWhiteListRequest::setListId(const std::string& value)
{
    listId_ = value;
    listIdIsSet_ = true;
}

bool DeleteBlackWhiteListRequest::listIdIsSet() const
{
    return listIdIsSet_;
}

void DeleteBlackWhiteListRequest::unsetlistId()
{
    listIdIsSet_ = false;
}

std::string DeleteBlackWhiteListRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteBlackWhiteListRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteBlackWhiteListRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteBlackWhiteListRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteBlackWhiteListRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteBlackWhiteListRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteBlackWhiteListRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteBlackWhiteListRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


