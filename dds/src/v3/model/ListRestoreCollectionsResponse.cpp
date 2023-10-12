

#include "huaweicloud/dds/v3/model/ListRestoreCollectionsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListRestoreCollectionsResponse::ListRestoreCollectionsResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    collectionsIsSet_ = false;
}

ListRestoreCollectionsResponse::~ListRestoreCollectionsResponse() = default;

void ListRestoreCollectionsResponse::validate()
{
}

web::json::value ListRestoreCollectionsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(collectionsIsSet_) {
        val[utility::conversions::to_string_t("collections")] = ModelBase::toJson(collections_);
    }

    return val;
}
bool ListRestoreCollectionsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("collections"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("collections"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCollections(refVal);
        }
    }
    return ok;
}


int32_t ListRestoreCollectionsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRestoreCollectionsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRestoreCollectionsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRestoreCollectionsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<std::string>& ListRestoreCollectionsResponse::getCollections()
{
    return collections_;
}

void ListRestoreCollectionsResponse::setCollections(const std::vector<std::string>& value)
{
    collections_ = value;
    collectionsIsSet_ = true;
}

bool ListRestoreCollectionsResponse::collectionsIsSet() const
{
    return collectionsIsSet_;
}

void ListRestoreCollectionsResponse::unsetcollections()
{
    collectionsIsSet_ = false;
}

}
}
}
}
}


