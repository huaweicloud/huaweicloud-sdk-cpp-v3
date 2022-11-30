

#include "huaweicloud/evs/v2/model/DeleteTagsOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




DeleteTagsOption::DeleteTagsOption()
{
    key_ = "";
    keyIsSet_ = false;
}

DeleteTagsOption::~DeleteTagsOption() = default;

void DeleteTagsOption::validate()
{
}

web::json::value DeleteTagsOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }

    return val;
}

bool DeleteTagsOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    return ok;
}


std::string DeleteTagsOption::getKey() const
{
    return key_;
}

void DeleteTagsOption::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteTagsOption::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteTagsOption::unsetkey()
{
    keyIsSet_ = false;
}

}
}
}
}
}


