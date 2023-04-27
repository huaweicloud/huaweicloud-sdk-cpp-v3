

#include "huaweicloud/lts/v2/model/ListQueryAllSearchCriteriasRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListQueryAllSearchCriteriasRequest::ListQueryAllSearchCriteriasRequest()
{
    groupId_ = "";
    groupIdIsSet_ = false;
    contentType_ = "";
    contentTypeIsSet_ = false;
}

ListQueryAllSearchCriteriasRequest::~ListQueryAllSearchCriteriasRequest() = default;

void ListQueryAllSearchCriteriasRequest::validate()
{
}

web::json::value ListQueryAllSearchCriteriasRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(contentTypeIsSet_) {
        val[utility::conversions::to_string_t("Content-Type")] = ModelBase::toJson(contentType_);
    }

    return val;
}

bool ListQueryAllSearchCriteriasRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Content-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Content-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContentType(refVal);
        }
    }
    return ok;
}


std::string ListQueryAllSearchCriteriasRequest::getGroupId() const
{
    return groupId_;
}

void ListQueryAllSearchCriteriasRequest::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ListQueryAllSearchCriteriasRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ListQueryAllSearchCriteriasRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ListQueryAllSearchCriteriasRequest::getContentType() const
{
    return contentType_;
}

void ListQueryAllSearchCriteriasRequest::setContentType(const std::string& value)
{
    contentType_ = value;
    contentTypeIsSet_ = true;
}

bool ListQueryAllSearchCriteriasRequest::contentTypeIsSet() const
{
    return contentTypeIsSet_;
}

void ListQueryAllSearchCriteriasRequest::unsetcontentType()
{
    contentTypeIsSet_ = false;
}

}
}
}
}
}


