

#include "huaweicloud/codeartsrepo/v3/model/LogsTreeList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




LogsTreeList::LogsTreeList()
{
    treesIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

LogsTreeList::~LogsTreeList() = default;

void LogsTreeList::validate()
{
}

web::json::value LogsTreeList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(treesIsSet_) {
        val[utility::conversions::to_string_t("trees")] = ModelBase::toJson(trees_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool LogsTreeList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("trees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trees"));
        if(!fieldValue.is_null())
        {
            std::vector<LogsTree> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrees(refVal);
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


std::vector<LogsTree>& LogsTreeList::getTrees()
{
    return trees_;
}

void LogsTreeList::setTrees(const std::vector<LogsTree>& value)
{
    trees_ = value;
    treesIsSet_ = true;
}

bool LogsTreeList::treesIsSet() const
{
    return treesIsSet_;
}

void LogsTreeList::unsettrees()
{
    treesIsSet_ = false;
}

int32_t LogsTreeList::getTotal() const
{
    return total_;
}

void LogsTreeList::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool LogsTreeList::totalIsSet() const
{
    return totalIsSet_;
}

void LogsTreeList::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


