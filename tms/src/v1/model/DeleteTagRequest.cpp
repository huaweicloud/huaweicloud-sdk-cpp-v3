

#include "huaweicloud/tms/v1/model/DeleteTagRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {




DeleteTagRequest::DeleteTagRequest()
{
    key_ = "";
    keyIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

DeleteTagRequest::~DeleteTagRequest() = default;

void DeleteTagRequest::validate()
{
}

web::json::value DeleteTagRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool DeleteTagRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string DeleteTagRequest::getKey() const
{
    return key_;
}

void DeleteTagRequest::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool DeleteTagRequest::keyIsSet() const
{
    return keyIsSet_;
}

void DeleteTagRequest::unsetkey()
{
    keyIsSet_ = false;
}

std::string DeleteTagRequest::getValue() const
{
    return value_;
}

void DeleteTagRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool DeleteTagRequest::valueIsSet() const
{
    return valueIsSet_;
}

void DeleteTagRequest::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


