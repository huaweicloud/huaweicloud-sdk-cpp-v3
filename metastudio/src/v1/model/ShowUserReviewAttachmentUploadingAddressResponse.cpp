

#include "huaweicloud/metastudio/v1/model/ShowUserReviewAttachmentUploadingAddressResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowUserReviewAttachmentUploadingAddressResponse::ShowUserReviewAttachmentUploadingAddressResponse()
{
    addressesIsSet_ = false;
}

ShowUserReviewAttachmentUploadingAddressResponse::~ShowUserReviewAttachmentUploadingAddressResponse() = default;

void ShowUserReviewAttachmentUploadingAddressResponse::validate()
{
}

web::json::value ShowUserReviewAttachmentUploadingAddressResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressesIsSet_) {
        val[utility::conversions::to_string_t("addresses")] = ModelBase::toJson(addresses_);
    }

    return val;
}
bool ShowUserReviewAttachmentUploadingAddressResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("addresses"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("addresses"));
        if(!fieldValue.is_null())
        {
            std::vector<AttachmentUploadingAddress> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddresses(refVal);
        }
    }
    return ok;
}


std::vector<AttachmentUploadingAddress>& ShowUserReviewAttachmentUploadingAddressResponse::getAddresses()
{
    return addresses_;
}

void ShowUserReviewAttachmentUploadingAddressResponse::setAddresses(const std::vector<AttachmentUploadingAddress>& value)
{
    addresses_ = value;
    addressesIsSet_ = true;
}

bool ShowUserReviewAttachmentUploadingAddressResponse::addressesIsSet() const
{
    return addressesIsSet_;
}

void ShowUserReviewAttachmentUploadingAddressResponse::unsetaddresses()
{
    addressesIsSet_ = false;
}

}
}
}
}
}


