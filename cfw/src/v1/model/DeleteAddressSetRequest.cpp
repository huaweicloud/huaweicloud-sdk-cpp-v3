

#include "huaweicloud/cfw/v1/model/DeleteAddressSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




DeleteAddressSetRequest::DeleteAddressSetRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

DeleteAddressSetRequest::~DeleteAddressSetRequest() = default;

void DeleteAddressSetRequest::validate()
{
}

web::json::value DeleteAddressSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }

    return val;
}
bool DeleteAddressSetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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


std::string DeleteAddressSetRequest::getSetId() const
{
    return setId_;
}

void DeleteAddressSetRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool DeleteAddressSetRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void DeleteAddressSetRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string DeleteAddressSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void DeleteAddressSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool DeleteAddressSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void DeleteAddressSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string DeleteAddressSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void DeleteAddressSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool DeleteAddressSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void DeleteAddressSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


