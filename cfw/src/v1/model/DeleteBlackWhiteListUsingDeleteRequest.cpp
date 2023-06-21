

#include "huaweicloud/cfw/v1/model/DeleteBlackWhiteListUsingDeleteRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteBlackWhiteListUsingDeleteRequest::DeleteBlackWhiteListUsingDeleteRequest()
{
    listId_ = "";
    listIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

DeleteBlackWhiteListUsingDeleteRequest::~DeleteBlackWhiteListUsingDeleteRequest() = default;

void DeleteBlackWhiteListUsingDeleteRequest::validate()
{
}

web::json::value DeleteBlackWhiteListUsingDeleteRequest::toJson() const
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

bool DeleteBlackWhiteListUsingDeleteRequest::fromJson(const web::json::value& val)
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


std::string DeleteBlackWhiteListUsingDeleteRequest::getListId() const
{
    return listId_;
}

void DeleteBlackWhiteListUsingDeleteRequest::setListId(const std::string& value)
{
    listId_ = value;
    listIdIsSet_ = true;
}

bool DeleteBlackWhiteListUsingDeleteRequest::listIdIsSet() const
{
    return listIdIsSet_;
}

void DeleteBlackWhiteListUsingDeleteRequest::unsetlistId()
{
    listIdIsSet_ = false;
}

std::string DeleteBlackWhiteListUsingDeleteRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteBlackWhiteListUsingDeleteRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteBlackWhiteListUsingDeleteRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteBlackWhiteListUsingDeleteRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteBlackWhiteListUsingDeleteRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteBlackWhiteListUsingDeleteRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteBlackWhiteListUsingDeleteRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteBlackWhiteListUsingDeleteRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


