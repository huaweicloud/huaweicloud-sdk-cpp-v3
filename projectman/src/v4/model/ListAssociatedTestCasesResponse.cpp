

#include "huaweicloud/projectman/v4/model/ListAssociatedTestCasesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListAssociatedTestCasesResponse::ListAssociatedTestCasesResponse()
{
    testCasesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListAssociatedTestCasesResponse::~ListAssociatedTestCasesResponse() = default;

void ListAssociatedTestCasesResponse::validate()
{
}

web::json::value ListAssociatedTestCasesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(testCasesIsSet_) {
        val[utility::conversions::to_string_t("test_cases")] = ModelBase::toJson(testCases_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListAssociatedTestCasesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("test_cases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("test_cases"));
        if(!fieldValue.is_null())
        {
            std::vector<AssociatedTestCase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTestCases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<AssociatedTestCase>& ListAssociatedTestCasesResponse::getTestCases()
{
    return testCases_;
}

void ListAssociatedTestCasesResponse::setTestCases(const std::vector<AssociatedTestCase>& value)
{
    testCases_ = value;
    testCasesIsSet_ = true;
}

bool ListAssociatedTestCasesResponse::testCasesIsSet() const
{
    return testCasesIsSet_;
}

void ListAssociatedTestCasesResponse::unsettestCases()
{
    testCasesIsSet_ = false;
}

int32_t ListAssociatedTestCasesResponse::getTotal() const
{
    return total_;
}

void ListAssociatedTestCasesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListAssociatedTestCasesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListAssociatedTestCasesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


