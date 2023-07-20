

#include "huaweicloud/dds/v3/model/MongoUpdateReplSetV3RequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




MongoUpdateReplSetV3RequestBody::MongoUpdateReplSetV3RequestBody()
{
    name_ = "";
    nameIsSet_ = false;
}

MongoUpdateReplSetV3RequestBody::~MongoUpdateReplSetV3RequestBody() = default;

void MongoUpdateReplSetV3RequestBody::validate()
{
}

web::json::value MongoUpdateReplSetV3RequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool MongoUpdateReplSetV3RequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}

std::string MongoUpdateReplSetV3RequestBody::getName() const
{
    return name_;
}

void MongoUpdateReplSetV3RequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MongoUpdateReplSetV3RequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void MongoUpdateReplSetV3RequestBody::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


