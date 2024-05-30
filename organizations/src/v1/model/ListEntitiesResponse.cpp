

#include "huaweicloud/organizations/v1/model/ListEntitiesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {




ListEntitiesResponse::ListEntitiesResponse()
{
    entitiesIsSet_ = false;
    pageInfoIsSet_ = false;
}

ListEntitiesResponse::~ListEntitiesResponse() = default;

void ListEntitiesResponse::validate()
{
}

web::json::value ListEntitiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(entitiesIsSet_) {
        val[utility::conversions::to_string_t("entities")] = ModelBase::toJson(entities_);
    }
    if(pageInfoIsSet_) {
        val[utility::conversions::to_string_t("page_info")] = ModelBase::toJson(pageInfo_);
    }

    return val;
}
bool ListEntitiesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("entities"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entities"));
        if(!fieldValue.is_null())
        {
            std::vector<EntityDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntities(refVal);
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


std::vector<EntityDto>& ListEntitiesResponse::getEntities()
{
    return entities_;
}

void ListEntitiesResponse::setEntities(const std::vector<EntityDto>& value)
{
    entities_ = value;
    entitiesIsSet_ = true;
}

bool ListEntitiesResponse::entitiesIsSet() const
{
    return entitiesIsSet_;
}

void ListEntitiesResponse::unsetentities()
{
    entitiesIsSet_ = false;
}

PageInfoDto ListEntitiesResponse::getPageInfo() const
{
    return pageInfo_;
}

void ListEntitiesResponse::setPageInfo(const PageInfoDto& value)
{
    pageInfo_ = value;
    pageInfoIsSet_ = true;
}

bool ListEntitiesResponse::pageInfoIsSet() const
{
    return pageInfoIsSet_;
}

void ListEntitiesResponse::unsetpageInfo()
{
    pageInfoIsSet_ = false;
}

}
}
}
}
}


