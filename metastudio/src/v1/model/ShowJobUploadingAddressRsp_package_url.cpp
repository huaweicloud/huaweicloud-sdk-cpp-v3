

#include "huaweicloud/metastudio/v1/model/ShowJobUploadingAddressRsp_package_url.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowJobUploadingAddressRsp_package_url::ShowJobUploadingAddressRsp_package_url()
{
    trainingDataUploadingUrl_ = "";
    trainingDataUploadingUrlIsSet_ = false;
}

ShowJobUploadingAddressRsp_package_url::~ShowJobUploadingAddressRsp_package_url() = default;

void ShowJobUploadingAddressRsp_package_url::validate()
{
}

web::json::value ShowJobUploadingAddressRsp_package_url::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trainingDataUploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("training_data_uploading_url")] = ModelBase::toJson(trainingDataUploadingUrl_);
    }

    return val;
}
bool ShowJobUploadingAddressRsp_package_url::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("training_data_uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("training_data_uploading_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainingDataUploadingUrl(refVal);
        }
    }
    return ok;
}


std::string ShowJobUploadingAddressRsp_package_url::getTrainingDataUploadingUrl() const
{
    return trainingDataUploadingUrl_;
}

void ShowJobUploadingAddressRsp_package_url::setTrainingDataUploadingUrl(const std::string& value)
{
    trainingDataUploadingUrl_ = value;
    trainingDataUploadingUrlIsSet_ = true;
}

bool ShowJobUploadingAddressRsp_package_url::trainingDataUploadingUrlIsSet() const
{
    return trainingDataUploadingUrlIsSet_;
}

void ShowJobUploadingAddressRsp_package_url::unsettrainingDataUploadingUrl()
{
    trainingDataUploadingUrlIsSet_ = false;
}

}
}
}
}
}


