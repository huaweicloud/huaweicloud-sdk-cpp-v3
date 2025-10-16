

#include "huaweicloud/rds/v3/model/ListPublicationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListPublicationsResponse::ListPublicationsResponse()
{
    publicationsIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListPublicationsResponse::~ListPublicationsResponse() = default;

void ListPublicationsResponse::validate()
{
}

web::json::value ListPublicationsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationsIsSet_) {
        val[utility::conversions::to_string_t("publications")] = ModelBase::toJson(publications_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListPublicationsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publications"));
        if(!fieldValue.is_null())
        {
            std::vector<QueryPublicationInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublications(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<QueryPublicationInfo>& ListPublicationsResponse::getPublications()
{
    return publications_;
}

void ListPublicationsResponse::setPublications(const std::vector<QueryPublicationInfo>& value)
{
    publications_ = value;
    publicationsIsSet_ = true;
}

bool ListPublicationsResponse::publicationsIsSet() const
{
    return publicationsIsSet_;
}

void ListPublicationsResponse::unsetpublications()
{
    publicationsIsSet_ = false;
}

int32_t ListPublicationsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPublicationsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPublicationsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPublicationsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


