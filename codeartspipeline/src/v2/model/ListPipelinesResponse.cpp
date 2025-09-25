

#include "huaweicloud/codeartspipeline/v2/model/ListPipelinesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelinesResponse::ListPipelinesResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    pipelinesIsSet_ = false;
}

ListPipelinesResponse::~ListPipelinesResponse() = default;

void ListPipelinesResponse::validate()
{
}

web::json::value ListPipelinesResponse::toJson() const
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
    if(pipelinesIsSet_) {
        val[utility::conversions::to_string_t("pipelines")] = ModelBase::toJson(pipelines_);
    }

    return val;
}
bool ListPipelinesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pipelines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pipelines"));
        if(!fieldValue.is_null())
        {
            std::vector<ListPipelinesPage_pipelines> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPipelines(refVal);
        }
    }
    return ok;
}


int32_t ListPipelinesResponse::getOffset() const
{
    return offset_;
}

void ListPipelinesResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelinesResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelinesResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPipelinesResponse::getLimit() const
{
    return limit_;
}

void ListPipelinesResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelinesResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelinesResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPipelinesResponse::getTotal() const
{
    return total_;
}

void ListPipelinesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPipelinesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPipelinesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<ListPipelinesPage_pipelines>& ListPipelinesResponse::getPipelines()
{
    return pipelines_;
}

void ListPipelinesResponse::setPipelines(const std::vector<ListPipelinesPage_pipelines>& value)
{
    pipelines_ = value;
    pipelinesIsSet_ = true;
}

bool ListPipelinesResponse::pipelinesIsSet() const
{
    return pipelinesIsSet_;
}

void ListPipelinesResponse::unsetpipelines()
{
    pipelinesIsSet_ = false;
}

}
}
}
}
}


