

#include "huaweicloud/cloudtest/v1/model/CreateTestCaseInPlanRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestCaseInPlanRequestBody::CreateTestCaseInPlanRequestBody()
{
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    testcaseIdListIsSet_ = false;
}

CreateTestCaseInPlanRequestBody::~CreateTestCaseInPlanRequestBody() = default;

void CreateTestCaseInPlanRequestBody::validate()
{
}

web::json::value CreateTestCaseInPlanRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(testcaseIdListIsSet_) {
        val[utility::conversions::to_string_t("testcase_id_list")] = ModelBase::toJson(testcaseIdList_);
    }

    return val;
}
bool CreateTestCaseInPlanRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("testcase_id_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_id_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseIdList(refVal);
        }
    }
    return ok;
}


int32_t CreateTestCaseInPlanRequestBody::getServiceId() const
{
    return serviceId_;
}

void CreateTestCaseInPlanRequestBody::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateTestCaseInPlanRequestBody::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateTestCaseInPlanRequestBody::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::vector<std::string>& CreateTestCaseInPlanRequestBody::getTestcaseIdList()
{
    return testcaseIdList_;
}

void CreateTestCaseInPlanRequestBody::setTestcaseIdList(const std::vector<std::string>& value)
{
    testcaseIdList_ = value;
    testcaseIdListIsSet_ = true;
}

bool CreateTestCaseInPlanRequestBody::testcaseIdListIsSet() const
{
    return testcaseIdListIsSet_;
}

void CreateTestCaseInPlanRequestBody::unsettestcaseIdList()
{
    testcaseIdListIsSet_ = false;
}

}
}
}
}
}


