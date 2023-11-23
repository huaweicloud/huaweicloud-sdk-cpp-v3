

#include "huaweicloud/dds/v3/model/DeleteKillOpRuleListRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteKillOpRuleListRequestBody::DeleteKillOpRuleListRequestBody()
{
    idsIsSet_ = false;
}

DeleteKillOpRuleListRequestBody::~DeleteKillOpRuleListRequestBody() = default;

void DeleteKillOpRuleListRequestBody::validate()
{
}

web::json::value DeleteKillOpRuleListRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool DeleteKillOpRuleListRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& DeleteKillOpRuleListRequestBody::getIds()
{
    return ids_;
}

void DeleteKillOpRuleListRequestBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool DeleteKillOpRuleListRequestBody::idsIsSet() const
{
    return idsIsSet_;
}

void DeleteKillOpRuleListRequestBody::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


