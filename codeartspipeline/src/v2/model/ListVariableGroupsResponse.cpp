

#include "huaweicloud/codeartspipeline/v2/model/ListVariableGroupsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListVariableGroupsResponse::ListVariableGroupsResponse()
{
    pipelineVariableGroupsIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListVariableGroupsResponse::~ListVariableGroupsResponse() = default;

void ListVariableGroupsResponse::validate()
{
}

web::json::value ListVariableGroupsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pipelineVariableGroupsIsSet_) {
        val[utility::conversions::to_string_t("pipeline_variable_groups")] = ModelBase::toJson(pipelineVariableGroups_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListVariableGroupsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pipeline_variable_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipeline_variable_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<ListVariableGroupsResp_pipeline_variable_groups> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelineVariableGroups(refVal);
        }
    }
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
    return ok;
}


std::vector<ListVariableGroupsResp_pipeline_variable_groups>& ListVariableGroupsResponse::getPipelineVariableGroups()
{
    return pipelineVariableGroups_;
}

void ListVariableGroupsResponse::setPipelineVariableGroups(const std::vector<ListVariableGroupsResp_pipeline_variable_groups>& value)
{
    pipelineVariableGroups_ = value;
    pipelineVariableGroupsIsSet_ = true;
}

bool ListVariableGroupsResponse::pipelineVariableGroupsIsSet() const
{
    return pipelineVariableGroupsIsSet_;
}

void ListVariableGroupsResponse::unsetpipelineVariableGroups()
{
    pipelineVariableGroupsIsSet_ = false;
}

int32_t ListVariableGroupsResponse::getOffset() const
{
    return offset_;
}

void ListVariableGroupsResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListVariableGroupsResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListVariableGroupsResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListVariableGroupsResponse::getLimit() const
{
    return limit_;
}

void ListVariableGroupsResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListVariableGroupsResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListVariableGroupsResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListVariableGroupsResponse::getTotal() const
{
    return total_;
}

void ListVariableGroupsResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListVariableGroupsResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListVariableGroupsResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


