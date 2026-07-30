

#include "huaweicloud/modelarts/v1/model/AlgorithmResponse_job_config_remote_constraints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AlgorithmResponse_job_config_remote_constraints::AlgorithmResponse_job_config_remote_constraints()
{
    dataType_ = "";
    dataTypeIsSet_ = false;
    attributesIsSet_ = false;
}

AlgorithmResponse_job_config_remote_constraints::~AlgorithmResponse_job_config_remote_constraints() = default;

void AlgorithmResponse_job_config_remote_constraints::validate()
{
}

web::json::value AlgorithmResponse_job_config_remote_constraints::toJson() const
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
bool AlgorithmResponse_job_config_remote_constraints::fromJson(const web::json::value& val)
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


std::string AlgorithmResponse_job_config_remote_constraints::getDataType() const
{
    return dataType_;
}

void AlgorithmResponse_job_config_remote_constraints::setDataType(const std::string& value)
{
    dataType_ = value;
    dataTypeIsSet_ = true;
}

bool AlgorithmResponse_job_config_remote_constraints::dataTypeIsSet() const
{
    return dataTypeIsSet_;
}

void AlgorithmResponse_job_config_remote_constraints::unsetdataType()
{
    dataTypeIsSet_ = false;
}

std::vector<std::map<std::string, std::string>>& AlgorithmResponse_job_config_remote_constraints::getAttributes()
{
    return attributes_;
}

void AlgorithmResponse_job_config_remote_constraints::setAttributes(const std::vector<std::map<std::string, std::string>>& value)
{
    attributes_ = value;
    attributesIsSet_ = true;
}

bool AlgorithmResponse_job_config_remote_constraints::attributesIsSet() const
{
    return attributesIsSet_;
}

void AlgorithmResponse_job_config_remote_constraints::unsetattributes()
{
    attributesIsSet_ = false;
}

}
}
}
}
}


