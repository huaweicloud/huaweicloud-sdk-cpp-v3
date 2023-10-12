

#include "huaweicloud/mpc/v1/model/OutputFileInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




OutputFileInfo::OutputFileInfo()
{
    outputFileName_ = "";
    outputFileNameIsSet_ = false;
    execDescription_ = "";
    execDescriptionIsSet_ = false;
    metaDataIsSet_ = false;
}

OutputFileInfo::~OutputFileInfo() = default;

void OutputFileInfo::validate()
{
}

web::json::value OutputFileInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(outputFileNameIsSet_) {
        val[utility::conversions::to_string_t("output_file_name")] = ModelBase::toJson(outputFileName_);
    }
    if(execDescriptionIsSet_) {
        val[utility::conversions::to_string_t("exec_description")] = ModelBase::toJson(execDescription_);
    }
    if(metaDataIsSet_) {
        val[utility::conversions::to_string_t("meta_data")] = ModelBase::toJson(metaData_);
    }

    return val;
}
bool OutputFileInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("output_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFileName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exec_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("meta_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("meta_data"));
        if(!fieldValue.is_null())
        {
            SourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetaData(refVal);
        }
    }
    return ok;
}


std::string OutputFileInfo::getOutputFileName() const
{
    return outputFileName_;
}

void OutputFileInfo::setOutputFileName(const std::string& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool OutputFileInfo::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void OutputFileInfo::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

std::string OutputFileInfo::getExecDescription() const
{
    return execDescription_;
}

void OutputFileInfo::setExecDescription(const std::string& value)
{
    execDescription_ = value;
    execDescriptionIsSet_ = true;
}

bool OutputFileInfo::execDescriptionIsSet() const
{
    return execDescriptionIsSet_;
}

void OutputFileInfo::unsetexecDescription()
{
    execDescriptionIsSet_ = false;
}

SourceInfo OutputFileInfo::getMetaData() const
{
    return metaData_;
}

void OutputFileInfo::setMetaData(const SourceInfo& value)
{
    metaData_ = value;
    metaDataIsSet_ = true;
}

bool OutputFileInfo::metaDataIsSet() const
{
    return metaDataIsSet_;
}

void OutputFileInfo::unsetmetaData()
{
    metaDataIsSet_ = false;
}

}
}
}
}
}


