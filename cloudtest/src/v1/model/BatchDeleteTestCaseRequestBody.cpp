

#include "huaweicloud/cloudtest/v1/model/BatchDeleteTestCaseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




BatchDeleteTestCaseRequestBody::BatchDeleteTestCaseRequestBody()
{
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    testcaseIdListIsSet_ = false;
}

BatchDeleteTestCaseRequestBody::~BatchDeleteTestCaseRequestBody() = default;

void BatchDeleteTestCaseRequestBody::validate()
{
}

web::json::value BatchDeleteTestCaseRequestBody::toJson() const
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
bool BatchDeleteTestCaseRequestBody::fromJson(const web::json::value& val)
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


int32_t BatchDeleteTestCaseRequestBody::getServiceId() const
{
    return serviceId_;
}

void BatchDeleteTestCaseRequestBody::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool BatchDeleteTestCaseRequestBody::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void BatchDeleteTestCaseRequestBody::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::vector<std::string>& BatchDeleteTestCaseRequestBody::getTestcaseIdList()
{
    return testcaseIdList_;
}

void BatchDeleteTestCaseRequestBody::setTestcaseIdList(const std::vector<std::string>& value)
{
    testcaseIdList_ = value;
    testcaseIdListIsSet_ = true;
}

bool BatchDeleteTestCaseRequestBody::testcaseIdListIsSet() const
{
    return testcaseIdListIsSet_;
}

void BatchDeleteTestCaseRequestBody::unsettestcaseIdList()
{
    testcaseIdListIsSet_ = false;
}

}
}
}
}
}


