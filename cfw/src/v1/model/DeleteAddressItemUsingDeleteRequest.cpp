

#include "huaweicloud/cfw/v1/model/DeleteAddressItemUsingDeleteRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAddressItemUsingDeleteRequest::DeleteAddressItemUsingDeleteRequest()
{
    itemId_ = "";
    itemIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

DeleteAddressItemUsingDeleteRequest::~DeleteAddressItemUsingDeleteRequest() = default;

void DeleteAddressItemUsingDeleteRequest::validate()
{
}

web::json::value DeleteAddressItemUsingDeleteRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(itemIdIsSet_) {
        val[utility::conversions::to_string_t("item_id")] = ModelBase::toJson(itemId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool DeleteAddressItemUsingDeleteRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("item_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("item_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItemId(refVal);
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


std::string DeleteAddressItemUsingDeleteRequest::getItemId() const
{
    return itemId_;
}

void DeleteAddressItemUsingDeleteRequest::setItemId(const std::string& value)
{
    itemId_ = value;
    itemIdIsSet_ = true;
}

bool DeleteAddressItemUsingDeleteRequest::itemIdIsSet() const
{
    return itemIdIsSet_;
}

void DeleteAddressItemUsingDeleteRequest::unsetitemId()
{
    itemIdIsSet_ = false;
}

std::string DeleteAddressItemUsingDeleteRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteAddressItemUsingDeleteRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteAddressItemUsingDeleteRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteAddressItemUsingDeleteRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteAddressItemUsingDeleteRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteAddressItemUsingDeleteRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteAddressItemUsingDeleteRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteAddressItemUsingDeleteRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


