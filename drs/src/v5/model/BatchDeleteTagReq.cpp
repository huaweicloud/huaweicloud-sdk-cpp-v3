

#include "huaweicloud/drs/v5/model/BatchDeleteTagReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchDeleteTagReq::BatchDeleteTagReq()
{
    tagsIsSet_ = false;
}

BatchDeleteTagReq::~BatchDeleteTagReq() = default;

void BatchDeleteTagReq::validate()
{
}

web::json::value BatchDeleteTagReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool BatchDeleteTagReq::fromJson(const web::json::value& val)
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


std::vector<BatchResourceTag>& BatchDeleteTagReq::getTags()
{
    return tags_;
}

void BatchDeleteTagReq::setTags(const std::vector<BatchResourceTag>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool BatchDeleteTagReq::tagsIsSet() const
{
    return tagsIsSet_;
}

void BatchDeleteTagReq::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


