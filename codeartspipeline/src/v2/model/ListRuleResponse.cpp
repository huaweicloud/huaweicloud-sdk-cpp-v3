

#include "huaweicloud/codeartspipeline/v2/model/ListRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ListRuleResponse::ListRuleResponse()
{
    dataIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

ListRuleResponse::~ListRuleResponse() = default;

void ListRuleResponse::validate()
{
}

web::json::value ListRuleResponse::toJson() const
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
bool ListRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            std::vector<Rule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
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


std::vector<Rule>& ListRuleResponse::getData()
{
    return data_;
}

void ListRuleResponse::setData(const std::vector<Rule>& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListRuleResponse::dataIsSet() const
{
    return dataIsSet_;
}

void ListRuleResponse::unsetdata()
{
    dataIsSet_ = false;
}

int32_t ListRuleResponse::getTotal() const
{
    return total_;
}

void ListRuleResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ListRuleResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ListRuleResponse::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


