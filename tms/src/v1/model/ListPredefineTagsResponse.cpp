

#include "huaweicloud/tms/v1/model/ListPredefineTagsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




ListPredefineTagsResponse::ListPredefineTagsResponse()
{
    marker_ = "";
    markerIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
    tagsIsSet_ = false;
}

ListPredefineTagsResponse::~ListPredefineTagsResponse() = default;

void ListPredefineTagsResponse::validate()
{
}

web::json::value ListPredefineTagsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool ListPredefineTagsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<PredefineTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string ListPredefineTagsResponse::getMarker() const
{
    return marker_;
}

void ListPredefineTagsResponse::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool ListPredefineTagsResponse::markerIsSet() const
{
    return markerIsSet_;
}

void ListPredefineTagsResponse::unsetmarker()
{
    markerIsSet_ = false;
}

int32_t ListPredefineTagsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListPredefineTagsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListPredefineTagsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListPredefineTagsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<PredefineTag>& ListPredefineTagsResponse::getTags()
{
    return tags_;
}

void ListPredefineTagsResponse::setTags(const std::vector<PredefineTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ListPredefineTagsResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ListPredefineTagsResponse::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


