

#include "huaweicloud/gaussdbforopengauss/v3/model/DimensionListResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DimensionListResult::DimensionListResult()
{
    name_ = "";
    nameIsSet_ = false;
    activeNum_ = "";
    activeNumIsSet_ = false;
    totalNum_ = "";
    totalNumIsSet_ = false;
}

DimensionListResult::~DimensionListResult() = default;

void DimensionListResult::validate()
{
}

web::json::value DimensionListResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(activeNumIsSet_) {
        val[utility::conversions::to_string_t("active_num")] = ModelBase::toJson(activeNum_);
    }
    if(totalNumIsSet_) {
        val[utility::conversions::to_string_t("total_num")] = ModelBase::toJson(totalNum_);
    }

    return val;
}
bool DimensionListResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("active_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalNum(refVal);
        }
    }
    return ok;
}


std::string DimensionListResult::getName() const
{
    return name_;
}

void DimensionListResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DimensionListResult::nameIsSet() const
{
    return nameIsSet_;
}

void DimensionListResult::unsetname()
{
    nameIsSet_ = false;
}

std::string DimensionListResult::getActiveNum() const
{
    return activeNum_;
}

void DimensionListResult::setActiveNum(const std::string& value)
{
    activeNum_ = value;
    activeNumIsSet_ = true;
}

bool DimensionListResult::activeNumIsSet() const
{
    return activeNumIsSet_;
}

void DimensionListResult::unsetactiveNum()
{
    activeNumIsSet_ = false;
}

std::string DimensionListResult::getTotalNum() const
{
    return totalNum_;
}

void DimensionListResult::setTotalNum(const std::string& value)
{
    totalNum_ = value;
    totalNumIsSet_ = true;
}

bool DimensionListResult::totalNumIsSet() const
{
    return totalNumIsSet_;
}

void DimensionListResult::unsettotalNum()
{
    totalNumIsSet_ = false;
}

}
}
}
}
}


