

#include "huaweicloud/metastudio/v1/model/AttachmentUploadingAddress.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




AttachmentUploadingAddress::AttachmentUploadingAddress()
{
    number_ = 0;
    numberIsSet_ = false;
    uploadingUrl_ = "";
    uploadingUrlIsSet_ = false;
}

AttachmentUploadingAddress::~AttachmentUploadingAddress() = default;

void AttachmentUploadingAddress::validate()
{
}

web::json::value AttachmentUploadingAddress::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(uploadingUrlIsSet_) {
        val[utility::conversions::to_string_t("uploading_url")] = ModelBase::toJson(uploadingUrl_);
    }

    return val;
}
bool AttachmentUploadingAddress::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("uploading_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uploading_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUploadingUrl(refVal);
        }
    }
    return ok;
}


int32_t AttachmentUploadingAddress::getNumber() const
{
    return number_;
}

void AttachmentUploadingAddress::setNumber(int32_t value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool AttachmentUploadingAddress::numberIsSet() const
{
    return numberIsSet_;
}

void AttachmentUploadingAddress::unsetnumber()
{
    numberIsSet_ = false;
}

std::string AttachmentUploadingAddress::getUploadingUrl() const
{
    return uploadingUrl_;
}

void AttachmentUploadingAddress::setUploadingUrl(const std::string& value)
{
    uploadingUrl_ = value;
    uploadingUrlIsSet_ = true;
}

bool AttachmentUploadingAddress::uploadingUrlIsSet() const
{
    return uploadingUrlIsSet_;
}

void AttachmentUploadingAddress::unsetuploadingUrl()
{
    uploadingUrlIsSet_ = false;
}

}
}
}
}
}


