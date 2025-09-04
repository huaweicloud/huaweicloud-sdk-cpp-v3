

#include "huaweicloud/codeartsbuild/v3/model/ListEndPointsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListEndPointsRequest::ListEndPointsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListEndPointsRequest::~ListEndPointsRequest() = default;

void ListEndPointsRequest::validate()
{
}

web::json::value ListEndPointsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListEndPointsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    return ok;
}


std::string ListEndPointsRequest::getProjectId() const
{
    return projectId_;
}

void ListEndPointsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListEndPointsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListEndPointsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

int32_t ListEndPointsRequest::getLimit() const
{
    return limit_;
}

void ListEndPointsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEndPointsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListEndPointsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListEndPointsRequest::getOffset() const
{
    return offset_;
}

void ListEndPointsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEndPointsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEndPointsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


