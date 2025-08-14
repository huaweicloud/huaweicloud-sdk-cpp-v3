

#include "huaweicloud/iotda/v5/model/ListResourcesByTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ListResourcesByTagsResponse::ListResourcesByTagsResponse()
{
    resourcesIsSet_ = false;
    pageIsSet_ = false;
}

ListResourcesByTagsResponse::~ListResourcesByTagsResponse() = default;

void ListResourcesByTagsResponse::validate()
{
}

web::json::value ListResourcesByTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourcesIsSet_) {
        val[utility::conversions::to_string_t("resources")] = ModelBase::toJson(resources_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }

    return val;
}
bool ListResourcesByTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resources"));
        if(!fieldValue.is_null())
        {
            std::vector<ResourceDTO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            Page refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    return ok;
}


std::vector<ResourceDTO>& ListResourcesByTagsResponse::getResources()
{
    return resources_;
}

void ListResourcesByTagsResponse::setResources(const std::vector<ResourceDTO>& value)
{
    resources_ = value;
    resourcesIsSet_ = true;
}

bool ListResourcesByTagsResponse::resourcesIsSet() const
{
    return resourcesIsSet_;
}

void ListResourcesByTagsResponse::unsetresources()
{
    resourcesIsSet_ = false;
}

Page ListResourcesByTagsResponse::getPage() const
{
    return page_;
}

void ListResourcesByTagsResponse::setPage(const Page& value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListResourcesByTagsResponse::pageIsSet() const
{
    return pageIsSet_;
}

void ListResourcesByTagsResponse::unsetpage()
{
    pageIsSet_ = false;
}

}
}
}
}
}


