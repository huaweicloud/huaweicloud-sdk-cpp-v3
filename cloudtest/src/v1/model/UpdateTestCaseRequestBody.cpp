

#include "huaweicloud/cloudtest/v1/model/UpdateTestCaseRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTestCaseRequestBody::UpdateTestCaseRequestBody()
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

UpdateTestCaseRequestBody::~UpdateTestCaseRequestBody() = default;

void UpdateTestCaseRequestBody::validate()
{
}

web::json::value UpdateTestCaseRequestBody::toJson() const
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
bool UpdateTestCaseRequestBody::fromJson(const web::json::value& val)
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
            ExternalServiceBizCase refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendInfo(refVal);
        }
    }
    return ok;
}


std::string UpdateTestCaseRequestBody::getName() const
{
    return name_;
}

void UpdateTestCaseRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateTestCaseRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateTestCaseRequestBody::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateTestCaseRequestBody::getServiceId() const
{
    return serviceId_;
}

void UpdateTestCaseRequestBody::setServiceId(int32_t value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool UpdateTestCaseRequestBody::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void UpdateTestCaseRequestBody::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string UpdateTestCaseRequestBody::getRankId() const
{
    return rankId_;
}

void UpdateTestCaseRequestBody::setRankId(const std::string& value)
{
    rankId_ = value;
    rankIdIsSet_ = true;
}

bool UpdateTestCaseRequestBody::rankIdIsSet() const
{
    return rankIdIsSet_;
}

void UpdateTestCaseRequestBody::unsetrankId()
{
    rankIdIsSet_ = false;
}

std::string UpdateTestCaseRequestBody::getTestcaseNumber() const
{
    return testcaseNumber_;
}

void UpdateTestCaseRequestBody::setTestcaseNumber(const std::string& value)
{
    testcaseNumber_ = value;
    testcaseNumberIsSet_ = true;
}

bool UpdateTestCaseRequestBody::testcaseNumberIsSet() const
{
    return testcaseNumberIsSet_;
}

void UpdateTestCaseRequestBody::unsettestcaseNumber()
{
    testcaseNumberIsSet_ = false;
}

ExternalServiceBizCase UpdateTestCaseRequestBody::getExtendInfo() const
{
    return extendInfo_;
}

void UpdateTestCaseRequestBody::setExtendInfo(const ExternalServiceBizCase& value)
{
    extendInfo_ = value;
    extendInfoIsSet_ = true;
}

bool UpdateTestCaseRequestBody::extendInfoIsSet() const
{
    return extendInfoIsSet_;
}

void UpdateTestCaseRequestBody::unsetextendInfo()
{
    extendInfoIsSet_ = false;
}

}
}
}
}
}


