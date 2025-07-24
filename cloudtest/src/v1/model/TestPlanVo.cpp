

#include "huaweicloud/cloudtest/v1/model/TestPlanVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TestPlanVo::TestPlanVo()
{
    uri_ = "";
    uriIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

TestPlanVo::~TestPlanVo() = default;

void TestPlanVo::validate()
{
}

web::json::value TestPlanVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uriIsSet_) {
        val[utility::conversions::to_string_t("uri")] = ModelBase::toJson(uri_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool TestPlanVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string TestPlanVo::getUri() const
{
    return uri_;
}

void TestPlanVo::setUri(const std::string& value)
{
    uri_ = value;
    uriIsSet_ = true;
}

bool TestPlanVo::uriIsSet() const
{
    return uriIsSet_;
}

void TestPlanVo::unseturi()
{
    uriIsSet_ = false;
}

std::string TestPlanVo::getName() const
{
    return name_;
}

void TestPlanVo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TestPlanVo::nameIsSet() const
{
    return nameIsSet_;
}

void TestPlanVo::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


