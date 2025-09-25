

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineSimpleInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineSimpleInfoResponse::ListPipelineSimpleInfoResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    resultIsSet_ = false;
}

ListPipelineSimpleInfoResponse::~ListPipelineSimpleInfoResponse() = default;

void ListPipelineSimpleInfoResponse::validate()
{
}

web::json::value ListPipelineSimpleInfoResponse::toJson() const
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
    if(resultIsSet_) {
        val[utility::conversions::to_string_t("result")] = ModelBase::toJson(result_);
    }

    return val;
}
bool ListPipelineSimpleInfoResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineBasicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResult(refVal);
        }
    }
    return ok;
}


int32_t ListPipelineSimpleInfoResponse::getOffset() const
{
    return offset_;
}

void ListPipelineSimpleInfoResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelineSimpleInfoResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelineSimpleInfoResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPipelineSimpleInfoResponse::getLimit() const
{
    return limit_;
}

void ListPipelineSimpleInfoResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelineSimpleInfoResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelineSimpleInfoResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPipelineSimpleInfoResponse::getTotal() const
{
    return total_;
}

void ListPipelineSimpleInfoResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPipelineSimpleInfoResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPipelineSimpleInfoResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PipelineBasicInfo>& ListPipelineSimpleInfoResponse::getResult()
{
    return result_;
}

void ListPipelineSimpleInfoResponse::setResult(const std::vector<PipelineBasicInfo>& value)
{
    result_ = value;
    resultIsSet_ = true;
}

bool ListPipelineSimpleInfoResponse::resultIsSet() const
{
    return resultIsSet_;
}

void ListPipelineSimpleInfoResponse::unsetresult()
{
    resultIsSet_ = false;
}

}
}
}
}
}


