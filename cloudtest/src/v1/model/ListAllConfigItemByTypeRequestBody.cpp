

#include "huaweicloud/cloudtest/v1/model/ListAllConfigItemByTypeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListAllConfigItemByTypeRequestBody::ListAllConfigItemByTypeRequestBody()
{
    configType_ = "";
    configTypeIsSet_ = false;
    typesIsSet_ = false;
}

ListAllConfigItemByTypeRequestBody::~ListAllConfigItemByTypeRequestBody() = default;

void ListAllConfigItemByTypeRequestBody::validate()
{
}

web::json::value ListAllConfigItemByTypeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(configTypeIsSet_) {
        val[utility::conversions::to_string_t("configType")] = ModelBase::toJson(configType_);
    }
    if(typesIsSet_) {
        val[utility::conversions::to_string_t("types")] = ModelBase::toJson(types_);
    }

    return val;
}
bool ListAllConfigItemByTypeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("configType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypes(refVal);
        }
    }
    return ok;
}


std::string ListAllConfigItemByTypeRequestBody::getConfigType() const
{
    return configType_;
}

void ListAllConfigItemByTypeRequestBody::setConfigType(const std::string& value)
{
    configType_ = value;
    configTypeIsSet_ = true;
}

bool ListAllConfigItemByTypeRequestBody::configTypeIsSet() const
{
    return configTypeIsSet_;
}

void ListAllConfigItemByTypeRequestBody::unsetconfigType()
{
    configTypeIsSet_ = false;
}

std::vector<std::string>& ListAllConfigItemByTypeRequestBody::getTypes()
{
    return types_;
}

void ListAllConfigItemByTypeRequestBody::setTypes(const std::vector<std::string>& value)
{
    types_ = value;
    typesIsSet_ = true;
}

bool ListAllConfigItemByTypeRequestBody::typesIsSet() const
{
    return typesIsSet_;
}

void ListAllConfigItemByTypeRequestBody::unsettypes()
{
    typesIsSet_ = false;
}

}
}
}
}
}


