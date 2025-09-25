

#include "huaweicloud/codeartspipeline/v2/model/ListPipelineTemplatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListPipelineTemplatesResponse::ListPipelineTemplatesResponse()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    templatesIsSet_ = false;
}

ListPipelineTemplatesResponse::~ListPipelineTemplatesResponse() = default;

void ListPipelineTemplatesResponse::validate()
{
}

web::json::value ListPipelineTemplatesResponse::toJson() const
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
    if(templatesIsSet_) {
        val[utility::conversions::to_string_t("templates")] = ModelBase::toJson(templates_);
    }

    return val;
}
bool ListPipelineTemplatesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("templates"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("templates"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineTemplateSimpleVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplates(refVal);
        }
    }
    return ok;
}


int32_t ListPipelineTemplatesResponse::getOffset() const
{
    return offset_;
}

void ListPipelineTemplatesResponse::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListPipelineTemplatesResponse::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListPipelineTemplatesResponse::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListPipelineTemplatesResponse::getLimit() const
{
    return limit_;
}

void ListPipelineTemplatesResponse::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListPipelineTemplatesResponse::limitIsSet() const
{
    return limitIsSet_;
}

void ListPipelineTemplatesResponse::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListPipelineTemplatesResponse::getTotal() const
{
    return total_;
}

void ListPipelineTemplatesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListPipelineTemplatesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListPipelineTemplatesResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<PipelineTemplateSimpleVO>& ListPipelineTemplatesResponse::getTemplates()
{
    return templates_;
}

void ListPipelineTemplatesResponse::setTemplates(const std::vector<PipelineTemplateSimpleVO>& value)
{
    templates_ = value;
    templatesIsSet_ = true;
}

bool ListPipelineTemplatesResponse::templatesIsSet() const
{
    return templatesIsSet_;
}

void ListPipelineTemplatesResponse::unsettemplates()
{
    templatesIsSet_ = false;
}

}
}
}
}
}


