

#include "huaweicloud/cloudtest/v1/model/CreateTestCaseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTestCaseRequestBody::CreateTestCaseRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    serviceId_ = 0;
    serviceIdIsSet_ = false;
    rankId_ = "";
    rankIdIsSet_ = false;
    testcaseNumber_ = "";
    testcaseNumberIsSet_ = false;
    extendInfoIsSet_ = false;
}

CreateTestCaseRequestBody::~CreateTestCaseRequestBody() = default;

void CreateTestCaseRequestBody::validate()
{
}

web::json::value CreateTestCaseRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(rankIdIsSet_) {
        val[utility::conversions::to_string_t("rank_id")] = ModelBase::toJson(rankId_);
    }
    if(testcaseNumberIsSet_) {
        val[utility::conversions::to_string_t("testcase_number")] = ModelBase::toJson(testcaseNumber_);
    }
    if(extendInfoIsSet_) {
        val[utility::conversions::to_string_t("extend_info")] = ModelBase::toJson(extendInfo_);
    }

    return val;
}
bool CreateTestCaseRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRankId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("testcase_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testcase_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestcaseNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extend_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extend_info"));
        if(!fieldValue.is_null())
        {
            ExternalServiceCaseInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendInfo(refVal);
        }
    }
    return ok;
}


std::string CreateTestCaseRequestBody::getName() const
{
    return name_;
}

void CreateTestCaseRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateTestCaseRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void CreateTestCaseRequestBody::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateTestCaseRequestBody::getServiceId() const
{
    return serviceId_;
}

void CreateTestCaseRequestBody::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool CreateTestCaseRequestBody::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void CreateTestCaseRequestBody::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string CreateTestCaseRequestBody::getRankId() const
{
    return rankId_;
}

void CreateTestCaseRequestBody::setRankId(const std::string& value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool CreateTestCaseRequestBody::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void CreateTestCaseRequestBody::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string CreateTestCaseRequestBody::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void CreateTestCaseRequestBody::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool CreateTestCaseRequestBody::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void CreateTestCaseRequestBody::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

ExternalServiceCaseInfo CreateTestCaseRequestBody::getExtendInfo() const
{
    return extendInfo_;
}

void CreateTestCaseRequestBody::setExtendInfo(const ExternalServiceCaseInfo& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool CreateTestCaseRequestBody::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void CreateTestCaseRequestBody::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

}
}
}
}
}


