

#include "huaweicloud/rds/v3/model/ShowTopObjectsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShowTopObjectsResponse::ShowTopObjectsResponse()
{
    curTime_ = 0L;
    curTimeIsSet_ = false;
    topObjectListIsSet_ = false;
    topObjectOverviewListIsSet_ = false;
}

ShowTopObjectsResponse::~ShowTopObjectsResponse() = default;

void ShowTopObjectsResponse::validate()
{
}

web::json::value ShowTopObjectsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(curTimeIsSet_) {
        val[utility::conversions::to_string_t("cur_time")] = ModelBase::toJson(curTime_);
    }
    if(topObjectListIsSet_) {
        val[utility::conversions::to_string_t("top_object_list")] = ModelBase::toJson(topObjectList_);
    }
    if(topObjectOverviewListIsSet_) {
        val[utility::conversions::to_string_t("top_object_overview_list")] = ModelBase::toJson(topObjectOverviewList_);
    }

    return val;
}
bool ShowTopObjectsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cur_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cur_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_object_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_object_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TopObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopObjectList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_object_overview_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_object_overview_list"));
        if(!fieldValue.is_null())
        {
            std::vector<TopObjectOverview> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopObjectOverviewList(refVal);
        }
    }
    return ok;
}


int64_t ShowTopObjectsResponse::getCurTime() const
{
    return curTime_;
}

void ShowTopObjectsResponse::setCurTime(int64_t value)
{
    curTime_ = value;
    curTimeIsSet_ = true;
}

bool ShowTopObjectsResponse::curTimeIsSet() const
{
    return curTimeIsSet_;
}

void ShowTopObjectsResponse::unsetcurTime()
{
    curTimeIsSet_ = false;
}

std::vector<TopObject>& ShowTopObjectsResponse::getTopObjectList()
{
    return topObjectList_;
}

void ShowTopObjectsResponse::setTopObjectList(const std::vector<TopObject>& value)
{
    topObjectList_ = value;
    topObjectListIsSet_ = true;
}

bool ShowTopObjectsResponse::topObjectListIsSet() const
{
    return topObjectListIsSet_;
}

void ShowTopObjectsResponse::unsettopObjectList()
{
    topObjectListIsSet_ = false;
}

std::vector<TopObjectOverview>& ShowTopObjectsResponse::getTopObjectOverviewList()
{
    return topObjectOverviewList_;
}

void ShowTopObjectsResponse::setTopObjectOverviewList(const std::vector<TopObjectOverview>& value)
{
    topObjectOverviewList_ = value;
    topObjectOverviewListIsSet_ = true;
}

bool ShowTopObjectsResponse::topObjectOverviewListIsSet() const
{
    return topObjectOverviewListIsSet_;
}

void ShowTopObjectsResponse::unsettopObjectOverviewList()
{
    topObjectOverviewListIsSet_ = false;
}

}
}
}
}
}


