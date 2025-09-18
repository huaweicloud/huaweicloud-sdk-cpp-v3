

#include "huaweicloud/projectman/v4/model/ListSpecIssueStayTimesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListSpecIssueStayTimesResponse::ListSpecIssueStayTimesResponse()
{
    failsIsSet_ = false;
    dataIsSet_ = false;
    totalStayTime_ = 0L;
    totalStayTimeIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListSpecIssueStayTimesResponse::~ListSpecIssueStayTimesResponse() = default;

void ListSpecIssueStayTimesResponse::validate()
{
}

web::json::value ListSpecIssueStayTimesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(failsIsSet_) {
        val[utility::conversions::to_string_t("fails")] = ModelBase::toJson(fails_);
    }
    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(totalStayTimeIsSet_) {
        val[utility::conversions::to_string_t("total_stay_time")] = ModelBase::toJson(totalStayTime_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListSpecIssueStayTimesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fails"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fails"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<ListSpecIssueStayTimesResponseBody_data> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_stay_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_stay_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalStayTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& ListSpecIssueStayTimesResponse::getFails()
{
    return fails_;
}

void ListSpecIssueStayTimesResponse::setFails(const std::vector<std::string>& value)
{
    fails_ = value;
    failsIsSet_ = true;
}

bool ListSpecIssueStayTimesResponse::failsIsSet() const
{
    return failsIsSet_;
}

void ListSpecIssueStayTimesResponse::unsetfails()
{
    failsIsSet_ = false;
}

std::vector<ListSpecIssueStayTimesResponseBody_data>& ListSpecIssueStayTimesResponse::getData()
{
    return data_;
}

void ListSpecIssueStayTimesResponse::setData(const std::vector<ListSpecIssueStayTimesResponseBody_data>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListSpecIssueStayTimesResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListSpecIssueStayTimesResponse::unsetdata()
{
    dataIsSet_ = false;
}

int64_t ListSpecIssueStayTimesResponse::getTotalStayTime() const
{
    return totalStayTime_;
}

void ListSpecIssueStayTimesResponse::setTotalStayTime(int64_t value)
{
    totalStayTime_ = value;
    totalStayTimeIsSet_ = true;
}

bool ListSpecIssueStayTimesResponse::totalStayTimeIsSet() const
{
    return totalStayTimeIsSet_;
}

void ListSpecIssueStayTimesResponse::unsettotalStayTime()
{
    totalStayTimeIsSet_ = false;
}

int32_t ListSpecIssueStayTimesResponse::getTotal() const
{
    return total_;
}

void ListSpecIssueStayTimesResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListSpecIssueStayTimesResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListSpecIssueStayTimesResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


