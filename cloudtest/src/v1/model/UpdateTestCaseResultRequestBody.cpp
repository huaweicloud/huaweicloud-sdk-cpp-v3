

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseResultRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseResultRequestBody::UpdateTestCaseResultRequestBody()
{
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    executeListIsSet_ = false;
}

UpdateTestCaseResultRequestBody::~UpdateTestCaseResultRequestBody() = default;

void UpdateTestCaseResultRequestBody::validate()
{
}

web::json::value UpdateTestCaseResultRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(planIdIsSet_) {
        val[utility::conversions::to_string_t("plan_id")] = ModelBase::toJson(planId_);
    }
    if(executeListIsSet_) {
        val[utility::conversions::to_string_t("execute_list")] = ModelBase::toJson(executeList_);
    }

    return val;
}
bool UpdateTestCaseResultRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execute_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_list"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateTestCaseResultBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteList(refVal);
        }
    }
    return ok;
}


int32_t UpdateTestCaseResultRequestBody::getServiceId() const
{
    return serviceId_;
}

void UpdateTestCaseResultRequestBody::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateTestCaseResultRequestBody::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateTestCaseResultRequestBody::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateTestCaseResultRequestBody::getPlanId() const
{
    return planId_;
}

void UpdateTestCaseResultRequestBody::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool UpdateTestCaseResultRequestBody::planIdIsSet() const
{
    return planIdIsSet_;
}

void UpdateTestCaseResultRequestBody::unsetplanId()
{
    planIdIsSet_ = false;
}

std::vector<UpdateTestCaseResultBean>& UpdateTestCaseResultRequestBody::getExecuteList()
{
    return executeList_;
}

void UpdateTestCaseResultRequestBody::setExecuteList(const std::vector<UpdateTestCaseResultBean>& value)
{
    executeList_ = value;
    executeListIsSet_ = true;
}

bool UpdateTestCaseResultRequestBody::executeListIsSet() const
{
    return executeListIsSet_;
}

void UpdateTestCaseResultRequestBody::unsetexecuteList()
{
    executeListIsSet_ = false;
}

}
}
}
}
}


