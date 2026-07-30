

#include "huaweicloud/modelarts/v1/model/AlgorithmCreateInput.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmCreateInput::AlgorithmCreateInput()
{
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    remoteConstraintsIsSet_ = false;
}

AlgorithmCreateInput::~AlgorithmCreateInput() = default;

void AlgorithmCreateInput::validate()
{
}

web::json::value AlgorithmCreateInput::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(remoteConstraintsIsSet_) {
        val[utility::conversions::to_string_t("remote_constraints")] = ModelBase::toJson(remoteConstraints_);
    }

    return val;
}
bool AlgorithmCreateInput::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_constraints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_constraints"));
        if(!fieldValue.is_null())
        {
            std::vector<RemoteConstraint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteConstraints(refVal);
        }
    }
    return ok;
}


std::string AlgorithmCreateInput::getName() const
{
    return name_;
}

void AlgorithmCreateInput::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool AlgorithmCreateInput::nameIsSet() const
{
    return nameIsSet_;
}

void AlgorithmCreateInput::unsetname()
{
    nameIsSet_ = false;
}

std::string AlgorithmCreateInput::getDescription() const
{
    return description_;
}

void AlgorithmCreateInput::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AlgorithmCreateInput::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AlgorithmCreateInput::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<RemoteConstraint>& AlgorithmCreateInput::getRemoteConstraints()
{
    return remoteConstraints_;
}

void AlgorithmCreateInput::setRemoteConstraints(const std::vector<RemoteConstraint>& value)
{
    remoteConstraints_ = value;
    remoteConstraintsIsSet_ = true;
}

bool AlgorithmCreateInput::remoteConstraintsIsSet() const
{
    return remoteConstraintsIsSet_;
}

void AlgorithmCreateInput::unsetremoteConstraints()
{
    remoteConstraintsIsSet_ = false;
}

}
}
}
}
}


