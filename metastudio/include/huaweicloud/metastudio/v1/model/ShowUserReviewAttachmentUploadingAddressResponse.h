
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowUserReviewAttachmentUploadingAddressResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowUserReviewAttachmentUploadingAddressResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <vector>
#include <huaweicloud/metastudio/v1/model/AttachmentUploadingAddress.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowUserReviewAttachmentUploadingAddressResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowUserReviewAttachmentUploadingAddressResponse();
    virtual ~ShowUserReviewAttachmentUploadingAddressResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowUserReviewAttachmentUploadingAddressResponse members

    /// <summary>
    /// 地址列表
    /// </summary>

    std::vector<AttachmentUploadingAddress>& getAddresses();
    bool addressesIsSet() const;
    void unsetaddresses();
    void setAddresses(const std::vector<AttachmentUploadingAddress>& value);


protected:
    std::vector<AttachmentUploadingAddress> addresses_;
    bool addressesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowUserReviewAttachmentUploadingAddressResponse_H_
