

#include "huaweicloud/cloudtest/v1/model/MockInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




MockInfo::MockInfo()
{
    mockId_ = "";
    mockIdIsSet_ = false;
    mockSwitch_ = false;
    mockSwitchIsSet_ = false;
    mockUrl_ = "";
    mockUrlIsSet_ = false;
}

MockInfo::~MockInfo() = default;

void MockInfo::validate()
{
}

web::json::value MockInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mockIdIsSet_) {
        val[utility::conversions::to_string_t("mock_id")] = ModelBase::toJson(mockId_);
    }
    if(mockSwitchIsSet_) {
        val[utility::conversions::to_string_t("mock_switch")] = ModelBase::toJson(mockSwitch_);
    }
    if(mockUrlIsSet_) {
        val[utility::conversions::to_string_t("mock_url")] = ModelBase::toJson(mockUrl_);
    }

    return val;
}
bool MockInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mock_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mock_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMockId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mock_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mock_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMockSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mock_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mock_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMockUrl(refVal);
        }
    }
    return ok;
}


std::string MockInfo::getMockId() const
{
    return mockId_;
}

void MockInfo::setMockId(const std::string& value)
{
    mockId_ = value;
    mockIdIsSet_ = true;
}

bool MockInfo::mockIdIsSet() const
{
    return mockIdIsSet_;
}

void MockInfo::unsetmockId()
{
    mockIdIsSet_ = false;
}

bool MockInfo::isMockSwitch() const
{
    return mockSwitch_;
}

void MockInfo::setMockSwitch(bool value)
{
    mockSwitch_ = value;
    mockSwitchIsSet_ = true;
}

bool MockInfo::mockSwitchIsSet() const
{
    return mockSwitchIsSet_;
}

void MockInfo::unsetmockSwitch()
{
    mockSwitchIsSet_ = false;
}

std::string MockInfo::getMockUrl() const
{
    return mockUrl_;
}

void MockInfo::setMockUrl(const std::string& value)
{
    mockUrl_ = value;
    mockUrlIsSet_ = true;
}

bool MockInfo::mockUrlIsSet() const
{
    return mockUrlIsSet_;
}

void MockInfo::unsetmockUrl()
{
    mockUrlIsSet_ = false;
}

}
}
}
}
}


