

#include "huaweicloud/gaussdb/v3/model/AuditLogDownloadLinkRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AuditLogDownloadLinkRequestBody::AuditLogDownloadLinkRequestBody()
{
    idsIsSet_ = false;
}

AuditLogDownloadLinkRequestBody::~AuditLogDownloadLinkRequestBody() = default;

void AuditLogDownloadLinkRequestBody::validate()
{
}

web::json::value AuditLogDownloadLinkRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool AuditLogDownloadLinkRequestBody::fromJson(const web::json::value& val)
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


std::vector<std::string>& AuditLogDownloadLinkRequestBody::getIds()
{
    return ids_;
}

void AuditLogDownloadLinkRequestBody::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool AuditLogDownloadLinkRequestBody::idsIsSet() const
{
    return idsIsSet_;
}

void AuditLogDownloadLinkRequestBody::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


