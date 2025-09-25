

#include "huaweicloud/codeartspipeline/v2/model/ListPipleineBuildResultResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipleineBuildResultResponse::ListPipleineBuildResultResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    buildResultsIsSet_ = false;
}

ListPipleineBuildResultResponse::~ListPipleineBuildResultResponse() = default;

void ListPipleineBuildResultResponse::validate()
{
}

web::json::value ListPipleineBuildResultResponse::toJson() const
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
    if(buildResultsIsSet_) {
        val[utility::conversions::to_string_t("build_results")] = ModelBase::toJson(buildResults_);
    }

    return val;
}
bool ListPipleineBuildResultResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("build_results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("build_results"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineBuildResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuildResults(refVal);
        }
    }
    return ok;
}


int32_t ListPipleineBuildResultResponse::getOffset() const
{
    return offset_;
}

void ListPipleineBuildResultResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipleineBuildResultResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipleineBuildResultResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPipleineBuildResultResponse::getLimit() const
{
    return limit_;
}

void ListPipleineBuildResultResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipleineBuildResultResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipleineBuildResultResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPipleineBuildResultResponse::getTotal() const
{
    return total_;
}

void ListPipleineBuildResultResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPipleineBuildResultResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPipleineBuildResultResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PipelineBuildResult>& ListPipleineBuildResultResponse::getBuildResults()
{
    return buildResults_;
}

void ListPipleineBuildResultResponse::setBuildResults(const std::vector<PipelineBuildResult>& value)
{
    buildResults_ = value;
    buildResultsIsSet_ = true;
}

bool ListPipleineBuildResultResponse::buildResultsIsSet() const
{
    return buildResultsIsSet_;
}

void ListPipleineBuildResultResponse::unsetbuildResults()
{
    buildResultsIsSet_ = false;
}

}
}
}
}
}


