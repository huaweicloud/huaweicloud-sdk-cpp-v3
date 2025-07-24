

#include "huaweicloud/cloudtest/v1/model/CreateApiTestSuiteByRepoFileResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateApiTestSuiteByRepoFileResponse::CreateApiTestSuiteByRepoFileResponse()
{
    testsuiteId_ = "";
    testsuiteIdIsSet_ = false;
    testcaseIdsIsSet_ = false;
}

CreateApiTestSuiteByRepoFileResponse::~CreateApiTestSuiteByRepoFileResponse() = default;

void CreateApiTestSuiteByRepoFileResponse::validate()
{
}

web::json::value CreateApiTestSuiteByRepoFileResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testsuiteIdIsSet_) {
        val[utility::conversions::to_string_t("testsuite_id")] = ModelBase::toJson(testsuiteId_);
    }
    if(testcaseIdsIsSet_) {
        val[utility::conversions::to_string_t("testcase_ids")] = ModelBase::toJson(testcaseIds_);
    }

    return val;
}
bool CreateApiTestSuiteByRepoFileResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testsuite_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testsuite_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestsuiteId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseIds(refVal);
        }
    }
    return ok;
}


std::string CreateApiTestSuiteByRepoFileResponse::getTestsuiteId() const
{
    return testsuiteId_;
}

void CreateApiTestSuiteByRepoFileResponse::setTestsuiteId(const std::string& value)
{
    testsuiteId_ = value;
    testsuiteIdIsSet_ = true;
}

bool CreateApiTestSuiteByRepoFileResponse::testsuiteIdIsSet() const
{
    return testsuiteIdIsSet_;
}

void CreateApiTestSuiteByRepoFileResponse::unsettestsuiteId()
{
    testsuiteIdIsSet_ = false;
}

std::vector<std::string>& CreateApiTestSuiteByRepoFileResponse::getTestcaseIds()
{
    return testcaseIds_;
}

void CreateApiTestSuiteByRepoFileResponse::setTestcaseIds(const std::vector<std::string>& value)
{
    testcaseIds_ = value;
    testcaseIdsIsSet_ = true;
}

bool CreateApiTestSuiteByRepoFileResponse::testcaseIdsIsSet() const
{
    return testcaseIdsIsSet_;
}

void CreateApiTestSuiteByRepoFileResponse::unsettestcaseIds()
{
    testcaseIdsIsSet_ = false;
}

}
}
}
}
}


