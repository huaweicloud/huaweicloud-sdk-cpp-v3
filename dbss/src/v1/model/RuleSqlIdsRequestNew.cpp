

#include "huaweicloud/dbss/v1/model/RuleSqlIdsRequestNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleSqlIdsRequestNew::RuleSqlIdsRequestNew()
{
    idsIsSet_ = false;
}

RuleSqlIdsRequestNew::~RuleSqlIdsRequestNew() = default;

void RuleSqlIdsRequestNew::validate()
{
}

web::json::value RuleSqlIdsRequestNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool RuleSqlIdsRequestNew::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& RuleSqlIdsRequestNew::getIds()
{
    return ids_;
}

void RuleSqlIdsRequestNew::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool RuleSqlIdsRequestNew::idsIsSet() const
{
    return idsIsSet_;
}

void RuleSqlIdsRequestNew::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


