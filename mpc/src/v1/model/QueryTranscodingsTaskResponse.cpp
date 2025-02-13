

#include "huaweicloud/mpc/v1/model/QueryTranscodingsTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




QueryTranscodingsTaskResponse::QueryTranscodingsTaskResponse()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    progress_ = 0;
    progressIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    transTemplateIdIsSet_ = false;
    inputIsSet_ = false;
    outputIsSet_ = false;
    outputFileNameIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    errorCode_ = "";
    errorCodeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    tips_ = "";
    tipsIsSet_ = false;
    transcodeDetailIsSet_ = false;
    thumbnailOutputIsSet_ = false;
    thumbnailOutputname_ = "";
    thumbnailOutputnameIsSet_ = false;
    picInfoIsSet_ = false;
    avParametersIsSet_ = false;
    additionalManifestsIsSet_ = false;
}

QueryTranscodingsTaskResponse::~QueryTranscodingsTaskResponse() = default;

void QueryTranscodingsTaskResponse::validate()
{
}

web::json::value QueryTranscodingsTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(progressIsSet_) {
        val[utility::conversions::to_string_t("progress")] = ModelBase::toJson(progress_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(transTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("trans_template_id")] = ModelBase::toJson(transTemplateId_);
    }
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(outputIsSet_) {
        val[utility::conversions::to_string_t("output")] = ModelBase::toJson(output_);
    }
    if(outputFileNameIsSet_) {
        val[utility::conversions::to_string_t("output_file_name")] = ModelBase::toJson(outputFileName_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(errorCodeIsSet_) {
        val[utility::conversions::to_string_t("error_code")] = ModelBase::toJson(errorCode_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(tipsIsSet_) {
        val[utility::conversions::to_string_t("tips")] = ModelBase::toJson(tips_);
    }
    if(transcodeDetailIsSet_) {
        val[utility::conversions::to_string_t("transcode_detail")] = ModelBase::toJson(transcodeDetail_);
    }
    if(thumbnailOutputIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_output")] = ModelBase::toJson(thumbnailOutput_);
    }
    if(thumbnailOutputnameIsSet_) {
        val[utility::conversions::to_string_t("thumbnail_outputname")] = ModelBase::toJson(thumbnailOutputname_);
    }
    if(picInfoIsSet_) {
        val[utility::conversions::to_string_t("pic_info")] = ModelBase::toJson(picInfo_);
    }
    if(avParametersIsSet_) {
        val[utility::conversions::to_string_t("av_parameters")] = ModelBase::toJson(avParameters_);
    }
    if(additionalManifestsIsSet_) {
        val[utility::conversions::to_string_t("additional_manifests")] = ModelBase::toJson(additionalManifests_);
    }

    return val;
}
bool QueryTranscodingsTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("progress"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("progress"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProgress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trans_template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_template_id"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransTemplateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("output_file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("output_file_name"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOutputFileName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("error_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tips"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTips(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transcode_detail"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transcode_detail"));
        if(!fieldValue.is_null())
        {
            TranscodeDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTranscodeDetail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_output"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_output"));
        if(!fieldValue.is_null())
        {
            ObsObjInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailOutput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thumbnail_outputname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thumbnail_outputname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThumbnailOutputname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pic_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pic_info"));
        if(!fieldValue.is_null())
        {
            std::vector<PicInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPicInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("av_parameters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("av_parameters"));
        if(!fieldValue.is_null())
        {
            std::vector<AvParameters> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvParameters(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("additional_manifests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("additional_manifests"));
        if(!fieldValue.is_null())
        {
            std::vector<AdditionalManifests> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdditionalManifests(refVal);
        }
    }
    return ok;
}


std::string QueryTranscodingsTaskResponse::getTaskId() const
{
    return taskId_;
}

void QueryTranscodingsTaskResponse::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void QueryTranscodingsTaskResponse::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getStatus() const
{
    return status_;
}

void QueryTranscodingsTaskResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::statusIsSet() const
{
    return statusIsSet_;
}

void QueryTranscodingsTaskResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t QueryTranscodingsTaskResponse::getProgress() const
{
    return progress_;
}

void QueryTranscodingsTaskResponse::setProgress(int32_t value)
{
    progress_ = value;
    progressIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::progressIsSet() const
{
    return progressIsSet_;
}

void QueryTranscodingsTaskResponse::unsetprogress()
{
    progressIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getCreateTime() const
{
    return createTime_;
}

void QueryTranscodingsTaskResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void QueryTranscodingsTaskResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getEndTime() const
{
    return endTime_;
}

void QueryTranscodingsTaskResponse::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void QueryTranscodingsTaskResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::vector<int32_t>& QueryTranscodingsTaskResponse::getTransTemplateId()
{
    return transTemplateId_;
}

void QueryTranscodingsTaskResponse::setTransTemplateId(std::vector<int32_t> value)
{
    transTemplateId_ = value;
    transTemplateIdIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::transTemplateIdIsSet() const
{
    return transTemplateIdIsSet_;
}

void QueryTranscodingsTaskResponse::unsettransTemplateId()
{
    transTemplateIdIsSet_ = false;
}

ObsObjInfo QueryTranscodingsTaskResponse::getInput() const
{
    return input_;
}

void QueryTranscodingsTaskResponse::setInput(const ObsObjInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::inputIsSet() const
{
    return inputIsSet_;
}

void QueryTranscodingsTaskResponse::unsetinput()
{
    inputIsSet_ = false;
}

ObsObjInfo QueryTranscodingsTaskResponse::getOutput() const
{
    return output_;
}

void QueryTranscodingsTaskResponse::setOutput(const ObsObjInfo& value)
{
    output_ = value;
    outputIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::outputIsSet() const
{
    return outputIsSet_;
}

void QueryTranscodingsTaskResponse::unsetoutput()
{
    outputIsSet_ = false;
}

std::vector<std::string>& QueryTranscodingsTaskResponse::getOutputFileName()
{
    return outputFileName_;
}

void QueryTranscodingsTaskResponse::setOutputFileName(const std::vector<std::string>& value)
{
    outputFileName_ = value;
    outputFileNameIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::outputFileNameIsSet() const
{
    return outputFileNameIsSet_;
}

void QueryTranscodingsTaskResponse::unsetoutputFileName()
{
    outputFileNameIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getUserData() const
{
    return userData_;
}

void QueryTranscodingsTaskResponse::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::userDataIsSet() const
{
    return userDataIsSet_;
}

void QueryTranscodingsTaskResponse::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getErrorCode() const
{
    return errorCode_;
}

void QueryTranscodingsTaskResponse::setErrorCode(const std::string& value)
{
    errorCode_ = value;
    errorCodeIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::errorCodeIsSet() const
{
    return errorCodeIsSet_;
}

void QueryTranscodingsTaskResponse::unseterrorCode()
{
    errorCodeIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getDescription() const
{
    return description_;
}

void QueryTranscodingsTaskResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void QueryTranscodingsTaskResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getTips() const
{
    return tips_;
}

void QueryTranscodingsTaskResponse::setTips(const std::string& value)
{
    tips_ = value;
    tipsIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::tipsIsSet() const
{
    return tipsIsSet_;
}

void QueryTranscodingsTaskResponse::unsettips()
{
    tipsIsSet_ = false;
}

TranscodeDetail QueryTranscodingsTaskResponse::getTranscodeDetail() const
{
    return transcodeDetail_;
}

void QueryTranscodingsTaskResponse::setTranscodeDetail(const TranscodeDetail& value)
{
    transcodeDetail_ = value;
    transcodeDetailIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::transcodeDetailIsSet() const
{
    return transcodeDetailIsSet_;
}

void QueryTranscodingsTaskResponse::unsettranscodeDetail()
{
    transcodeDetailIsSet_ = false;
}

ObsObjInfo QueryTranscodingsTaskResponse::getThumbnailOutput() const
{
    return thumbnailOutput_;
}

void QueryTranscodingsTaskResponse::setThumbnailOutput(const ObsObjInfo& value)
{
    thumbnailOutput_ = value;
    thumbnailOutputIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::thumbnailOutputIsSet() const
{
    return thumbnailOutputIsSet_;
}

void QueryTranscodingsTaskResponse::unsetthumbnailOutput()
{
    thumbnailOutputIsSet_ = false;
}

std::string QueryTranscodingsTaskResponse::getThumbnailOutputname() const
{
    return thumbnailOutputname_;
}

void QueryTranscodingsTaskResponse::setThumbnailOutputname(const std::string& value)
{
    thumbnailOutputname_ = value;
    thumbnailOutputnameIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::thumbnailOutputnameIsSet() const
{
    return thumbnailOutputnameIsSet_;
}

void QueryTranscodingsTaskResponse::unsetthumbnailOutputname()
{
    thumbnailOutputnameIsSet_ = false;
}

std::vector<PicInfo>& QueryTranscodingsTaskResponse::getPicInfo()
{
    return picInfo_;
}

void QueryTranscodingsTaskResponse::setPicInfo(const std::vector<PicInfo>& value)
{
    picInfo_ = value;
    picInfoIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::picInfoIsSet() const
{
    return picInfoIsSet_;
}

void QueryTranscodingsTaskResponse::unsetpicInfo()
{
    picInfoIsSet_ = false;
}

std::vector<AvParameters>& QueryTranscodingsTaskResponse::getAvParameters()
{
    return avParameters_;
}

void QueryTranscodingsTaskResponse::setAvParameters(const std::vector<AvParameters>& value)
{
    avParameters_ = value;
    avParametersIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::avParametersIsSet() const
{
    return avParametersIsSet_;
}

void QueryTranscodingsTaskResponse::unsetavParameters()
{
    avParametersIsSet_ = false;
}

std::vector<AdditionalManifests>& QueryTranscodingsTaskResponse::getAdditionalManifests()
{
    return additionalManifests_;
}

void QueryTranscodingsTaskResponse::setAdditionalManifests(const std::vector<AdditionalManifests>& value)
{
    additionalManifests_ = value;
    additionalManifestsIsSet_ = true;
}

bool QueryTranscodingsTaskResponse::additionalManifestsIsSet() const
{
    return additionalManifestsIsSet_;
}

void QueryTranscodingsTaskResponse::unsetadditionalManifests()
{
    additionalManifestsIsSet_ = false;
}

}
}
}
}
}


