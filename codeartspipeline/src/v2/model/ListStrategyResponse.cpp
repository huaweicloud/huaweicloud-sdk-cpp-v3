

#include "huaweicloud/codeartspipeline/v2/model/ListStrategyResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListStrategyResponse::ListStrategyResponse()
{
    dataIsSet_ = false;
    total_ = 0L;
    totalIsSet_ = false;
}

ListStrategyResponse::~ListStrategyResponse() = default;

void ListStrategyResponse::validate()
{
}

web::json::value ListStrategyResponse::toJson() const
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
bool ListStrategyResponse::fromJson(const web::json::value& val)
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


std::vector<RuleSet>& ListStrategyResponse::getData()
{
    return data_;
}

void ListStrategyResponse::setData(const std::vector<RuleSet>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListStrategyResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListStrategyResponse::unsetdata()
{
    dataIsSet_ = false;
}

int64_t ListStrategyResponse::getTotal() const
{
    return total_;
}

void ListStrategyResponse::setTotal(int64_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListStrategyResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListStrategyResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


