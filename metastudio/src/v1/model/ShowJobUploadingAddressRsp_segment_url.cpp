

#include "huaweicloud/metastudio/v1/model/ShowJobUploadingAddressRsp_segment_url.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowJobUploadingAddressRsp_segment_url::ShowJobUploadingAddressRsp_segment_url()
{
    audioUploadingUrlIsSet_ = false;
    txtUploadingUrlIsSet_ = false;
}

ShowJobUploadingAddressRsp_segment_url::~ShowJobUploadingAddressRsp_segment_url() = default;

void ShowJobUploadingAddressRsp_segment_url::validate()
{
}

web::json::value ShowJobUploadingAddressRsp_segment_url::toJson() const
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
bool ShowJobUploadingAddressRsp_segment_url::fromJson(const web::json::value& val)
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


std::vector<std::string>& ShowJobUploadingAddressRsp_segment_url::getAudioUploadingUrl()
{
    return audioUploadingUrl_;
}

void ShowJobUploadingAddressRsp_segment_url::setAudioUploadingUrl(const std::vector<std::string>& value)
{
    audioUploadingUrl_ = value;
    audioUploadingUrlIsSet_ = true;
}

bool ShowJobUploadingAddressRsp_segment_url::audioUploadingUrlIsSet() const
{
    return audioUploadingUrlIsSet_;
}

void ShowJobUploadingAddressRsp_segment_url::unsetaudioUploadingUrl()
{
    audioUploadingUrlIsSet_ = false;
}

std::vector<std::string>& ShowJobUploadingAddressRsp_segment_url::getTxtUploadingUrl()
{
    return txtUploadingUrl_;
}

void ShowJobUploadingAddressRsp_segment_url::setTxtUploadingUrl(const std::vector<std::string>& value)
{
    txtUploadingUrl_ = value;
    txtUploadingUrlIsSet_ = true;
}

bool ShowJobUploadingAddressRsp_segment_url::txtUploadingUrlIsSet() const
{
    return txtUploadingUrlIsSet_;
}

void ShowJobUploadingAddressRsp_segment_url::unsettxtUploadingUrl()
{
    txtUploadingUrlIsSet_ = false;
}

}
}
}
}
}


