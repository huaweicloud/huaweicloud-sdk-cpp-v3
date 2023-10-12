

#include "huaweicloud/rds/v3/model/ListSlowlogStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowlogStatisticsRequest::ListSlowlogStatisticsRequest()
{
    xLanguage_ = "";
    xLanguageIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    curPage_ = 0;
    curPageIsSet_ = false;
    perPage_ = 0;
    perPageIsSet_ = false;
    startDate_ = "";
    startDateIsSet_ = false;
    endDate_ = "";
    endDateIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    sort_ = "";
    sortIsSet_ = false;
}

ListSlowlogStatisticsRequest::~ListSlowlogStatisticsRequest() = default;

void ListSlowlogStatisticsRequest::validate()
{
}

web::json::value ListSlowlogStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xLanguageIsSet_) {
        val[utility::conversions::to_string_t("X-Language")] = ModelBase::toJson(xLanguage_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(curPageIsSet_) {
        val[utility::conversions::to_string_t("cur_page")] = ModelBase::toJson(curPage_);
    }
    if(perPageIsSet_) {
        val[utility::conversions::to_string_t("per_page")] = ModelBase::toJson(perPage_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("start_date")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("end_date")] = ModelBase::toJson(endDate_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}
bool ListSlowlogStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cur_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("per_page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("per_page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPerPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    return ok;
}


std::string ListSlowlogStatisticsRequest::getXLanguage() const
{
    return xLanguage_;
}

void ListSlowlogStatisticsRequest::setXLanguage(const std::string& value)
{
    xLanguage_ = value;
    xLanguageIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::xLanguageIsSet() const
{
    return xLanguageIsSet_;
}

void ListSlowlogStatisticsRequest::unsetxLanguage()
{
    xLanguageIsSet_ = false;
}

std::string ListSlowlogStatisticsRequest::getInstanceId() const
{
    return instanceId_;
}

void ListSlowlogStatisticsRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ListSlowlogStatisticsRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

int32_t ListSlowlogStatisticsRequest::getCurPage() const
{
    return curPage_;
}

void ListSlowlogStatisticsRequest::setCurPage(int32_t value)
{
    curPage_ = value;
    curPageIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::curPageIsSet() const
{
    return curPageIsSet_;
}

void ListSlowlogStatisticsRequest::unsetcurPage()
{
    curPageIsSet_ = false;
}

int32_t ListSlowlogStatisticsRequest::getPerPage() const
{
    return perPage_;
}

void ListSlowlogStatisticsRequest::setPerPage(int32_t value)
{
    perPage_ = value;
    perPageIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::perPageIsSet() const
{
    return perPageIsSet_;
}

void ListSlowlogStatisticsRequest::unsetperPage()
{
    perPageIsSet_ = false;
}

std::string ListSlowlogStatisticsRequest::getStartDate() const
{
    return startDate_;
}

void ListSlowlogStatisticsRequest::setStartDate(const std::string& value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void ListSlowlogStatisticsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

std::string ListSlowlogStatisticsRequest::getEndDate() const
{
    return endDate_;
}

void ListSlowlogStatisticsRequest::setEndDate(const std::string& value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void ListSlowlogStatisticsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string ListSlowlogStatisticsRequest::getType() const
{
    return type_;
}

void ListSlowlogStatisticsRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ListSlowlogStatisticsRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ListSlowlogStatisticsRequest::getSort() const
{
    return sort_;
}

void ListSlowlogStatisticsRequest::setSort(const std::string& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListSlowlogStatisticsRequest::sortIsSet() const
{
    return sortIsSet_;
}

void ListSlowlogStatisticsRequest::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


