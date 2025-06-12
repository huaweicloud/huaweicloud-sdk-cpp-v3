

#include "huaweicloud/metastudio/v1/model/CreateTrainingJobRsp_segment_uploading_url.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateTrainingJobRsp_segment_uploading_url::CreateTrainingJobRsp_segment_uploading_url()
{
    audioUploadingUrlIsSet_ = false;
    txtUploadingUrlIsSet_ = false;
}

CreateTrainingJobRsp_segment_uploading_url::~CreateTrainingJobRsp_segment_uploading_url() = default;

void CreateTrainingJobRsp_segment_uploading_url::validate()
{
}

web::json::value CreateTrainingJobRsp_segment_uploading_url::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_uploading_url")] = ModelBase::toJson(audioUploadingUrl_);
    }
    if(txtUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("txt_uploading_url")] = ModelBase::toJson(txtUploadingUrl_);
    }

    return val;
}
bool CreateTrainingJobRsp_segment_uploading_url::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_uploading_url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioUploadingUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("txt_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("txt_uploading_url"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTxtUploadingUrl(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& CreateTrainingJobRsp_segment_uploading_url::getAudioUploadingUrl()
{
    return audioUploadingUrl_;
}

void CreateTrainingJobRsp_segment_uploading_url::setAudioUploadingUrl(const std::vector<std::string>& value)
{
    audioUploadingUrl_ = value;
    audioUploadingUrlIsSet_ = true;
}

bool CreateTrainingJobRsp_segment_uploading_url::audioUploadingUrlIsSet() const
{
    return audioUploadingUrlIsSet_;
}

void CreateTrainingJobRsp_segment_uploading_url::unsetaudioUploadingUrl()
{
    audioUploadingUrlIsSet_ = false;
}

std::vector<std::string>& CreateTrainingJobRsp_segment_uploading_url::getTxtUploadingUrl()
{
    return txtUploadingUrl_;
}

void CreateTrainingJobRsp_segment_uploading_url::setTxtUploadingUrl(const std::vector<std::string>& value)
{
    txtUploadingUrl_ = value;
    txtUploadingUrlIsSet_ = true;
}

bool CreateTrainingJobRsp_segment_uploading_url::txtUploadingUrlIsSet() const
{
    return txtUploadingUrlIsSet_;
}

void CreateTrainingJobRsp_segment_uploading_url::unsettxtUploadingUrl()
{
    txtUploadingUrlIsSet_ = false;
}

}
}
}
}
}


