

#include "huaweicloud/projectman/v4/model/ListProjectBugStaticsV4Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ListProjectBugStaticsV4Response::ListProjectBugStaticsV4Response()
{
    bugStatisticsIsSet_ = false;
}

ListProjectBugStaticsV4Response::~ListProjectBugStaticsV4Response() = default;

void ListProjectBugStaticsV4Response::validate()
{
}

web::json::value ListProjectBugStaticsV4Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bugStatisticsIsSet_) {
        val[utility::conversions::to_string_t("bug_statistics")] = ModelBase::toJson(bugStatistics_);
    }

    return val;
}
bool ListProjectBugStaticsV4Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bug_statistics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bug_statistics"));
        if(!fieldValue.is_null())
        {
            std::vector<BugStatisticResponseV4> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBugStatistics(refVal);
        }
    }
    return ok;
}


std::vector<BugStatisticResponseV4>& ListProjectBugStaticsV4Response::getBugStatistics()
{
    return bugStatistics_;
}

void ListProjectBugStaticsV4Response::setBugStatistics(const std::vector<BugStatisticResponseV4>& value)
{
    bugStatistics_ = value;
    bugStatisticsIsSet_ = true;
}

bool ListProjectBugStaticsV4Response::bugStatisticsIsSet() const
{
    return bugStatisticsIsSet_;
}

void ListProjectBugStaticsV4Response::unsetbugStatistics()
{
    bugStatisticsIsSet_ = false;
}

}
}
}
}
}


