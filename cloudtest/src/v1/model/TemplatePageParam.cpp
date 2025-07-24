

#include "huaweicloud/cloudtest/v1/model/TemplatePageParam.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TemplatePageParam::TemplatePageParam()
{
    creatorNum_ = "";
    creatorNumIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

TemplatePageParam::~TemplatePageParam() = default;

void TemplatePageParam::validate()
{
}

web::json::value TemplatePageParam::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creatorNumIsSet_) {
        val[utility::conversions::to_string_t("creator_num")] = ModelBase::toJson(creatorNum_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool TemplatePageParam::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creator_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorNum(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string TemplatePageParam::getCreatorNum() const
{
    return creatorNum_;
}

void TemplatePageParam::setCreatorNum(const std::string& value)
{
    creatorNum_ = value;
    creatorNumIsSet_ = true;
}

bool TemplatePageParam::creatorNumIsSet() const
{
    return creatorNumIsSet_;
}

void TemplatePageParam::unsetcreatorNum()
{
    creatorNumIsSet_ = false;
}

int32_t TemplatePageParam::getOffset() const
{
    return offset_;
}

void TemplatePageParam::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool TemplatePageParam::offsetIsSet() const
{
    return offsetIsSet_;
}

void TemplatePageParam::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t TemplatePageParam::getLimit() const
{
    return limit_;
}

void TemplatePageParam::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool TemplatePageParam::limitIsSet() const
{
    return limitIsSet_;
}

void TemplatePageParam::unsetlimit()
{
    limitIsSet_ = false;
}

std::string TemplatePageParam::getName() const
{
    return name_;
}

void TemplatePageParam::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TemplatePageParam::nameIsSet() const
{
    return nameIsSet_;
}

void TemplatePageParam::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


