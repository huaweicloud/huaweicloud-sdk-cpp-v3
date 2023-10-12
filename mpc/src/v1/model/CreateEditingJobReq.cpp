

#include "huaweicloud/mpc/v1/model/CreateEditingJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




CreateEditingJobReq::CreateEditingJobReq()
{
    editTypeIsSet_ = false;
    clipsIsSet_ = false;
    concatsIsSet_ = false;
    concatIsSet_ = false;
    mixIsSet_ = false;
    inputIsSet_ = false;
    outputSettingIsSet_ = false;
    imageWatermarkSettingsIsSet_ = false;
    editSettingsIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

CreateEditingJobReq::~CreateEditingJobReq() = default;

void CreateEditingJobReq::validate()
{
}

web::json::value CreateEditingJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(editTypeIsSet_) {
        val[utility::conversions::to_string_t("edit_type")] = ModelBase::toJson(editType_);
    }
    if(clipsIsSet_) {
        val[utility::conversions::to_string_t("clips")] = ModelBase::toJson(clips_);
    }
    if(concatsIsSet_) {
        val[utility::conversions::to_string_t("concats")] = ModelBase::toJson(concats_);
    }
    if(concatIsSet_) {
        val[utility::conversions::to_string_t("concat")] = ModelBase::toJson(concat_);
    }
    if(mixIsSet_) {
        val[utility::conversions::to_string_t("mix")] = ModelBase::toJson(mix_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputSettingIsSet_) {
        val[utility::conversions::to_string_t("output_setting")] = ModelBase::toJson(outputSetting_);
    }
    if(imageWatermarkSettingsIsSet_) {
        val[utility::conversions::to_string_t("image_watermark_settings")] = ModelBase::toJson(imageWatermarkSettings_);
    }
    if(editSettingsIsSet_) {
        val[utility::conversions::to_string_t("edit_settings")] = ModelBase::toJson(editSettings_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }

    return val;
}
bool CreateEditingJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("edit_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edit_type"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clips"));
        if(!fieldValue.is_null())
        {
            std::vector<ClipInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concats"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concats"));
        if(!fieldValue.is_null())
        {
            std::vector<MultiConcatInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcats(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concat"));
        if(!fieldValue.is_null())
        {
            ConcatInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mix"));
        if(!fieldValue.is_null())
        {
            MixInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_setting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_setting"));
        if(!fieldValue.is_null())
        {
            OutputSetting refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputSetting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_watermark_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_watermark_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<ImageWatermarkSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageWatermarkSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("edit_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("edit_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<EditSetting> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEditSettings(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CreateEditingJobReq::getEditType()
{
    return editType_;
}

void CreateEditingJobReq::setEditType(const std::vector<std::string>& value)
{
    editType_ = value;
    editTypeIsSet_ = true;
}

bool CreateEditingJobReq::editTypeIsSet() const
{
    return editTypeIsSet_;
}

void CreateEditingJobReq::unseteditType()
{
    editTypeIsSet_ = false;
}

std::vector<ClipInfo>& CreateEditingJobReq::getClips()
{
    return clips_;
}

void CreateEditingJobReq::setClips(const std::vector<ClipInfo>& value)
{
    clips_ = value;
    clipsIsSet_ = true;
}

bool CreateEditingJobReq::clipsIsSet() const
{
    return clipsIsSet_;
}

void CreateEditingJobReq::unsetclips()
{
    clipsIsSet_ = false;
}

std::vector<MultiConcatInfo>& CreateEditingJobReq::getConcats()
{
    return concats_;
}

void CreateEditingJobReq::setConcats(const std::vector<MultiConcatInfo>& value)
{
    concats_ = value;
    concatsIsSet_ = true;
}

bool CreateEditingJobReq::concatsIsSet() const
{
    return concatsIsSet_;
}

void CreateEditingJobReq::unsetconcats()
{
    concatsIsSet_ = false;
}

ConcatInfo CreateEditingJobReq::getConcat() const
{
    return concat_;
}

void CreateEditingJobReq::setConcat(const ConcatInfo& value)
{
    concat_ = value;
    concatIsSet_ = true;
}

bool CreateEditingJobReq::concatIsSet() const
{
    return concatIsSet_;
}

void CreateEditingJobReq::unsetconcat()
{
    concatIsSet_ = false;
}

MixInfo CreateEditingJobReq::getMix() const
{
    return mix_;
}

void CreateEditingJobReq::setMix(const MixInfo& value)
{
    mix_ = value;
    mixIsSet_ = true;
}

bool CreateEditingJobReq::mixIsSet() const
{
    return mixIsSet_;
}

void CreateEditingJobReq::unsetmix()
{
    mixIsSet_ = false;
}

ObsObjInfo CreateEditingJobReq::getInput() const
{
    return input_;
}

void CreateEditingJobReq::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool CreateEditingJobReq::inputIsSet() const
{
    return inputIsSet_;
}

void CreateEditingJobReq::unsetinput()
{
    inputIsSet_ = false;
}

OutputSetting CreateEditingJobReq::getOutputSetting() const
{
    return outputSetting_;
}

void CreateEditingJobReq::setOutputSetting(const OutputSetting& value)
{
    outputSetting_ = value;
    outputSettingIsSet_ = true;
}

bool CreateEditingJobReq::outputSettingIsSet() const
{
    return outputSettingIsSet_;
}

void CreateEditingJobReq::unsetoutputSetting()
{
    outputSettingIsSet_ = false;
}

std::vector<ImageWatermarkSetting>& CreateEditingJobReq::getImageWatermarkSettings()
{
    return imageWatermarkSettings_;
}

void CreateEditingJobReq::setImageWatermarkSettings(const std::vector<ImageWatermarkSetting>& value)
{
    imageWatermarkSettings_ = value;
    imageWatermarkSettingsIsSet_ = true;
}

bool CreateEditingJobReq::imageWatermarkSettingsIsSet() const
{
    return imageWatermarkSettingsIsSet_;
}

void CreateEditingJobReq::unsetimageWatermarkSettings()
{
    imageWatermarkSettingsIsSet_ = false;
}

std::vector<EditSetting>& CreateEditingJobReq::getEditSettings()
{
    return editSettings_;
}

void CreateEditingJobReq::setEditSettings(const std::vector<EditSetting>& value)
{
    editSettings_ = value;
    editSettingsIsSet_ = true;
}

bool CreateEditingJobReq::editSettingsIsSet() const
{
    return editSettingsIsSet_;
}

void CreateEditingJobReq::unseteditSettings()
{
    editSettingsIsSet_ = false;
}

std::string CreateEditingJobReq::getUserData() const
{
    return userData_;
}

void CreateEditingJobReq::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool CreateEditingJobReq::userDataIsSet() const
{
    return userDataIsSet_;
}

void CreateEditingJobReq::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


