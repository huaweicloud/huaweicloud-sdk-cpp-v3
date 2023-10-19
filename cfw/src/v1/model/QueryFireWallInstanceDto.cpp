

#include "huaweicloud/cfw/v1/model/QueryFireWallInstanceDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




QueryFireWallInstanceDto::QueryFireWallInstanceDto()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    keyWord_ = "";
    keyWordIsSet_ = false;
    tagsIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

QueryFireWallInstanceDto::~QueryFireWallInstanceDto() = default;

void QueryFireWallInstanceDto::validate()
{
}

web::json::value QueryFireWallInstanceDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(keyWordIsSet_) {
        val[utility::conversions::to_string_t("key_word")] = ModelBase::toJson(keyWord_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool QueryFireWallInstanceDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_word"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string QueryFireWallInstanceDto::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void QueryFireWallInstanceDto::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool QueryFireWallInstanceDto::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void QueryFireWallInstanceDto::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string QueryFireWallInstanceDto::getKeyWord() const
{
    return keyWord_;
}

void QueryFireWallInstanceDto::setKeyWord(const std::string& value)
{
    keyWord_ = value;
    keyWordIsSet_ = true;
}

bool QueryFireWallInstanceDto::keyWordIsSet() const
{
    return keyWordIsSet_;
}

void QueryFireWallInstanceDto::unsetkeyWord()
{
    keyWordIsSet_ = false;
}

std::vector<TagInfo>& QueryFireWallInstanceDto::getTags()
{
    return tags_;
}

void QueryFireWallInstanceDto::setTags(const std::vector<TagInfo>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool QueryFireWallInstanceDto::tagsIsSet() const
{
    return tagsIsSet_;
}

void QueryFireWallInstanceDto::unsettags()
{
    tagsIsSet_ = false;
}

int32_t QueryFireWallInstanceDto::getLimit() const
{
    return limit_;
}

void QueryFireWallInstanceDto::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool QueryFireWallInstanceDto::limitIsSet() const
{
    return limitIsSet_;
}

void QueryFireWallInstanceDto::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t QueryFireWallInstanceDto::getOffset() const
{
    return offset_;
}

void QueryFireWallInstanceDto::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool QueryFireWallInstanceDto::offsetIsSet() const
{
    return offsetIsSet_;
}

void QueryFireWallInstanceDto::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


