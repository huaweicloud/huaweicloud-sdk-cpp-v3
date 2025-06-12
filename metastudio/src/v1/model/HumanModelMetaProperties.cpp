

#include "huaweicloud/metastudio/v1/model/HumanModelMetaProperties.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HumanModelMetaProperties::HumanModelMetaProperties()
{
    wholeModelBaseFileId_ = "";
    wholeModelBaseFileIdIsSet_ = false;
    loadModelFileId_ = "";
    loadModelFileIdIsSet_ = false;
}

HumanModelMetaProperties::~HumanModelMetaProperties() = default;

void HumanModelMetaProperties::validate()
{
}

web::json::value HumanModelMetaProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(wholeModelBaseFileIdIsSet_) {
        val[utility::conversions::to_string_t("whole_model_base_file_id")] = ModelBase::toJson(wholeModelBaseFileId_);
    }
    if(loadModelFileIdIsSet_) {
        val[utility::conversions::to_string_t("load_model_file_id")] = ModelBase::toJson(loadModelFileId_);
    }

    return val;
}
bool HumanModelMetaProperties::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("whole_model_base_file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whole_model_base_file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWholeModelBaseFileId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("load_model_file_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("load_model_file_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoadModelFileId(refVal);
        }
    }
    return ok;
}


std::string HumanModelMetaProperties::getWholeModelBaseFileId() const
{
    return wholeModelBaseFileId_;
}

void HumanModelMetaProperties::setWholeModelBaseFileId(const std::string& value)
{
    wholeModelBaseFileId_ = value;
    wholeModelBaseFileIdIsSet_ = true;
}

bool HumanModelMetaProperties::wholeModelBaseFileIdIsSet() const
{
    return wholeModelBaseFileIdIsSet_;
}

void HumanModelMetaProperties::unsetwholeModelBaseFileId()
{
    wholeModelBaseFileIdIsSet_ = false;
}

std::string HumanModelMetaProperties::getLoadModelFileId() const
{
    return loadModelFileId_;
}

void HumanModelMetaProperties::setLoadModelFileId(const std::string& value)
{
    loadModelFileId_ = value;
    loadModelFileIdIsSet_ = true;
}

bool HumanModelMetaProperties::loadModelFileIdIsSet() const
{
    return loadModelFileIdIsSet_;
}

void HumanModelMetaProperties::unsetloadModelFileId()
{
    loadModelFileIdIsSet_ = false;
}

}
}
}
}
}


