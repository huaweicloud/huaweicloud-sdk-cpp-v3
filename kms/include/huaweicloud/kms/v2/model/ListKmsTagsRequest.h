
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsTagsRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsTagsRequest_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListKmsTagsRequest
    : public ModelBase
{
public:
    ListKmsTagsRequest();
    virtual ~ListKmsTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListKmsTagsRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListKmsTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListKmsTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsTagsRequest_H_
