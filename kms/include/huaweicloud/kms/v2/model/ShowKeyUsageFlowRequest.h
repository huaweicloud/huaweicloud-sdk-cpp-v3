
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowRequest_H_


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
class HUAWEICLOUD_KMS_V2_EXPORT  ShowKeyUsageFlowRequest
    : public ModelBase
{
public:
    ShowKeyUsageFlowRequest();
    virtual ~ShowKeyUsageFlowRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowKeyUsageFlowRequest members

    /// <summary>
    /// **参数解释：** 密钥空间ID **约束限制：** 满足正则表达式^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyspaceId() const;
    bool keyspaceIdIsSet() const;
    void unsetkeyspaceId();
    void setKeyspaceId(const std::string& value);

    /// <summary>
    /// **参数解释：** 密钥ID **约束限制：** 满足正则表达式^[0-9a-fA-F]{8}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{4}-[0-9a-fA-F]{12}$ **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getKeyId() const;
    bool keyIdIsSet() const;
    void unsetkeyId();
    void setKeyId(const std::string& value);


protected:
    std::string keyspaceId_;
    bool keyspaceIdIsSet_;
    std::string keyId_;
    bool keyIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowKeyUsageFlowRequest& dereference_from_shared_ptr(std::shared_ptr<ShowKeyUsageFlowRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ShowKeyUsageFlowRequest_H_
