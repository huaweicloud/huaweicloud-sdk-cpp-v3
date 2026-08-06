
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DownloadAccessPointPrivateKeyRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DownloadAccessPointPrivateKeyRequest_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  DownloadAccessPointPrivateKeyRequest
    : public ModelBase
{
public:
    DownloadAccessPointPrivateKeyRequest();
    virtual ~DownloadAccessPointPrivateKeyRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DownloadAccessPointPrivateKeyRequest members

    /// <summary>
    /// **参数解释：** 接入点ID。 **约束限制：** 不涉及 **取值范围：** UUID格式，字符长度36-36。 **默认取值：** 不涉及
    /// </summary>

    std::string getAccessPointId() const;
    bool accessPointIdIsSet() const;
    void unsetaccessPointId();
    void setAccessPointId(const std::string& value);


protected:
    std::string accessPointId_;
    bool accessPointIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DownloadAccessPointPrivateKeyRequest& dereference_from_shared_ptr(std::shared_ptr<DownloadAccessPointPrivateKeyRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DownloadAccessPointPrivateKeyRequest_H_
