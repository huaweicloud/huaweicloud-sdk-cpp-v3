

#include "huaweicloud/smn/v2/model/ResourceDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ResourceDetail::ResourceDetail()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    detailId_ = "";
    detailIdIsSet_ = false;
    topicUrn_ = "";
    topicUrnIsSet_ = false;
    displayName_ = "";
    displayNameIsSet_ = false;
}

ResourceDetail::~ResourceDetail() = default;

void ResourceDetail::validate()
{
}

web::json::value ResourceDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(detailIdIsSet_) {
        val[utility::conversions::to_string_t("detailId")] = ModelBase::toJson(detailId_);
    }
    if(topicUrnIsSet_) {
        val[utility::conversions::to_string_t("topic_urn")] = ModelBase::toJson(topicUrn_);
    }
    if(displayNameIsSet_) {
        val[utility::conversions::to_string_t("display_name")] = ModelBase::toJson(displayName_);
    }

    return val;
}

bool ResourceDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("detailId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detailId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("topic_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topic_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopicUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("display_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("display_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisplayName(refVal);
        }
    }
    return ok;
}

std::string ResourceDetail::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ResourceDetail::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ResourceDetail::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ResourceDetail::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ResourceDetail::getDetailId() const
{
    return detailId_;
}

void ResourceDetail::setDetailId(const std::string& value)
{
    detailId_ = value;
    detailIdIsSet_ = true;
}

bool ResourceDetail::detailIdIsSet() const
{
    return detailIdIsSet_;
}

void ResourceDetail::unsetdetailId()
{
    detailIdIsSet_ = false;
}

std::string ResourceDetail::getTopicUrn() const
{
    return topicUrn_;
}

void ResourceDetail::setTopicUrn(const std::string& value)
{
    topicUrn_ = value;
    topicUrnIsSet_ = true;
}

bool ResourceDetail::topicUrnIsSet() const
{
    return topicUrnIsSet_;
}

void ResourceDetail::unsettopicUrn()
{
    topicUrnIsSet_ = false;
}

std::string ResourceDetail::getDisplayName() const
{
    return displayName_;
}

void ResourceDetail::setDisplayName(const std::string& value)
{
    displayName_ = value;
    displayNameIsSet_ = true;
}

bool ResourceDetail::displayNameIsSet() const
{
    return displayNameIsSet_;
}

void ResourceDetail::unsetdisplayName()
{
    displayNameIsSet_ = false;
}

}
}
}
}
}


