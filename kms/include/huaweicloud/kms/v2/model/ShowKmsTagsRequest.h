
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKmsTagsRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKmsTagsRequest_H_


#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKmsTagsRequest
    : public ModelBase
{
public:
    ShowKmsTagsRequest();
    virtual ~ShowKmsTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKmsTagsRequest members

    /// <summary>
    /// 密钥ID
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);


protected:
    std::string keyId_;
    bool keyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowKmsTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ShowKmsTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKmsTagsRequest_H_
