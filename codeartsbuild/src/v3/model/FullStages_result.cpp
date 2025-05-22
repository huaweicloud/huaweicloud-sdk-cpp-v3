

#include "huaweicloud/codeartsbuild/v3/model/FullStages_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




FullStages_result::FullStages_result()
{
    buildStagesIsSet_ = false;
}

FullStages_result::~FullStages_result() = default;

void FullStages_result::validate()
{
}

web::json::value FullStages_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildStagesIsSet_) {
        val[utility::conversions::to_string_t("build_stages")] = ModelBase::toJson(buildStages_);
    }

    return val;
}
bool FullStages_result::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_stages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_stages"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, BuildStageRecord> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildStages(refVal);
        }
    }
    return ok;
}


std::map<std::string, BuildStageRecord>& FullStages_result::getBuildStages()
{
    return buildStages_;
}

void FullStages_result::setBuildStages(const std::map<std::string, BuildStageRecord>& value)
{
    buildStages_ = value;
    buildStagesIsSet_ = true;
}

bool FullStages_result::buildStagesIsSet() const
{
    return buildStagesIsSet_;
}

void FullStages_result::unsetbuildStages()
{
    buildStagesIsSet_ = false;
}

}
}
}
}
}


