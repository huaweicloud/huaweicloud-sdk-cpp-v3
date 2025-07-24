

#include "huaweicloud/cloudtest/v1/model/TestcasePlanQueryParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestcasePlanQueryParam::TestcasePlanQueryParam()
{
    caseUriListIsSet_ = false;
    caseNumberListIsSet_ = false;
}

TestcasePlanQueryParam::~TestcasePlanQueryParam() = default;

void TestcasePlanQueryParam::validate()
{
}

web::json::value TestcasePlanQueryParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(caseUriListIsSet_) {
        val[utility::conversions::to_string_t("case_uri_list")] = ModelBase::toJson(caseUriList_);
    }
    if(caseNumberListIsSet_) {
        val[utility::conversions::to_string_t("case_number_list")] = ModelBase::toJson(caseNumberList_);
    }

    return val;
}
bool TestcasePlanQueryParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("case_uri_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_uri_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseUriList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_number_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_number_list"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseNumberList(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& TestcasePlanQueryParam::getCaseUriList()
{
    return caseUriList_;
}

void TestcasePlanQueryParam::setCaseUriList(const std::vector<std::string>& value)
{
    caseUriList_ = value;
    caseUriListIsSet_ = true;
}

bool TestcasePlanQueryParam::caseUriListIsSet() const
{
    return caseUriListIsSet_;
}

void TestcasePlanQueryParam::unsetcaseUriList()
{
    caseUriListIsSet_ = false;
}

std::vector<std::string>& TestcasePlanQueryParam::getCaseNumberList()
{
    return caseNumberList_;
}

void TestcasePlanQueryParam::setCaseNumberList(const std::vector<std::string>& value)
{
    caseNumberList_ = value;
    caseNumberListIsSet_ = true;
}

bool TestcasePlanQueryParam::caseNumberListIsSet() const
{
    return caseNumberListIsSet_;
}

void TestcasePlanQueryParam::unsetcaseNumberList()
{
    caseNumberListIsSet_ = false;
}

}
}
}
}
}


