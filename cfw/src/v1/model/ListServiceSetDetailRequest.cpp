

#include "huaweicloud/cfw/v1/model/ListServiceSetDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListServiceSetDetailRequest::ListServiceSetDetailRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    queryServiceSetType_ = 0;
    queryServiceSetTypeIsSet_ = false;
}

ListServiceSetDetailRequest::~ListServiceSetDetailRequest() = default;

void ListServiceSetDetailRequest::validate()
{
}

web::json::value ListServiceSetDetailRequest::toJson() const
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
    if(queryServiceSetTypeIsSet_) {
        val[utility::conversions::to_string_t("query_service_set_type")] = ModelBase::toJson(queryServiceSetType_);
    }

    return val;
}
bool ListServiceSetDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("query_service_set_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_service_set_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryServiceSetType(refVal);
        }
    }
    return ok;
}


std::string ListServiceSetDetailRequest::getSetId() const
{
    return setId_;
}

void ListServiceSetDetailRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool ListServiceSetDetailRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void ListServiceSetDetailRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string ListServiceSetDetailRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListServiceSetDetailRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListServiceSetDetailRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListServiceSetDetailRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ListServiceSetDetailRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListServiceSetDetailRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListServiceSetDetailRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListServiceSetDetailRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListServiceSetDetailRequest::getQueryServiceSetType() const
{
    return queryServiceSetType_;
}

void ListServiceSetDetailRequest::setQueryServiceSetType(int32_t value)
{
    queryServiceSetType_ = value;
    queryServiceSetTypeIsSet_ = true;
}

bool ListServiceSetDetailRequest::queryServiceSetTypeIsSet() const
{
    return queryServiceSetTypeIsSet_;
}

void ListServiceSetDetailRequest::unsetqueryServiceSetType()
{
    queryServiceSetTypeIsSet_ = false;
}

}
}
}
}
}


