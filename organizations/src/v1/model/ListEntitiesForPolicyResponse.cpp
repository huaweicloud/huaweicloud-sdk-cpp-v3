

#include "huaweicloud/organizations/v1/model/ListEntitiesForPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListEntitiesForPolicyResponse::ListEntitiesForPolicyResponse()
{
    attachedEntitiesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListEntitiesForPolicyResponse::~ListEntitiesForPolicyResponse() = default;

void ListEntitiesForPolicyResponse::validate()
{
}

web::json::value ListEntitiesForPolicyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attachedEntitiesIsSet_) {
        val[utility::conversions::to_string_t("attached_entities")] = ModelBase::toJson(attachedEntities_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListEntitiesForPolicyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attached_entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attached_entities"));
        if(!fieldValue.is_null())
        {
            std::vector<EntityDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttachedEntities(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_info"));
        if(!fieldValue.is_null())
        {
            PageInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageInfo(refVal);
        }
    }
    return ok;
}


std::vector<EntityDto>& ListEntitiesForPolicyResponse::getAttachedEntities()
{
    return attachedEntities_;
}

void ListEntitiesForPolicyResponse::setAttachedEntities(const std::vector<EntityDto>& value)
{
    attachedEntities_ = value;
    attachedEntitiesIsSet_ = true;
}

bool ListEntitiesForPolicyResponse::attachedEntitiesIsSet() const
{
    return attachedEntitiesIsSet_;
}

void ListEntitiesForPolicyResponse::unsetattachedEntities()
{
    attachedEntitiesIsSet_ = false;
}

PageInfoDto ListEntitiesForPolicyResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListEntitiesForPolicyResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListEntitiesForPolicyResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListEntitiesForPolicyResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


