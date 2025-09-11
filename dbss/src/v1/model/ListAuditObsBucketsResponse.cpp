

#include "huaweicloud/dbss/v1/model/ListAuditObsBucketsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




ListAuditObsBucketsResponse::ListAuditObsBucketsResponse()
{
    obsListIsSet_ = false;
}

ListAuditObsBucketsResponse::~ListAuditObsBucketsResponse() = default;

void ListAuditObsBucketsResponse::validate()
{
}

web::json::value ListAuditObsBucketsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsListIsSet_) {
        val[utility::conversions::to_string_t("obs_list")] = ModelBase::toJson(obsList_);
    }

    return val;
}
bool ListAuditObsBucketsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ObsBucketObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsList(refVal);
        }
    }
    return ok;
}


std::vector<ObsBucketObject>& ListAuditObsBucketsResponse::getObsList()
{
    return obsList_;
}

void ListAuditObsBucketsResponse::setObsList(const std::vector<ObsBucketObject>& value)
{
    obsList_ = value;
    obsListIsSet_ = true;
}

bool ListAuditObsBucketsResponse::obsListIsSet() const
{
    return obsListIsSet_;
}

void ListAuditObsBucketsResponse::unsetobsList()
{
    obsListIsSet_ = false;
}

}
}
}
}
}


