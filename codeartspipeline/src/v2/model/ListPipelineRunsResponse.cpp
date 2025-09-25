

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineRunsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineRunsResponse::ListPipelineRunsResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    pipelineRunsIsSet_ = false;
}

ListPipelineRunsResponse::~ListPipelineRunsResponse() = default;

void ListPipelineRunsResponse::validate()
{
}

web::json::value ListPipelineRunsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(pipelineRunsIsSet_) {
        val[utility::conversions::to_string_t("pipeline_runs")] = ModelBase::toJson(pipelineRuns_);
    }

    return val;
}
bool ListPipelineRunsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pipeline_runs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_runs"));
        if(!fieldValue.is_null())
        {
            std::vector<ListPipelineRunsPage_pipeline_runs> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineRuns(refVal);
        }
    }
    return ok;
}


int32_t ListPipelineRunsResponse::getOffset() const
{
    return offset_;
}

void ListPipelineRunsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelineRunsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelineRunsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPipelineRunsResponse::getLimit() const
{
    return limit_;
}

void ListPipelineRunsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelineRunsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelineRunsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPipelineRunsResponse::getTotal() const
{
    return total_;
}

void ListPipelineRunsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPipelineRunsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPipelineRunsResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListPipelineRunsPage_pipeline_runs>& ListPipelineRunsResponse::getPipelineRuns()
{
    return pipelineRuns_;
}

void ListPipelineRunsResponse::setPipelineRuns(const std::vector<ListPipelineRunsPage_pipeline_runs>& value)
{
    pipelineRuns_ = value;
    pipelineRunsIsSet_ = true;
}

bool ListPipelineRunsResponse::pipelineRunsIsSet() const
{
    return pipelineRunsIsSet_;
}

void ListPipelineRunsResponse::unsetpipelineRuns()
{
    pipelineRunsIsSet_ = false;
}

}
}
}
}
}


