

#include "huaweicloud/lts/v2/model/CreateLogGroupParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateLogGroupParams::CreateLogGroupParams()
{
    logGroupName_ = "";
    logGroupNameIsSet_ = false;
    ttlInDays_ = 0;
    ttlInDaysIsSet_ = false;
    tagsIsSet_ = false;
    logGroupNameAlias_ = "";
    logGroupNameAliasIsSet_ = false;
}

CreateLogGroupParams::~CreateLogGroupParams() = default;

void CreateLogGroupParams::validate()
{
}

web::json::value CreateLogGroupParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(logGroupNameIsSet_) {
        val[utility::conversions::to_string_t("log_group_name")] = ModelBase::toJson(logGroupName_);
    }
    if(ttlInDaysIsSet_) {
        val[utility::conversions::to_string_t("ttl_in_days")] = ModelBase::toJson(ttlInDays_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(logGroupNameAliasIsSet_) {
        val[utility::conversions::to_string_t("log_group_name_alias")] = ModelBase::toJson(logGroupNameAlias_);
    }

    return val;
}
bool CreateLogGroupParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("log_group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ttl_in_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ttl_in_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTtlInDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_group_name_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_group_name_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogGroupNameAlias(refVal);
        }
    }
    return ok;
}


std::string CreateLogGroupParams::getLogGroupName() const
{
    return logGroupName_;
}

void CreateLogGroupParams::setLogGroupName(const std::string& value)
{
    logGroupName_ = value;
    logGroupNameIsSet_ = true;
}

bool CreateLogGroupParams::logGroupNameIsSet() const
{
    return logGroupNameIsSet_;
}

void CreateLogGroupParams::unsetlogGroupName()
{
    logGroupNameIsSet_ = false;
}

int32_t CreateLogGroupParams::getTtlInDays() const
{
    return ttlInDays_;
}

void CreateLogGroupParams::setTtlInDays(int32_t value)
{
    ttlInDays_ = value;
    ttlInDaysIsSet_ = true;
}

bool CreateLogGroupParams::ttlInDaysIsSet() const
{
    return ttlInDaysIsSet_;
}

void CreateLogGroupParams::unsetttlInDays()
{
    ttlInDaysIsSet_ = false;
}

std::vector<TagsBody>& CreateLogGroupParams::getTags()
{
    return tags_;
}

void CreateLogGroupParams::setTags(const std::vector<TagsBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateLogGroupParams::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateLogGroupParams::unsettags()
{
    tagsIsSet_ = false;
}

std::string CreateLogGroupParams::getLogGroupNameAlias() const
{
    return logGroupNameAlias_;
}

void CreateLogGroupParams::setLogGroupNameAlias(const std::string& value)
{
    logGroupNameAlias_ = value;
    logGroupNameAliasIsSet_ = true;
}

bool CreateLogGroupParams::logGroupNameAliasIsSet() const
{
    return logGroupNameAliasIsSet_;
}

void CreateLogGroupParams::unsetlogGroupNameAlias()
{
    logGroupNameAliasIsSet_ = false;
}

}
}
}
}
}


