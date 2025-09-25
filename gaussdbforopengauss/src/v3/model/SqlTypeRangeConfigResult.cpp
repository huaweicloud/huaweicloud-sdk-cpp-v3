

#include "huaweicloud/gaussdbforopengauss/v3/model/SqlTypeRangeConfigResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SqlTypeRangeConfigResult::SqlTypeRangeConfigResult()
{
    isOpen_ = false;
    isOpenIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
}

SqlTypeRangeConfigResult::~SqlTypeRangeConfigResult() = default;

void SqlTypeRangeConfigResult::validate()
{
}

web::json::value SqlTypeRangeConfigResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isOpenIsSet_) {
        val[utility::conversions::to_string_t("is_open")] = ModelBase::toJson(isOpen_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }

    return val;
}
bool SqlTypeRangeConfigResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_open"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_open"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsOpen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
        }
    }
    return ok;
}


bool SqlTypeRangeConfigResult::isIsOpen() const
{
    return isOpen_;
}

void SqlTypeRangeConfigResult::setIsOpen(bool value)
{
    isOpen_ = value;
    isOpenIsSet_ = true;
}

bool SqlTypeRangeConfigResult::isOpenIsSet() const
{
    return isOpenIsSet_;
}

void SqlTypeRangeConfigResult::unsetisOpen()
{
    isOpenIsSet_ = false;
}

std::string SqlTypeRangeConfigResult::getBeginTime() const
{
    return beginTime_;
}

void SqlTypeRangeConfigResult::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool SqlTypeRangeConfigResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void SqlTypeRangeConfigResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

}
}
}
}
}


