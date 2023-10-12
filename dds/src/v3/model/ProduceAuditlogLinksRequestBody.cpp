

#include "huaweicloud/dds/v3/model/ProduceAuditlogLinksRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ProduceAuditlogLinksRequestBody::ProduceAuditlogLinksRequestBody()
{
    idsIsSet_ = false;
}

ProduceAuditlogLinksRequestBody::~ProduceAuditlogLinksRequestBody() = default;

void ProduceAuditlogLinksRequestBody::validate()
{
}

web::json::value ProduceAuditlogLinksRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool ProduceAuditlogLinksRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& ProduceAuditlogLinksRequestBody::getIds()
{
    return ids_;
}

void ProduceAuditlogLinksRequestBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool ProduceAuditlogLinksRequestBody::idsIsSet() const
{
    return idsIsSet_;
}

void ProduceAuditlogLinksRequestBody::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


