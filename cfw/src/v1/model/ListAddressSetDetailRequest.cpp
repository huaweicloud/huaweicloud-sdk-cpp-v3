

#include "huaweicloud/cfw/v1/model/ListAddressSetDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetDetailRequest::ListAddressSetDetailRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListAddressSetDetailRequest::~ListAddressSetDetailRequest() = default;

void ListAddressSetDetailRequest::validate()
{
}

web::json::value ListAddressSetDetailRequest::toJson() const
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
bool ListAddressSetDetailRequest::fromJson(const web::json::value& val)
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


std::string ListAddressSetDetailRequest::getSetId() const
{
    return setId_;
}

void ListAddressSetDetailRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListAddressSetDetailRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListAddressSetDetailRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ListAddressSetDetailRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAddressSetDetailRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAddressSetDetailRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAddressSetDetailRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAddressSetDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAddressSetDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAddressSetDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAddressSetDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


