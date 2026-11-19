
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateTrustedKeySpaceResponse_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateTrustedKeySpaceResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  CreateTrustedKeySpaceResponse
    : public ModelBase, public HttpResponse
{
public:
    CreateTrustedKeySpaceResponse();
    virtual ~CreateTrustedKeySpaceResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTrustedKeySpaceResponse members

    /// <summary>
    /// **参数解释：** 创建的密钥空间ID **取值范围：** 不涉及
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
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_CreateTrustedKeySpaceResponse_H_
