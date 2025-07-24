

#include "huaweicloud/cloudtest/v1/model/IssuePassDetailsVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




IssuePassDetailsVo::IssuePassDetailsVo()
{
    testing_ = 0;
    testingIsSet_ = false;
    finished_ = 0;
    finishedIsSet_ = false;
    notTested_ = 0;
    notTestedIsSet_ = false;
}

IssuePassDetailsVo::~IssuePassDetailsVo() = default;

void IssuePassDetailsVo::validate()
{
}

web::json::value IssuePassDetailsVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testingIsSet_) {
        val[utility::conversions::to_string_t("testing")] = ModelBase::toJson(testing_);
    }
    if(finishedIsSet_) {
        val[utility::conversions::to_string_t("finished")] = ModelBase::toJson(finished_);
    }
    if(notTestedIsSet_) {
        val[utility::conversions::to_string_t("not_tested")] = ModelBase::toJson(notTested_);
    }

    return val;
}
bool IssuePassDetailsVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("testing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("testing"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTesting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finished"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finished"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinished(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("not_tested"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("not_tested"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotTested(refVal);
        }
    }
    return ok;
}


int32_t IssuePassDetailsVo::getTesting() const
{
    return testing_;
}

void IssuePassDetailsVo::setTesting(int32_t value)
{
    testing_ = value;
    testingIsSet_ = true;
}

bool IssuePassDetailsVo::testingIsSet() const
{
    return testingIsSet_;
}

void IssuePassDetailsVo::unsettesting()
{
    testingIsSet_ = false;
}

int32_t IssuePassDetailsVo::getFinished() const
{
    return finished_;
}

void IssuePassDetailsVo::setFinished(int32_t value)
{
    finished_ = value;
    finishedIsSet_ = true;
}

bool IssuePassDetailsVo::finishedIsSet() const
{
    return finishedIsSet_;
}

void IssuePassDetailsVo::unsetfinished()
{
    finishedIsSet_ = false;
}

int32_t IssuePassDetailsVo::getNotTested() const
{
    return notTested_;
}

void IssuePassDetailsVo::setNotTested(int32_t value)
{
    notTested_ = value;
    notTestedIsSet_ = true;
}

bool IssuePassDetailsVo::notTestedIsSet() const
{
    return notTestedIsSet_;
}

void IssuePassDetailsVo::unsetnotTested()
{
    notTestedIsSet_ = false;
}

}
}
}
}
}


