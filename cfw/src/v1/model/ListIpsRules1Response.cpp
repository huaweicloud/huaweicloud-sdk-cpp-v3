

#include "huaweicloud/cfw/v1/model/ListIpsRules1Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ListIpsRules1Response::ListIpsRules1Response()
{
    dataIsSet_ = false;
}

ListIpsRules1Response::~ListIpsRules1Response() = default;

void ListIpsRules1Response::validate()
{
}

web::json::value ListIpsRules1Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataIsSet_) {
        val[utility::conversions::to_string_t("data")] = ModelBase::toJson(data_);
    }

    return val;
}
bool ListIpsRules1Response::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data"));
        if(!fieldValue.is_null())
        {
            IpsRuleListVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setData(refVal);
        }
    }
    return ok;
}


IpsRuleListVO ListIpsRules1Response::getData() const
{
    return data_;
}

void ListIpsRules1Response::setData(const IpsRuleListVO& value)
{
    data_ = value;
    dataIsSet_ = true;
}

bool ListIpsRules1Response::dataIsSet() const
{
    return dataIsSet_;
}

void ListIpsRules1Response::unsetdata()
{
    dataIsSet_ = false;
}

}
}
}
}
}


