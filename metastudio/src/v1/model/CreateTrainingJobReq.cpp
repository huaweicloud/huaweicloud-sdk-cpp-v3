

#include "huaweicloud/metastudio/v1/model/CreateTrainingJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingJobReq::CreateTrainingJobReq()
{
    tagIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    voiceName_ = "";
    voiceNameIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    createTypeIsSet_ = false;
    phone_ = "";
    phoneIsSet_ = false;
    dhtmsJobId_ = "";
    dhtmsJobIdIsSet_ = false;
    batchName_ = "";
    batchNameIsSet_ = false;
    outputLanguage_ = "";
    outputLanguageIsSet_ = false;
    customText_ = "";
    customTextIsSet_ = false;
}

CreateTrainingJobReq::~CreateTrainingJobReq() = default;

void CreateTrainingJobReq::validate()
{
}

web::json::value CreateTrainingJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(voiceNameIsSet_) {
        val[utility::conversions::to_string_t("voice_name")] = ModelBase::toJson(voiceName_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(createTypeIsSet_) {
        val[utility::conversions::to_string_t("create_type")] = ModelBase::toJson(createType_);
    }
    if(phoneIsSet_) {
        val[utility::conversions::to_string_t("phone")] = ModelBase::toJson(phone_);
    }
    if(dhtmsJobIdIsSet_) {
        val[utility::conversions::to_string_t("dhtms_job_id")] = ModelBase::toJson(dhtmsJobId_);
    }
    if(batchNameIsSet_) {
        val[utility::conversions::to_string_t("batch_name")] = ModelBase::toJson(batchName_);
    }
    if(outputLanguageIsSet_) {
        val[utility::conversions::to_string_t("output_language")] = ModelBase::toJson(outputLanguage_);
    }
    if(customTextIsSet_) {
        val[utility::conversions::to_string_t("custom_text")] = ModelBase::toJson(customText_);
    }

    return val;
}
bool CreateTrainingJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            JobTag refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_type"));
        if(!fieldValue.is_null())
        {
            CreateType refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dhtms_job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dhtms_job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDhtmsJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("batch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("batch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBatchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomText(refVal);
        }
    }
    return ok;
}


JobTag CreateTrainingJobReq::getTag() const
{
    return tag_;
}

void CreateTrainingJobReq::setTag(const JobTag& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool CreateTrainingJobReq::tagIsSet() const
{
    return tagIsSet_;
}

void CreateTrainingJobReq::unsettag()
{
    tagIsSet_ = false;
}

std::string CreateTrainingJobReq::getDescription() const
{
    return description_;
}

void CreateTrainingJobReq::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateTrainingJobReq::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateTrainingJobReq::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateTrainingJobReq::getSex() const
{
    return sex_;
}

void CreateTrainingJobReq::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool CreateTrainingJobReq::sexIsSet() const
{
    return sexIsSet_;
}

void CreateTrainingJobReq::unsetsex()
{
    sexIsSet_ = false;
}

std::string CreateTrainingJobReq::getVoiceName() const
{
    return voiceName_;
}

void CreateTrainingJobReq::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool CreateTrainingJobReq::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void CreateTrainingJobReq::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

std::string CreateTrainingJobReq::getLanguage() const
{
    return language_;
}

void CreateTrainingJobReq::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool CreateTrainingJobReq::languageIsSet() const
{
    return languageIsSet_;
}

void CreateTrainingJobReq::unsetlanguage()
{
    languageIsSet_ = false;
}

CreateType CreateTrainingJobReq::getCreateType() const
{
    return createType_;
}

void CreateTrainingJobReq::setCreateType(const CreateType& value)
{
    createType_ = value;
    createTypeIsSet_ = true;
}

bool CreateTrainingJobReq::createTypeIsSet() const
{
    return createTypeIsSet_;
}

void CreateTrainingJobReq::unsetcreateType()
{
    createTypeIsSet_ = false;
}

std::string CreateTrainingJobReq::getPhone() const
{
    return phone_;
}

void CreateTrainingJobReq::setPhone(const std::string& value)
{
    phone_ = value;
    phoneIsSet_ = true;
}

bool CreateTrainingJobReq::phoneIsSet() const
{
    return phoneIsSet_;
}

void CreateTrainingJobReq::unsetphone()
{
    phoneIsSet_ = false;
}

std::string CreateTrainingJobReq::getDhtmsJobId() const
{
    return dhtmsJobId_;
}

void CreateTrainingJobReq::setDhtmsJobId(const std::string& value)
{
    dhtmsJobId_ = value;
    dhtmsJobIdIsSet_ = true;
}

bool CreateTrainingJobReq::dhtmsJobIdIsSet() const
{
    return dhtmsJobIdIsSet_;
}

void CreateTrainingJobReq::unsetdhtmsJobId()
{
    dhtmsJobIdIsSet_ = false;
}

std::string CreateTrainingJobReq::getBatchName() const
{
    return batchName_;
}

void CreateTrainingJobReq::setBatchName(const std::string& value)
{
    batchName_ = value;
    batchNameIsSet_ = true;
}

bool CreateTrainingJobReq::batchNameIsSet() const
{
    return batchNameIsSet_;
}

void CreateTrainingJobReq::unsetbatchName()
{
    batchNameIsSet_ = false;
}

std::string CreateTrainingJobReq::getOutputLanguage() const
{
    return outputLanguage_;
}

void CreateTrainingJobReq::setOutputLanguage(const std::string& value)
{
    outputLanguage_ = value;
    outputLanguageIsSet_ = true;
}

bool CreateTrainingJobReq::outputLanguageIsSet() const
{
    return outputLanguageIsSet_;
}

void CreateTrainingJobReq::unsetoutputLanguage()
{
    outputLanguageIsSet_ = false;
}

std::string CreateTrainingJobReq::getCustomText() const
{
    return customText_;
}

void CreateTrainingJobReq::setCustomText(const std::string& value)
{
    customText_ = value;
    customTextIsSet_ = true;
}

bool CreateTrainingJobReq::customTextIsSet() const
{
    return customTextIsSet_;
}

void CreateTrainingJobReq::unsetcustomText()
{
    customTextIsSet_ = false;
}

}
}
}
}
}


