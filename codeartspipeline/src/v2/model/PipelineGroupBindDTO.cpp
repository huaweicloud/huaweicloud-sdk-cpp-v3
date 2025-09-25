

#include "huaweicloud/codeartspipeline/v2/model/PipelineGroupBindDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineGroupBindDTO::PipelineGroupBindDTO()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    pipelinesIsSet_ = false;
}

PipelineGroupBindDTO::~PipelineGroupBindDTO() = default;

void PipelineGroupBindDTO::validate()
{
}

web::json::value PipelineGroupBindDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(pipelinesIsSet_) {
        val[utility::conversions::to_string_t("pipelines")] = ModelBase::toJson(pipelines_);
    }

    return val;
}
bool PipelineGroupBindDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipelines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipelines"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineGroupBindDTO_pipelines> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelines(refVal);
        }
    }
    return ok;
}


std::string PipelineGroupBindDTO::getGroupId() const
{
    return groupId_;
}

void PipelineGroupBindDTO::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool PipelineGroupBindDTO::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void PipelineGroupBindDTO::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::vector<PipelineGroupBindDTO_pipelines>& PipelineGroupBindDTO::getPipelines()
{
    return pipelines_;
}

void PipelineGroupBindDTO::setPipelines(const std::vector<PipelineGroupBindDTO_pipelines>& value)
{
    pipelines_ = value;
    pipelinesIsSet_ = true;
}

bool PipelineGroupBindDTO::pipelinesIsSet() const
{
    return pipelinesIsSet_;
}

void PipelineGroupBindDTO::unsetpipelines()
{
    pipelinesIsSet_ = false;
}

}
}
}
}
}


