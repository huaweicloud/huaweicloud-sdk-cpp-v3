

#include "huaweicloud/codeartspipeline/v2/model/ListProjectStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListProjectStrategyResponse::ListProjectStrategyResponse()
{
    dataIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListProjectStrategyResponse::~ListProjectStrategyResponse() = default;

void ListProjectStrategyResponse::validate()
{
}

web::json::value ListProjectStrategyResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool ListProjectStrategyResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleSet> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


std::vector<RuleSet>& ListProjectStrategyResponse::getData()
{
    return data_;
}

void ListProjectStrategyResponse::setData(const std::vector<RuleSet>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListProjectStrategyResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListProjectStrategyResponse::unsetdata()
{
    dataIsSet_ = false;
}

int64_t ListProjectStrategyResponse::getTotal() const
{
    return total_;
}

void ListProjectStrategyResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListProjectStrategyResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListProjectStrategyResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


