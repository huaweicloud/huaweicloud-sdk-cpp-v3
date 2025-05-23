

#include "huaweicloud/mpc/v1/model/TranscodeDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TranscodeDetail::TranscodeDetail()
{
    multitaskInfoIsSet_ = false;
    inputFileIsSet_ = false;
    replaceSubIndexIsSet_ = false;
}

TranscodeDetail::~TranscodeDetail() = default;

void TranscodeDetail::validate()
{
}

web::json::value TranscodeDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(multitaskInfoIsSet_) {
        val[utility::conversions::to_string_t("multitask_info")] = ModelBase::toJson(multitaskInfo_);
    }
    if(inputFileIsSet_) {
        val[utility::conversions::to_string_t("input_file")] = ModelBase::toJson(inputFile_);
    }
    if(replaceSubIndexIsSet_) {
        val[utility::conversions::to_string_t("replace_sub_index")] = ModelBase::toJson(replaceSubIndex_);
    }

    return val;
}
bool TranscodeDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("multitask_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multitask_info"));
        if(!fieldValue.is_null())
        {
            std::vector<MultiTaskInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultitaskInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("input_file"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input_file"));
        if(!fieldValue.is_null())
        {
            SourceInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInputFile(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replace_sub_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replace_sub_index"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplaceSubIndex(refVal);
        }
    }
    return ok;
}


std::vector<MultiTaskInfo>& TranscodeDetail::getMultitaskInfo()
{
    return multitaskInfo_;
}

void TranscodeDetail::setMultitaskInfo(const std::vector<MultiTaskInfo>& value)
{
    multitaskInfo_ = value;
    multitaskInfoIsSet_ = true;
}

bool TranscodeDetail::multitaskInfoIsSet() const
{
    return multitaskInfoIsSet_;
}

void TranscodeDetail::unsetmultitaskInfo()
{
    multitaskInfoIsSet_ = false;
}

SourceInfo TranscodeDetail::getInputFile() const
{
    return inputFile_;
}

void TranscodeDetail::setInputFile(const SourceInfo& value)
{
    inputFile_ = value;
    inputFileIsSet_ = true;
}

bool TranscodeDetail::inputFileIsSet() const
{
    return inputFileIsSet_;
}

void TranscodeDetail::unsetinputFile()
{
    inputFileIsSet_ = false;
}

std::vector<std::string>& TranscodeDetail::getReplaceSubIndex()
{
    return replaceSubIndex_;
}

void TranscodeDetail::setReplaceSubIndex(const std::vector<std::string>& value)
{
    replaceSubIndex_ = value;
    replaceSubIndexIsSet_ = true;
}

bool TranscodeDetail::replaceSubIndexIsSet() const
{
    return replaceSubIndexIsSet_;
}

void TranscodeDetail::unsetreplaceSubIndex()
{
    replaceSubIndexIsSet_ = false;
}

}
}
}
}
}


