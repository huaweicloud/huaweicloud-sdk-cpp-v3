

#include "huaweicloud/cbr/v1/model/BulkCreateAndDeleteVaultTagsReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {




BulkCreateAndDeleteVaultTagsReq::BulkCreateAndDeleteVaultTagsReq()
{
    tagsIsSet_ = false;
    sysTagsIsSet_ = false;
    action_ = "";
    actionIsSet_ = false;
}

BulkCreateAndDeleteVaultTagsReq::~BulkCreateAndDeleteVaultTagsReq() = default;

void BulkCreateAndDeleteVaultTagsReq::validate()
{
}

web::json::value BulkCreateAndDeleteVaultTagsReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(sysTagsIsSet_) {
        val[utility::conversions::to_string_t("sys_tags")] = ModelBase::toJson(sysTags_);
    }
    if(actionIsSet_) {
        val[utility::conversions::to_string_t("action")] = ModelBase::toJson(action_);
    }

    return val;
}

bool BulkCreateAndDeleteVaultTagsReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Tag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sys_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sys_tags"));
        if(!fieldValue.is_null())
        {
            std::vector<SysTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSysTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAction(refVal);
        }
    }
    return ok;
}

std::vector<Tag>& BulkCreateAndDeleteVaultTagsReq::getTags()
{
    return tags_;
}

void BulkCreateAndDeleteVaultTagsReq::setTags(const std::vector<Tag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BulkCreateAndDeleteVaultTagsReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void BulkCreateAndDeleteVaultTagsReq::unsettags()
{
    tagsIsSet_ = false;
}

std::vector<SysTag>& BulkCreateAndDeleteVaultTagsReq::getSysTags()
{
    return sysTags_;
}

void BulkCreateAndDeleteVaultTagsReq::setSysTags(const std::vector<SysTag>& value)
{
    sysTags_ = value;
    sysTagsIsSet_ = true;
}

bool BulkCreateAndDeleteVaultTagsReq::sysTagsIsSet() const
{
    return sysTagsIsSet_;
}

void BulkCreateAndDeleteVaultTagsReq::unsetsysTags()
{
    sysTagsIsSet_ = false;
}

std::string BulkCreateAndDeleteVaultTagsReq::getAction() const
{
    return action_;
}

void BulkCreateAndDeleteVaultTagsReq::setAction(const std::string& value)
{
    action_ = value;
    actionIsSet_ = true;
}

bool BulkCreateAndDeleteVaultTagsReq::actionIsSet() const
{
    return actionIsSet_;
}

void BulkCreateAndDeleteVaultTagsReq::unsetaction()
{
    actionIsSet_ = false;
}

}
}
}
}
}


