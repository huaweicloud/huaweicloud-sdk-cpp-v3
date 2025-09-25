

#include "huaweicloud/codeartspipeline/v2/model/ShowPublisherResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPublisherResponse::ShowPublisherResponse()
{
    publisherDetailMapIsSet_ = false;
}

ShowPublisherResponse::~ShowPublisherResponse() = default;

void ShowPublisherResponse::validate()
{
}

web::json::value ShowPublisherResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(publisherDetailMapIsSet_) {
        val[utility::conversions::to_string_t("publisher_detail_map")] = ModelBase::toJson(publisherDetailMap_);
    }

    return val;
}
bool ShowPublisherResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("publisher_detail_map"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_detail_map"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, PublisherVO> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherDetailMap(refVal);
        }
    }
    return ok;
}


std::map<std::string, PublisherVO>& ShowPublisherResponse::getPublisherDetailMap()
{
    return publisherDetailMap_;
}

void ShowPublisherResponse::setPublisherDetailMap(const std::map<std::string, PublisherVO>& value)
{
    publisherDetailMap_ = value;
    publisherDetailMapIsSet_ = true;
}

bool ShowPublisherResponse::publisherDetailMapIsSet() const
{
    return publisherDetailMapIsSet_;
}

void ShowPublisherResponse::unsetpublisherDetailMap()
{
    publisherDetailMapIsSet_ = false;
}

}
}
}
}
}


