

#include "huaweicloud/cloudtest/v1/model/CommonResponseErrorOfAPITest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CommonResponseErrorOfAPITest::CommonResponseErrorOfAPITest()
{
    code_ = "";
    codeIsSet_ = false;
    reason_ = "";
    reasonIsSet_ = false;
}

CommonResponseErrorOfAPITest::~CommonResponseErrorOfAPITest() = default;

void CommonResponseErrorOfAPITest::validate()
{
}

web::json::value CommonResponseErrorOfAPITest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(reasonIsSet_) {
        val[utility::conversions::to_string_t("reason")] = ModelBase::toJson(reason_);
    }

    return val;
}
bool CommonResponseErrorOfAPITest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reason"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reason"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReason(refVal);
        }
    }
    return ok;
}


std::string CommonResponseErrorOfAPITest::getCode() const
{
    return code_;
}

void CommonResponseErrorOfAPITest::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool CommonResponseErrorOfAPITest::codeIsSet() const
{
    return codeIsSet_;
}

void CommonResponseErrorOfAPITest::unsetcode()
{
    codeIsSet_ = false;
}

std::string CommonResponseErrorOfAPITest::getReason() const
{
    return reason_;
}

void CommonResponseErrorOfAPITest::setReason(const std::string& value)
{
    reason_ = value;
    reasonIsSet_ = true;
}

bool CommonResponseErrorOfAPITest::reasonIsSet() const
{
    return reasonIsSet_;
}

void CommonResponseErrorOfAPITest::unsetreason()
{
    reasonIsSet_ = false;
}

}
}
}
}
}


