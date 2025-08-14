
#ifndef HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UnbindDevicePolicyResponse_H_
#define HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UnbindDevicePolicyResponse_H_


#include <huaweicloud/iotda/v5/IoTDAExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/iotda/v5/model/DevicePolicyBindOrUnbindFailureDetail.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_IOTDA_V5_EXPORT  UnbindDevicePolicyResponse
    : public ModelBase, public HttpResponse
{
public:
    UnbindDevicePolicyResponse();
    virtual ~UnbindDevicePolicyResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UnbindDevicePolicyResponse members

    /// <summary>
    /// 策略ID。
    /// </summary>

    std::string getPolicyId() const;
    bool policyIdIsSet() const;
    void unsetpolicyId();
    void setPolicyId(const std::string& value);

    /// <summary>
    /// **参数说明**：策略的目标类型。 **取值范围**：device|product|app，device表示设备，product表示产品，app表示整个资源空间。
    /// </summary>

    std::string getTargetType() const;
    bool targetTypeIsSet() const;
    void unsettargetType();
    void setTargetType(const std::string& value);

    /// <summary>
    /// 成功的目标id列表。
    /// </summary>

    std::vector<std::string>& getSuccessTargets();
    bool successTargetsIsSet() const;
    void unsetsuccessTargets();
    void setSuccessTargets(const std::vector<std::string>& value);

    /// <summary>
    /// 失败的目标id列表 
    /// </summary>

    std::vector<DevicePolicyBindOrUnbindFailureDetail>& getFailureTargets();
    bool failureTargetsIsSet() const;
    void unsetfailureTargets();
    void setFailureTargets(const std::vector<DevicePolicyBindOrUnbindFailureDetail>& value);


protected:
    std::string policyId_;
    bool policyIdIsSet_;
    std::string targetType_;
    bool targetTypeIsSet_;
    std::vector<std::string> successTargets_;
    bool successTargetsIsSet_;
    std::vector<DevicePolicyBindOrUnbindFailureDetail> failureTargets_;
    bool failureTargetsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDA_V5_MODEL_UnbindDevicePolicyResponse_H_
