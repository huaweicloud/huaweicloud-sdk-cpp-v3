

#include "huaweicloud/rds/v3/model/BatchModifyPublicationResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




BatchModifyPublicationResponse::BatchModifyPublicationResponse()
{
    publicationsIsSet_ = false;
}

BatchModifyPublicationResponse::~BatchModifyPublicationResponse() = default;

void BatchModifyPublicationResponse::validate()
{
}

web::json::value BatchModifyPublicationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationsIsSet_) {
        val[utility::conversions::to_string_t("publications")] = ModelBase::toJson(publications_);
    }

    return val;
}
bool BatchModifyPublicationResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publications"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publications"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchOperateResponseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublications(refVal);
        }
    }
    return ok;
}


std::vector<BatchOperateResponseInfo>& BatchModifyPublicationResponse::getPublications()
{
    return publications_;
}

void BatchModifyPublicationResponse::setPublications(const std::vector<BatchOperateResponseInfo>& value)
{
    publications_ = value;
    publicationsIsSet_ = true;
}

bool BatchModifyPublicationResponse::publicationsIsSet() const
{
    return publicationsIsSet_;
}

void BatchModifyPublicationResponse::unsetpublications()
{
    publicationsIsSet_ = false;
}

}
}
}
}
}


