

#include "huaweicloud/dbss/v1/model/AuditScopeRequestNew.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




AuditScopeRequestNew::AuditScopeRequestNew()
{
    idsIsSet_ = false;
}

AuditScopeRequestNew::~AuditScopeRequestNew() = default;

void AuditScopeRequestNew::validate()
{
}

web::json::value AuditScopeRequestNew::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool AuditScopeRequestNew::fromJson(const web::json::value& val)
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


std::vector<std::string>& AuditScopeRequestNew::getIds()
{
    return ids_;
}

void AuditScopeRequestNew::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool AuditScopeRequestNew::idsIsSet() const
{
    return idsIsSet_;
}

void AuditScopeRequestNew::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


