

#include "huaweicloud/gaussdbforopengauss/v3/model/BatchDeleteInstanceTagRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




BatchDeleteInstanceTagRequestBody::BatchDeleteInstanceTagRequestBody()
{
    keysIsSet_ = false;
}

BatchDeleteInstanceTagRequestBody::~BatchDeleteInstanceTagRequestBody() = default;

void BatchDeleteInstanceTagRequestBody::validate()
{
}

web::json::value BatchDeleteInstanceTagRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keysIsSet_) {
        val[utility::conversions::to_string_t("keys")] = ModelBase::toJson(keys_);
    }

    return val;
}
bool BatchDeleteInstanceTagRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keys"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keys"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeys(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchDeleteInstanceTagRequestBody::getKeys()
{
    return keys_;
}

void BatchDeleteInstanceTagRequestBody::setKeys(const std::vector<std::string>& value)
{
    keys_ = value;
    keysIsSet_ = true;
}

bool BatchDeleteInstanceTagRequestBody::keysIsSet() const
{
    return keysIsSet_;
}

void BatchDeleteInstanceTagRequestBody::unsetkeys()
{
    keysIsSet_ = false;
}

}
}
}
}
}


