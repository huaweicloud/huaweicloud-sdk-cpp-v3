

#include "huaweicloud/cloudtest/v1/model/RunTestCaseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




RunTestCaseRequestBody::RunTestCaseRequestBody()
{
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    planId_ = "";
    planIdIsSet_ = false;
    executeListIsSet_ = false;
}

RunTestCaseRequestBody::~RunTestCaseRequestBody() = default;

void RunTestCaseRequestBody::validate()
{
}

web::json::value RunTestCaseRequestBody::toJson() const
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
bool RunTestCaseRequestBody::fromJson(const web::json::value& val)
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
            std::vector<TestCaseExecuteBean> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteList(refVal);
        }
    }
    return ok;
}


int32_t RunTestCaseRequestBody::getServiceId() const
{
    return serviceId_;
}

void RunTestCaseRequestBody::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool RunTestCaseRequestBody::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void RunTestCaseRequestBody::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string RunTestCaseRequestBody::getPlanId() const
{
    return planId_;
}

void RunTestCaseRequestBody::setPlanId(const std::string& value)
{
    planId_ = value;
    planIdIsSet_ = true;
}

bool RunTestCaseRequestBody::planIdIsSet() const
{
    return planIdIsSet_;
}

void RunTestCaseRequestBody::unsetplanId()
{
    planIdIsSet_ = false;
}

std::vector<TestCaseExecuteBean>& RunTestCaseRequestBody::getExecuteList()
{
    return executeList_;
}

void RunTestCaseRequestBody::setExecuteList(const std::vector<TestCaseExecuteBean>& value)
{
    executeList_ = value;
    executeListIsSet_ = true;
}

bool RunTestCaseRequestBody::executeListIsSet() const
{
    return executeListIsSet_;
}

void RunTestCaseRequestBody::unsetexecuteList()
{
    executeListIsSet_ = false;
}

}
}
}
}
}


