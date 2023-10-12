

#include "huaweicloud/rds/v3/model/GenerateAuditlogDownloadLinkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GenerateAuditlogDownloadLinkRequest::GenerateAuditlogDownloadLinkRequest()
{
    idsIsSet_ = false;
}

GenerateAuditlogDownloadLinkRequest::~GenerateAuditlogDownloadLinkRequest() = default;

void GenerateAuditlogDownloadLinkRequest::validate()
{
}

web::json::value GenerateAuditlogDownloadLinkRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool GenerateAuditlogDownloadLinkRequest::fromJson(const web::json::value& val)
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


std::vector<std::string>& GenerateAuditlogDownloadLinkRequest::getIds()
{
    return ids_;
}

void GenerateAuditlogDownloadLinkRequest::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool GenerateAuditlogDownloadLinkRequest::idsIsSet() const
{
    return idsIsSet_;
}

void GenerateAuditlogDownloadLinkRequest::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


