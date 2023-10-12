

#include "huaweicloud/cdn/v1/model/ResourceBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ResourceBody::ResourceBody()
{
    sourcesIsSet_ = false;
}

ResourceBody::~ResourceBody() = default;

void ResourceBody::validate()
{
}

web::json::value ResourceBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }

    return val;
}
bool ResourceBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<SourceWithPort> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    return ok;
}


std::vector<SourceWithPort>& ResourceBody::getSources()
{
    return sources_;
}

void ResourceBody::setSources(const std::vector<SourceWithPort>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ResourceBody::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ResourceBody::unsetsources()
{
    sourcesIsSet_ = false;
}

}
}
}
}
}


