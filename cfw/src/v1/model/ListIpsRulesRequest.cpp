

#include "huaweicloud/cfw/v1/model/ListIpsRulesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsRulesRequest::ListIpsRulesRequest()
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

ListIpsRulesRequest::~ListIpsRulesRequest() = default;

void ListIpsRulesRequest::validate()
{
}

web::json::value ListIpsRulesRequest::toJson() const
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
bool ListIpsRulesRequest::fromJson(const web::json::value& val)
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


int32_t ListIpsRulesRequest::getAffectedApplicationLike() const
{
    return affectedApplicationLike_;
}

void ListIpsRulesRequest::setAffectedApplicationLike(int32_t value)
{
    affectedApplicationLike_ = value;
    affectedApplicationLikeIsSet_ = true;
}

bool ListIpsRulesRequest::affectedApplicationLikeIsSet() const
{
    return affectedApplicationLikeIsSet_;
}

void ListIpsRulesRequest::unsetaffectedApplicationLike()
{
    affectedApplicationLikeIsSet_ = false;
}

int32_t ListIpsRulesRequest::getCreateTime() const
{
    return createTime_;
}

void ListIpsRulesRequest::setCreateTime(int32_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ListIpsRulesRequest::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ListIpsRulesRequest::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ListIpsRulesRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListIpsRulesRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListIpsRulesRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListIpsRulesRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListIpsRulesRequest::getIpsCveLike() const
{
    return ipsCveLike_;
}

void ListIpsRulesRequest::setIpsCveLike(int32_t value)
{
    ipsCveLike_ = value;
    ipsCveLikeIsSet_ = true;
}

bool ListIpsRulesRequest::ipsCveLikeIsSet() const
{
    return ipsCveLikeIsSet_;
}

void ListIpsRulesRequest::unsetipsCveLike()
{
    ipsCveLikeIsSet_ = false;
}

int32_t ListIpsRulesRequest::getIpsGroup() const
{
    return ipsGroup_;
}

void ListIpsRulesRequest::setIpsGroup(int32_t value)
{
    ipsGroup_ = value;
    ipsGroupIsSet_ = true;
}

bool ListIpsRulesRequest::ipsGroupIsSet() const
{
    return ipsGroupIsSet_;
}

void ListIpsRulesRequest::unsetipsGroup()
{
    ipsGroupIsSet_ = false;
}

std::string ListIpsRulesRequest::getIpsId() const
{
    return ipsId_;
}

void ListIpsRulesRequest::setIpsId(const std::string& value)
{
    ipsId_ = value;
    ipsIdIsSet_ = true;
}

bool ListIpsRulesRequest::ipsIdIsSet() const
{
    return ipsIdIsSet_;
}

void ListIpsRulesRequest::unsetipsId()
{
    ipsIdIsSet_ = false;
}

int32_t ListIpsRulesRequest::getIpsLevel() const
{
    return ipsLevel_;
}

void ListIpsRulesRequest::setIpsLevel(int32_t value)
{
    ipsLevel_ = value;
    ipsLevelIsSet_ = true;
}

bool ListIpsRulesRequest::ipsLevelIsSet() const
{
    return ipsLevelIsSet_;
}

void ListIpsRulesRequest::unsetipsLevel()
{
    ipsLevelIsSet_ = false;
}

std::string ListIpsRulesRequest::getIpsNameLike() const
{
    return ipsNameLike_;
}

void ListIpsRulesRequest::setIpsNameLike(const std::string& value)
{
    ipsNameLike_ = value;
    ipsNameLikeIsSet_ = true;
}

bool ListIpsRulesRequest::ipsNameLikeIsSet() const
{
    return ipsNameLikeIsSet_;
}

void ListIpsRulesRequest::unsetipsNameLike()
{
    ipsNameLikeIsSet_ = false;
}

int32_t ListIpsRulesRequest::getIpsRulesTypeLike() const
{
    return ipsRulesTypeLike_;
}

void ListIpsRulesRequest::setIpsRulesTypeLike(int32_t value)
{
    ipsRulesTypeLike_ = value;
    ipsRulesTypeLikeIsSet_ = true;
}

bool ListIpsRulesRequest::ipsRulesTypeLikeIsSet() const
{
    return ipsRulesTypeLikeIsSet_;
}

void ListIpsRulesRequest::unsetipsRulesTypeLike()
{
    ipsRulesTypeLikeIsSet_ = false;
}

std::string ListIpsRulesRequest::getIpsStatus() const
{
    return ipsStatus_;
}

void ListIpsRulesRequest::setIpsStatus(const std::string& value)
{
    ipsStatus_ = value;
    ipsStatusIsSet_ = true;
}

bool ListIpsRulesRequest::ipsStatusIsSet() const
{
    return ipsStatusIsSet_;
}

void ListIpsRulesRequest::unsetipsStatus()
{
    ipsStatusIsSet_ = false;
}

bool ListIpsRulesRequest::isIsUpdatedIpsRuleQueried() const
{
    return isUpdatedIpsRuleQueried_;
}

void ListIpsRulesRequest::setIsUpdatedIpsRuleQueried(bool value)
{
    isUpdatedIpsRuleQueried_ = value;
    isUpdatedIpsRuleQueriedIsSet_ = true;
}

bool ListIpsRulesRequest::isUpdatedIpsRuleQueriedIsSet() const
{
    return isUpdatedIpsRuleQueriedIsSet_;
}

void ListIpsRulesRequest::unsetisUpdatedIpsRuleQueried()
{
    isUpdatedIpsRuleQueriedIsSet_ = false;
}

int32_t ListIpsRulesRequest::getLimit() const
{
    return limit_;
}

void ListIpsRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListIpsRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListIpsRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListIpsRulesRequest::getObjectId() const
{
    return objectId_;
}

void ListIpsRulesRequest::setObjectId(const std::string& value)
{
    objectId_ = value;
    objectIdIsSet_ = true;
}

bool ListIpsRulesRequest::objectIdIsSet() const
{
    return objectIdIsSet_;
}

void ListIpsRulesRequest::unsetobjectId()
{
    objectIdIsSet_ = false;
}

int32_t ListIpsRulesRequest::getOffset() const
{
    return offset_;
}

void ListIpsRulesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListIpsRulesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListIpsRulesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListIpsRulesRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListIpsRulesRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListIpsRulesRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListIpsRulesRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


