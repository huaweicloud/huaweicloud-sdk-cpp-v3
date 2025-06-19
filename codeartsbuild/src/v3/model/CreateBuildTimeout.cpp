

#include "huaweicloud/codeartsbuild/v3/model/CreateBuildTimeout.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




CreateBuildTimeout::CreateBuildTimeout()
{
    limit_ = "";
    limitIsSet_ = false;
    unit_ = "";
    unitIsSet_ = false;
}

CreateBuildTimeout::~CreateBuildTimeout() = default;

void CreateBuildTimeout::validate()
{
}

web::json::value CreateBuildTimeout::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(unitIsSet_) {
        val[utility::conversions::to_string_t("unit")] = ModelBase::toJson(unit_);
    }

    return val;
}
bool CreateBuildTimeout::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnit(refVal);
        }
    }
    return ok;
}


std::string CreateBuildTimeout::getLimit() const
{
    return limit_;
}

void CreateBuildTimeout::setLimit(const std::string& value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool CreateBuildTimeout::limitIsSet() const
{
    return limitIsSet_;
}

void CreateBuildTimeout::unsetlimit()
{
    limitIsSet_ = false;
}

std::string CreateBuildTimeout::getUnit() const
{
    return unit_;
}

void CreateBuildTimeout::setUnit(const std::string& value)
{
    unit_ = value;
    unitIsSet_ = true;
}

bool CreateBuildTimeout::unitIsSet() const
{
    return unitIsSet_;
}

void CreateBuildTimeout::unsetunit()
{
    unitIsSet_ = false;
}

}
}
}
}
}


