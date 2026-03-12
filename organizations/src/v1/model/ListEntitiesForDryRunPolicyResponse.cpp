

#include "huaweicloud/organizations/v1/model/ListEntitiesForDryRunPolicyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListEntitiesForDryRunPolicyResponse::ListEntitiesForDryRunPolicyResponse()
{
    attachedEntitiesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListEntitiesForDryRunPolicyResponse::~ListEntitiesForDryRunPolicyResponse() = default;

void ListEntitiesForDryRunPolicyResponse::validate()
{
}

web::json::value ListEntitiesForDryRunPolicyResponse::toJson() const
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
bool ListEntitiesForDryRunPolicyResponse::fromJson(const web::json::value& val)
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


std::vector<EntityDto>& ListEntitiesForDryRunPolicyResponse::getAttachedEntities()
{
    return attachedEntities_;
}

void ListEntitiesForDryRunPolicyResponse::setAttachedEntities(const std::vector<EntityDto>& value)
{
    attachedEntities_ = value;
    attachedEntitiesIsSet_ = true;
}

bool ListEntitiesForDryRunPolicyResponse::attachedEntitiesIsSet() const
{
    return attachedEntitiesIsSet_;
}

void ListEntitiesForDryRunPolicyResponse::unsetattachedEntities()
{
    attachedEntitiesIsSet_ = false;
}

PageInfoDto ListEntitiesForDryRunPolicyResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListEntitiesForDryRunPolicyResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListEntitiesForDryRunPolicyResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListEntitiesForDryRunPolicyResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


