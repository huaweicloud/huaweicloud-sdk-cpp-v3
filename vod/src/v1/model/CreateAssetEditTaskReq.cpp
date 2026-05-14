

#include "huaweicloud/vod/v1/model/CreateAssetEditTaskReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateAssetEditTaskReq::CreateAssetEditTaskReq()
{
    inputsIsSet_ = false;
    editingSettingsIsSet_ = false;
}

CreateAssetEditTaskReq::~CreateAssetEditTaskReq() = default;

void CreateAssetEditTaskReq::validate()
{
}

web::json::value CreateAssetEditTaskReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputsIsSet_) {
        val[utility::conversions::to_string_t("inputs")] = ModelBase::toJson(inputs_);
    }
    if(editingSettingsIsSet_) {
        val[utility::conversions::to_string_t("editing_settings")] = ModelBase::toJson(editingSettings_);
    }

    return val;
}
bool CreateAssetEditTaskReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("inputs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("inputs"));
        if(!fieldValue.is_null())
        {
            std::vector<EditInput> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("editing_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("editing_settings"));
        if(!fieldValue.is_null())
        {
            VodEditingSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditingSettings(refVal);
        }
    }
    return ok;
}


std::vector<EditInput>& CreateAssetEditTaskReq::getInputs()
{
    return inputs_;
}

void CreateAssetEditTaskReq::setInputs(const std::vector<EditInput>& value)
{
    inputs_ = value;
    inputsIsSet_ = true;
}

bool CreateAssetEditTaskReq::inputsIsSet() const
{
    return inputsIsSet_;
}

void CreateAssetEditTaskReq::unsetinputs()
{
    inputsIsSet_ = false;
}

VodEditingSetting CreateAssetEditTaskReq::getEditingSettings() const
{
    return editingSettings_;
}

void CreateAssetEditTaskReq::setEditingSettings(const VodEditingSetting& value)
{
    editingSettings_ = value;
    editingSettingsIsSet_ = true;
}

bool CreateAssetEditTaskReq::editingSettingsIsSet() const
{
    return editingSettingsIsSet_;
}

void CreateAssetEditTaskReq::unseteditingSettings()
{
    editingSettingsIsSet_ = false;
}

}
}
}
}
}


