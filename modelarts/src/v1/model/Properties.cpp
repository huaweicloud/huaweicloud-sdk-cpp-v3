

#include "huaweicloud/modelarts/v1/model/Properties.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




Properties::Properties()
{
    datasetNum_ = 0;
    datasetNumIsSet_ = false;
    datasetSize_ = 0L;
    datasetSizeIsSet_ = false;
    promptConfig_ = "";
    promptConfigIsSet_ = false;
    dataCopyright_ = "";
    dataCopyrightIsSet_ = false;
    manifestFilePath_ = "";
    manifestFilePathIsSet_ = false;
    argumentsIsSet_ = false;
    updater_ = "";
    updaterIsSet_ = false;
}

Properties::~Properties() = default;

void Properties::validate()
{
}

web::json::value Properties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(datasetNumIsSet_) {
        val[utility::conversions::to_string_t("dataset_num")] = ModelBase::toJson(datasetNum_);
    }
    if(datasetSizeIsSet_) {
        val[utility::conversions::to_string_t("dataset_size")] = ModelBase::toJson(datasetSize_);
    }
    if(promptConfigIsSet_) {
        val[utility::conversions::to_string_t("prompt_config")] = ModelBase::toJson(promptConfig_);
    }
    if(dataCopyrightIsSet_) {
        val[utility::conversions::to_string_t("data_copyright")] = ModelBase::toJson(dataCopyright_);
    }
    if(manifestFilePathIsSet_) {
        val[utility::conversions::to_string_t("manifest_file_path")] = ModelBase::toJson(manifestFilePath_);
    }
    if(argumentsIsSet_) {
        val[utility::conversions::to_string_t("arguments")] = ModelBase::toJson(arguments_);
    }
    if(updaterIsSet_) {
        val[utility::conversions::to_string_t("updater")] = ModelBase::toJson(updater_);
    }

    return val;
}
bool Properties::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dataset_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_num"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataset_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataset_size"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatasetSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prompt_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prompt_config"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPromptConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_copyright"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_copyright"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataCopyright(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_file_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_file_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestFilePath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arguments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arguments"));
        if(!fieldValue.is_null())
        {
            std::vector<OperatorArgument> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArguments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdater(refVal);
        }
    }
    return ok;
}


int32_t Properties::getDatasetNum() const
{
    return datasetNum_;
}

void Properties::setDatasetNum(int32_t value)
{
    datasetNum_ = value;
    datasetNumIsSet_ = true;
}

bool Properties::datasetNumIsSet() const
{
    return datasetNumIsSet_;
}

void Properties::unsetdatasetNum()
{
    datasetNumIsSet_ = false;
}

int64_t Properties::getDatasetSize() const
{
    return datasetSize_;
}

void Properties::setDatasetSize(int64_t value)
{
    datasetSize_ = value;
    datasetSizeIsSet_ = true;
}

bool Properties::datasetSizeIsSet() const
{
    return datasetSizeIsSet_;
}

void Properties::unsetdatasetSize()
{
    datasetSizeIsSet_ = false;
}

std::string Properties::getPromptConfig() const
{
    return promptConfig_;
}

void Properties::setPromptConfig(const std::string& value)
{
    promptConfig_ = value;
    promptConfigIsSet_ = true;
}

bool Properties::promptConfigIsSet() const
{
    return promptConfigIsSet_;
}

void Properties::unsetpromptConfig()
{
    promptConfigIsSet_ = false;
}

std::string Properties::getDataCopyright() const
{
    return dataCopyright_;
}

void Properties::setDataCopyright(const std::string& value)
{
    dataCopyright_ = value;
    dataCopyrightIsSet_ = true;
}

bool Properties::dataCopyrightIsSet() const
{
    return dataCopyrightIsSet_;
}

void Properties::unsetdataCopyright()
{
    dataCopyrightIsSet_ = false;
}

std::string Properties::getManifestFilePath() const
{
    return manifestFilePath_;
}

void Properties::setManifestFilePath(const std::string& value)
{
    manifestFilePath_ = value;
    manifestFilePathIsSet_ = true;
}

bool Properties::manifestFilePathIsSet() const
{
    return manifestFilePathIsSet_;
}

void Properties::unsetmanifestFilePath()
{
    manifestFilePathIsSet_ = false;
}

std::vector<OperatorArgument>& Properties::getArguments()
{
    return arguments_;
}

void Properties::setArguments(const std::vector<OperatorArgument>& value)
{
    arguments_ = value;
    argumentsIsSet_ = true;
}

bool Properties::argumentsIsSet() const
{
    return argumentsIsSet_;
}

void Properties::unsetarguments()
{
    argumentsIsSet_ = false;
}

std::string Properties::getUpdater() const
{
    return updater_;
}

void Properties::setUpdater(const std::string& value)
{
    updater_ = value;
    updaterIsSet_ = true;
}

bool Properties::updaterIsSet() const
{
    return updaterIsSet_;
}

void Properties::unsetupdater()
{
    updaterIsSet_ = false;
}

}
}
}
}
}


