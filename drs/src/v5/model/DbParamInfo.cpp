

#include "huaweicloud/drs/v5/model/DbParamInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DbParamInfo::DbParamInfo()
{
    commonIsSet_ = false;
    performanceIsSet_ = false;
}

DbParamInfo::~DbParamInfo() = default;

void DbParamInfo::validate()
{
}

web::json::value DbParamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(commonIsSet_) {
        val[utility::conversions::to_string_t("common")] = ModelBase::toJson(common_);
    }
    if(performanceIsSet_) {
        val[utility::conversions::to_string_t("performance")] = ModelBase::toJson(performance_);
    }

    return val;
}

bool DbParamInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            std::vector<DbParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("performance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("performance"));
        if(!fieldValue.is_null())
        {
            std::vector<DbParam> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerformance(refVal);
        }
    }
    return ok;
}

std::vector<DbParam>& DbParamInfo::getCommon()
{
    return common_;
}

void DbParamInfo::setCommon(const std::vector<DbParam>& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool DbParamInfo::commonIsSet() const
{
    return commonIsSet_;
}

void DbParamInfo::unsetcommon()
{
    commonIsSet_ = false;
}

std::vector<DbParam>& DbParamInfo::getPerformance()
{
    return performance_;
}

void DbParamInfo::setPerformance(const std::vector<DbParam>& value)
{
    performance_ = value;
    performanceIsSet_ = true;
}

bool DbParamInfo::performanceIsSet() const
{
    return performanceIsSet_;
}

void DbParamInfo::unsetperformance()
{
    performanceIsSet_ = false;
}

}
}
}
}
}


