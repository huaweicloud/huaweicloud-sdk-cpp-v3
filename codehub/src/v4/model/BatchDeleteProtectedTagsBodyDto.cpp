

#include "huaweicloud/codehub/v4/model/BatchDeleteProtectedTagsBodyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




BatchDeleteProtectedTagsBodyDto::BatchDeleteProtectedTagsBodyDto()
{
    namesIsSet_ = false;
}

BatchDeleteProtectedTagsBodyDto::~BatchDeleteProtectedTagsBodyDto() = default;

void BatchDeleteProtectedTagsBodyDto::validate()
{
}

web::json::value BatchDeleteProtectedTagsBodyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(namesIsSet_) {
        val[utility::conversions::to_string_t("names")] = ModelBase::toJson(names_);
    }

    return val;
}
bool BatchDeleteProtectedTagsBodyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("names"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNames(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteProtectedTagsBodyDto::getNames()
{
    return names_;
}

void BatchDeleteProtectedTagsBodyDto::setNames(const std::vector<std::string>& value)
{
    names_ = value;
    namesIsSet_ = true;
}

bool BatchDeleteProtectedTagsBodyDto::namesIsSet() const
{
    return namesIsSet_;
}

void BatchDeleteProtectedTagsBodyDto::unsetnames()
{
    namesIsSet_ = false;
}

}
}
}
}
}


