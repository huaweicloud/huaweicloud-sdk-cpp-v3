

#include "huaweicloud/modelarts/v1/model/RemoteConstraint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




RemoteConstraint::RemoteConstraint()
{
    dataType_ = "";
    dataTypeIsSet_ = false;
    attributesIsSet_ = false;
}

RemoteConstraint::~RemoteConstraint() = default;

void RemoteConstraint::validate()
{
}

web::json::value RemoteConstraint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dataTypeIsSet_) {
        val[utility::conversions::to_string_t("data_type")] = ModelBase::toJson(dataType_);
    }
    if(attributesIsSet_) {
        val[utility::conversions::to_string_t("attributes")] = ModelBase::toJson(attributes_);
    }

    return val;
}
bool RemoteConstraint::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("data_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("attributes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attributes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::map<std::string, std::string>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}


std::string RemoteConstraint::getDataType() const
{
    return dataType_;
}

void RemoteConstraint::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool RemoteConstraint::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void RemoteConstraint::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& RemoteConstraint::getAttributes()
{
    return attributes_;
}

void RemoteConstraint::setAttributes(const std::vector<std::map<std::string, std::string>>& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool RemoteConstraint::attributesIsSet() const
{
    return attributesIsSet_;
}

void RemoteConstraint::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


