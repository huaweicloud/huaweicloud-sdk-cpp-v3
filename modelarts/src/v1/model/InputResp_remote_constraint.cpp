

#include "huaweicloud/modelarts/v1/model/InputResp_remote_constraint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




InputResp_remote_constraint::InputResp_remote_constraint()
{
    dataType_ = "";
    dataTypeIsSet_ = false;
    attributes_ = "";
    attributesIsSet_ = false;
}

InputResp_remote_constraint::~InputResp_remote_constraint() = default;

void InputResp_remote_constraint::validate()
{
}

web::json::value InputResp_remote_constraint::toJson() const
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
bool InputResp_remote_constraint::fromJson(const web::json::value& val)
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttributes(refVal);
        }
    }
    return ok;
}


std::string InputResp_remote_constraint::getDataType() const
{
    return dataType_;
}

void InputResp_remote_constraint::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool InputResp_remote_constraint::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void InputResp_remote_constraint::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::string InputResp_remote_constraint::getAttributes() const
{
    return attributes_;
}

void InputResp_remote_constraint::setAttributes(const std::string& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool InputResp_remote_constraint::attributesIsSet() const
{
    return attributesIsSet_;
}

void InputResp_remote_constraint::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


