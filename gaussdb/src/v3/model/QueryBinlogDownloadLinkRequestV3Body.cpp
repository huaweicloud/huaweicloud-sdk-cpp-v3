

#include "huaweicloud/gaussdb/v3/model/QueryBinlogDownloadLinkRequestV3Body.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




QueryBinlogDownloadLinkRequestV3Body::QueryBinlogDownloadLinkRequestV3Body()
{
    idsIsSet_ = false;
}

QueryBinlogDownloadLinkRequestV3Body::~QueryBinlogDownloadLinkRequestV3Body() = default;

void QueryBinlogDownloadLinkRequestV3Body::validate()
{
}

web::json::value QueryBinlogDownloadLinkRequestV3Body::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idsIsSet_) {
        val[utility::conversions::to_string_t("ids")] = ModelBase::toJson(ids_);
    }

    return val;
}
bool QueryBinlogDownloadLinkRequestV3Body::fromJson(const web::json::value& val)
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


std::vector<std::string>& QueryBinlogDownloadLinkRequestV3Body::getIds()
{
    return ids_;
}

void QueryBinlogDownloadLinkRequestV3Body::setIds(const std::vector<std::string>& value)
{
    ids_ = value;
    idsIsSet_ = true;
}

bool QueryBinlogDownloadLinkRequestV3Body::idsIsSet() const
{
    return idsIsSet_;
}

void QueryBinlogDownloadLinkRequestV3Body::unsetids()
{
    idsIsSet_ = false;
}

}
}
}
}
}


