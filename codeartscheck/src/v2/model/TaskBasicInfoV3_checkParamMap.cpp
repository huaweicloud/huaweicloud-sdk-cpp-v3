

#include "huaweicloud/codeartscheck/v2/model/TaskBasicInfoV3_checkParamMap.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskBasicInfoV3_checkParamMap::TaskBasicInfoV3_checkParamMap()
{
    param1_ = "";
    param1IsSet_ = false;
    param2_ = "";
    param2IsSet_ = false;
}

TaskBasicInfoV3_checkParamMap::~TaskBasicInfoV3_checkParamMap() = default;

void TaskBasicInfoV3_checkParamMap::validate()
{
}

web::json::value TaskBasicInfoV3_checkParamMap::toJson() const
{
    web::json::value val = web::json::value::object();

    if(param1IsSet_) {
        val[utility::conversions::to_string_t("param1")] = ModelBase::toJson(param1_);
    }
    if(param2IsSet_) {
        val[utility::conversions::to_string_t("param2")] = ModelBase::toJson(param2_);
    }

    return val;
}
bool TaskBasicInfoV3_checkParamMap::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("param1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam2(refVal);
        }
    }
    return ok;
}


std::string TaskBasicInfoV3_checkParamMap::getParam1() const
{
    return param1_;
}

void TaskBasicInfoV3_checkParamMap::setParam1(const std::string& value)
{
    param1_ = value;
    param1IsSet_ = true;
}

bool TaskBasicInfoV3_checkParamMap::param1IsSet() const
{
    return param1IsSet_;
}

void TaskBasicInfoV3_checkParamMap::unsetparam1()
{
    param1IsSet_ = false;
}

std::string TaskBasicInfoV3_checkParamMap::getParam2() const
{
    return param2_;
}

void TaskBasicInfoV3_checkParamMap::setParam2(const std::string& value)
{
    param2_ = value;
    param2IsSet_ = true;
}

bool TaskBasicInfoV3_checkParamMap::param2IsSet() const
{
    return param2IsSet_;
}

void TaskBasicInfoV3_checkParamMap::unsetparam2()
{
    param2IsSet_ = false;
}

}
}
}
}
}


