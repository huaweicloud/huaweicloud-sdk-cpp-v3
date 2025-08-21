

#include "huaweicloud/cfw/v1/model/ListReportProfilesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListReportProfilesRequest::ListReportProfilesRequest()
{
    category_ = "";
    categoryIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
}

ListReportProfilesRequest::~ListReportProfilesRequest() = default;

void ListReportProfilesRequest::validate()
{
}

web::json::value ListReportProfilesRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }

    return val;
}
bool ListReportProfilesRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
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


std::string ListReportProfilesRequest::getCategory() const
{
    return category_;
}

void ListReportProfilesRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ListReportProfilesRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void ListReportProfilesRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ListReportProfilesRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ListReportProfilesRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ListReportProfilesRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ListReportProfilesRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

int32_t ListReportProfilesRequest::getLimit() const
{
    return limit_;
}

void ListReportProfilesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListReportProfilesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListReportProfilesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListReportProfilesRequest::getOffset() const
{
    return offset_;
}

void ListReportProfilesRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListReportProfilesRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListReportProfilesRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

}
}
}
}
}


