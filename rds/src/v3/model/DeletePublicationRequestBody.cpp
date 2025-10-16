

#include "huaweicloud/rds/v3/model/DeletePublicationRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




DeletePublicationRequestBody::DeletePublicationRequestBody()
{
    publicationIdsIsSet_ = false;
}

DeletePublicationRequestBody::~DeletePublicationRequestBody() = default;

void DeletePublicationRequestBody::validate()
{
}

web::json::value DeletePublicationRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publicationIdsIsSet_) {
        val[utility::conversions::to_string_t("publication_ids")] = ModelBase::toJson(publicationIds_);
    }

    return val;
}
bool DeletePublicationRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publication_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publication_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicationIds(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& DeletePublicationRequestBody::getPublicationIds()
{
    return publicationIds_;
}

void DeletePublicationRequestBody::setPublicationIds(const std::vector<std::string>& value)
{
    publicationIds_ = value;
    publicationIdsIsSet_ = true;
}

bool DeletePublicationRequestBody::publicationIdsIsSet() const
{
    return publicationIdsIsSet_;
}

void DeletePublicationRequestBody::unsetpublicationIds()
{
    publicationIdsIsSet_ = false;
}

}
}
}
}
}


