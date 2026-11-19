
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteTrustedKeySpaceRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteTrustedKeySpaceRequest_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  DeleteTrustedKeySpaceRequest
    : public ModelBase
{
public:
    DeleteTrustedKeySpaceRequest();
    virtual ~DeleteTrustedKeySpaceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteTrustedKeySpaceRequest members

    /// <summary>
    /// **参数解释：** 密钥空间ID。 **约束限制：** 不涉及 **取值范围：** UUID格式，字符长度36-36。 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyspaceId() const;
    bool keyspaceIdIsSet() const;
    void unsetkeyspaceId();
    void setKeyspaceId(const std::string& value);


protected:
    std::string keyspaceId_;
    bool keyspaceIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteTrustedKeySpaceRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteTrustedKeySpaceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_DeleteTrustedKeySpaceRequest_H_
