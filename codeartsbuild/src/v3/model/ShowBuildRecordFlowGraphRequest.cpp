

#include "huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFlowGraphRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowBuildRecordFlowGraphRequest::ShowBuildRecordFlowGraphRequest()
{
    buildFlowRecordId_ = "";
    buildFlowRecordIdIsSet_ = false;
}

ShowBuildRecordFlowGraphRequest::~ShowBuildRecordFlowGraphRequest() = default;

void ShowBuildRecordFlowGraphRequest::validate()
{
}

web::json::value ShowBuildRecordFlowGraphRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildFlowRecordIdIsSet_) {
        val[utility::conversions::to_string_t("build_flow_record_id")] = ModelBase::toJson(buildFlowRecordId_);
    }

    return val;
}
bool ShowBuildRecordFlowGraphRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("build_flow_record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_flow_record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildFlowRecordId(refVal);
        }
    }
    return ok;
}


std::string ShowBuildRecordFlowGraphRequest::getBuildFlowRecordId() const
{
    return buildFlowRecordId_;
}

void ShowBuildRecordFlowGraphRequest::setBuildFlowRecordId(const std::string& value)
{
    buildFlowRecordId_ = value;
    buildFlowRecordIdIsSet_ = true;
}

bool ShowBuildRecordFlowGraphRequest::buildFlowRecordIdIsSet() const
{
    return buildFlowRecordIdIsSet_;
}

void ShowBuildRecordFlowGraphRequest::unsetbuildFlowRecordId()
{
    buildFlowRecordIdIsSet_ = false;
}

}
}
}
}
}


