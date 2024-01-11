

#include "huaweicloud/drs/v5/model/BatchAddTagReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchAddTagReq::BatchAddTagReq()
{
    tagsIsSet_ = false;
}

BatchAddTagReq::~BatchAddTagReq() = default;

void BatchAddTagReq::validate()
{
}

web::json::value BatchAddTagReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchAddTagReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::vector<BatchResourceTag>& BatchAddTagReq::getTags()
{
    return tags_;
}

void BatchAddTagReq::setTags(const std::vector<BatchResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchAddTagReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchAddTagReq::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


