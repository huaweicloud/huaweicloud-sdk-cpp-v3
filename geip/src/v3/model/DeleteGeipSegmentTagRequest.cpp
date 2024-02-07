

#include "huaweicloud/geip/v3/model/DeleteGeipSegmentTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {




DeleteGeipSegmentTagRequest::DeleteGeipSegmentTagRequest()
{
    resourceId_ = "";
    resourceIdIsSet_ = false;
    tagKey_ = "";
    tagKeyIsSet_ = false;
}

DeleteGeipSegmentTagRequest::~DeleteGeipSegmentTagRequest() = default;

void DeleteGeipSegmentTagRequest::validate()
{
}

web::json::value DeleteGeipSegmentTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(tagKeyIsSet_) {
        val[utility::conversions::to_string_t("tag_key")] = ModelBase::toJson(tagKey_);
    }

    return val;
}
bool DeleteGeipSegmentTagRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagKey(refVal);
        }
    }
    return ok;
}


std::string DeleteGeipSegmentTagRequest::getResourceId() const
{
    return resourceId_;
}

void DeleteGeipSegmentTagRequest::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool DeleteGeipSegmentTagRequest::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void DeleteGeipSegmentTagRequest::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::string DeleteGeipSegmentTagRequest::getTagKey() const
{
    return tagKey_;
}

void DeleteGeipSegmentTagRequest::setTagKey(const std::string& value)
{
    tagKey_ = value;
    tagKeyIsSet_ = true;
}

bool DeleteGeipSegmentTagRequest::tagKeyIsSet() const
{
    return tagKeyIsSet_;
}

void DeleteGeipSegmentTagRequest::unsettagKey()
{
    tagKeyIsSet_ = false;
}

}
}
}
}
}


