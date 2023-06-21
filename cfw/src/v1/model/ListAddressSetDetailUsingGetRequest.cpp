

#include "huaweicloud/cfw/v1/model/ListAddressSetDetailUsingGetRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListAddressSetDetailUsingGetRequest::ListAddressSetDetailUsingGetRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
}

ListAddressSetDetailUsingGetRequest::~ListAddressSetDetailUsingGetRequest() = default;

void ListAddressSetDetailUsingGetRequest::validate()
{
}

web::json::value ListAddressSetDetailUsingGetRequest::toJson() const
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

bool ListAddressSetDetailUsingGetRequest::fromJson(const web::json::value& val)
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


std::string ListAddressSetDetailUsingGetRequest::getSetId() const
{
    return setId_;
}

void ListAddressSetDetailUsingGetRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListAddressSetDetailUsingGetRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListAddressSetDetailUsingGetRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ListAddressSetDetailUsingGetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListAddressSetDetailUsingGetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListAddressSetDetailUsingGetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListAddressSetDetailUsingGetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListAddressSetDetailUsingGetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListAddressSetDetailUsingGetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListAddressSetDetailUsingGetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListAddressSetDetailUsingGetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

}
}
}
}
}


