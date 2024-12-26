

#include "huaweicloud/cfw/v1/model/ListIpsRules1Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsRules1Request::ListIpsRules1Request()
{
    affectedApplicationLike_ = 0;
    affectedApplicationLikeIsSet_ = false;
    createTime_ = 0;
    createTimeIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    ipsCveLike_ = 0;
    ipsCveLikeIsSet_ = false;
    ipsGroup_ = 0;
    ipsGroupIsSet_ = false;
    ipsId_ = "";
    ipsIdIsSet_ = false;
    ipsLevel_ = 0;
    ipsLevelIsSet_ = false;
    ipsNameLike_ = "";
    ipsNameLikeIsSet_ = false;
    ipsRulesTypeLike_ = 0;
    ipsRulesTypeLikeIsSet_ = false;
    ipsStatus_ = "";
    ipsStatusIsSet_ = false;
    isUpdatedIpsRuleQueried_ = false;
    isUpdatedIpsRuleQueriedIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    objectId_ = "";
    objectIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListIpsRules1Request::~ListIpsRules1Request() = default;

void ListIpsRules1Request::validate()
{
}

web::json::value ListIpsRules1Request::toJson() const
{
    web::json::value val = web::json::value::object();

    if(affectedApplicationLikeIsSet_) {
        val[utility::conversions::to_string_t("affected_application_like")] = ModelBase::toJson(affectedApplicationLike_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(ipsCveLikeIsSet_) {
        val[utility::conversions::to_string_t("ips_cve_like")] = ModelBase::toJson(ipsCveLike_);
    }
    if(ipsGroupIsSet_) {
        val[utility::conversions::to_string_t("ips_group")] = ModelBase::toJson(ipsGroup_);
    }
    if(ipsIdIsSet_) {
        val[utility::conversions::to_string_t("ips_id")] = ModelBase::toJson(ipsId_);
    }
    if(ipsLevelIsSet_) {
        val[utility::conversions::to_string_t("ips_level")] = ModelBase::toJson(ipsLevel_);
    }
    if(ipsNameLikeIsSet_) {
        val[utility::conversions::to_string_t("ips_name_like")] = ModelBase::toJson(ipsNameLike_);
    }
    if(ipsRulesTypeLikeIsSet_) {
        val[utility::conversions::to_string_t("ips_rules_type_like")] = ModelBase::toJson(ipsRulesTypeLike_);
    }
    if(ipsStatusIsSet_) {
        val[utility::conversions::to_string_t("ips_status")] = ModelBase::toJson(ipsStatus_);
    }
    if(isUpdatedIpsRuleQueriedIsSet_) {
        val[utility::conversions::to_string_t("is_updated_ips_rule_queried")] = ModelBase::toJson(isUpdatedIpsRuleQueried_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(objectIdIsSet_) {
        val[utility::conversions::to_string_t("object_id")] = ModelBase::toJson(objectId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ListIpsRules1Request::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("affected_application_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("affected_application_like"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAffectedApplicationLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_cve_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_cve_like"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsCveLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_group"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_name_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_name_like"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsNameLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_rules_type_like"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_rules_type_like"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsRulesTypeLike(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ips_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ips_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_updated_ips_rule_queried"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_updated_ips_rule_queried"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUpdatedIpsRuleQueried(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("object_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


int32_t ListIpsRules1Request::getAffectedApplicationLike() const
{
    return affectedApplicationLike_;
}

void ListIpsRules1Request::setAffectedApplicationLike(int32_t value)
{
    affectedApplicationLike_ = value;
    affectedApplicationLikeIsSet_ = true;
}

bool ListIpsRules1Request::affectedApplicationLikeIsSet() const
{
    return affectedApplicationLikeIsSet_;
}

void ListIpsRules1Request::unsetaffectedApplicationLike()
{
    affectedApplicationLikeIsSet_ = false;
}

int32_t ListIpsRules1Request::getCreateTime() const
{
    return createTime_;
}

void ListIpsRules1Request::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListIpsRules1Request::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListIpsRules1Request::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListIpsRules1Request::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListIpsRules1Request::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListIpsRules1Request::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListIpsRules1Request::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListIpsRules1Request::getIpsCveLike() const
{
    return ipsCveLike_;
}

void ListIpsRules1Request::setIpsCveLike(int32_t value)
{
    ipsCveLike_ = value;
    ipsCveLikeIsSet_ = true;
}

bool ListIpsRules1Request::ipsCveLikeIsSet() const
{
    return ipsCveLikeIsSet_;
}

void ListIpsRules1Request::unsetipsCveLike()
{
    ipsCveLikeIsSet_ = false;
}

int32_t ListIpsRules1Request::getIpsGroup() const
{
    return ipsGroup_;
}

void ListIpsRules1Request::setIpsGroup(int32_t value)
{
    ipsGroup_ = value;
    ipsGroupIsSet_ = true;
}

bool ListIpsRules1Request::ipsGroupIsSet() const
{
    return ipsGroupIsSet_;
}

void ListIpsRules1Request::unsetipsGroup()
{
    ipsGroupIsSet_ = false;
}

std::string ListIpsRules1Request::getIpsId() const
{
    return ipsId_;
}

void ListIpsRules1Request::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool ListIpsRules1Request::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void ListIpsRules1Request::unsetipsId()
{
    ipsIdIsSet_ = false;
}

int32_t ListIpsRules1Request::getIpsLevel() const
{
    return ipsLevel_;
}

void ListIpsRules1Request::setIpsLevel(int32_t value)
{
    ipsLevel_ = value;
    ipsLevelIsSet_ = true;
}

bool ListIpsRules1Request::ipsLevelIsSet() const
{
    return ipsLevelIsSet_;
}

void ListIpsRules1Request::unsetipsLevel()
{
    ipsLevelIsSet_ = false;
}

std::string ListIpsRules1Request::getIpsNameLike() const
{
    return ipsNameLike_;
}

void ListIpsRules1Request::setIpsNameLike(const std::string& value)
{
    ipsNameLike_ = value;
    ipsNameLikeIsSet_ = true;
}

bool ListIpsRules1Request::ipsNameLikeIsSet() const
{
    return ipsNameLikeIsSet_;
}

void ListIpsRules1Request::unsetipsNameLike()
{
    ipsNameLikeIsSet_ = false;
}

int32_t ListIpsRules1Request::getIpsRulesTypeLike() const
{
    return ipsRulesTypeLike_;
}

void ListIpsRules1Request::setIpsRulesTypeLike(int32_t value)
{
    ipsRulesTypeLike_ = value;
    ipsRulesTypeLikeIsSet_ = true;
}

bool ListIpsRules1Request::ipsRulesTypeLikeIsSet() const
{
    return ipsRulesTypeLikeIsSet_;
}

void ListIpsRules1Request::unsetipsRulesTypeLike()
{
    ipsRulesTypeLikeIsSet_ = false;
}

std::string ListIpsRules1Request::getIpsStatus() const
{
    return ipsStatus_;
}

void ListIpsRules1Request::setIpsStatus(const std::string& value)
{
    ipsStatus_ = value;
    ipsStatusIsSet_ = true;
}

bool ListIpsRules1Request::ipsStatusIsSet() const
{
    return ipsStatusIsSet_;
}

void ListIpsRules1Request::unsetipsStatus()
{
    ipsStatusIsSet_ = false;
}

bool ListIpsRules1Request::isIsUpdatedIpsRuleQueried() const
{
    return isUpdatedIpsRuleQueried_;
}

void ListIpsRules1Request::setIsUpdatedIpsRuleQueried(bool value)
{
    isUpdatedIpsRuleQueried_ = value;
    isUpdatedIpsRuleQueriedIsSet_ = true;
}

bool ListIpsRules1Request::isUpdatedIpsRuleQueriedIsSet() const
{
    return isUpdatedIpsRuleQueriedIsSet_;
}

void ListIpsRules1Request::unsetisUpdatedIpsRuleQueried()
{
    isUpdatedIpsRuleQueriedIsSet_ = false;
}

int32_t ListIpsRules1Request::getLimit() const
{
    return limit_;
}

void ListIpsRules1Request::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIpsRules1Request::limitIsSet() const
{
    return limitIsSet_;
}

void ListIpsRules1Request::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListIpsRules1Request::getObjectId() const
{
    return objectId_;
}

void ListIpsRules1Request::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListIpsRules1Request::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListIpsRules1Request::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ListIpsRules1Request::getOffset() const
{
    return offset_;
}

void ListIpsRules1Request::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIpsRules1Request::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIpsRules1Request::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListIpsRules1Request::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListIpsRules1Request::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListIpsRules1Request::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListIpsRules1Request::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


