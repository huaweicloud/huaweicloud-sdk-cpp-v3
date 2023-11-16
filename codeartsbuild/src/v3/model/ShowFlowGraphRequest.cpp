

#include "huaweicloud/codeartsbuild/v3/model/ShowFlowGraphRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowFlowGraphRequest::ShowFlowGraphRequest()
{
    buildFlowRecordId_ = "";
    buildFlowRecordIdIsSet_ = false;
}

ShowFlowGraphRequest::~ShowFlowGraphRequest() = default;

void ShowFlowGraphRequest::validate()
{
}

web::json::value ShowFlowGraphRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(buildFlowRecordIdIsSet_) {
        val[utility::conversions::to_string_t("build_flow_record_id")] = ModelBase::toJson(buildFlowRecordId_);
    }

    return val;
}
bool ShowFlowGraphRequest::fromJson(const web::json::value& val)
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


std::string ShowFlowGraphRequest::getBuildFlowRecordId() const
{
    return buildFlowRecordId_;
}

void ShowFlowGraphRequest::setBuildFlowRecordId(const std::string& value)
{
    buildFlowRecordId_ = value;
    buildFlowRecordIdIsSet_ = true;
}

bool ShowFlowGraphRequest::buildFlowRecordIdIsSet() const
{
    return buildFlowRecordIdIsSet_;
}

void ShowFlowGraphRequest::unsetbuildFlowRecordId()
{
    buildFlowRecordIdIsSet_ = false;
}

}
}
}
}
}


