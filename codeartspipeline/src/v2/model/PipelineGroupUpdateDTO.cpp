

#include "huaweicloud/codeartspipeline/v2/model/PipelineGroupUpdateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PipelineGroupUpdateDTO::PipelineGroupUpdateDTO()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

PipelineGroupUpdateDTO::~PipelineGroupUpdateDTO() = default;

void PipelineGroupUpdateDTO::validate()
{
}

web::json::value PipelineGroupUpdateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool PipelineGroupUpdateDTO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string PipelineGroupUpdateDTO::getName() const
{
    return name_;
}

void PipelineGroupUpdateDTO::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PipelineGroupUpdateDTO::nameIsSet() const
{
    return nameIsSet_;
}

void PipelineGroupUpdateDTO::unsetname()
{
    nameIsSet_ = false;
}

std::string PipelineGroupUpdateDTO::getId() const
{
    return id_;
}

void PipelineGroupUpdateDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PipelineGroupUpdateDTO::idIsSet() const
{
    return idIsSet_;
}

void PipelineGroupUpdateDTO::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


