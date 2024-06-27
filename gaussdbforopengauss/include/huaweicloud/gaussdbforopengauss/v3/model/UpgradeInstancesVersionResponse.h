
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeInstancesVersionResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeInstancesVersionResponse_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  UpgradeInstancesVersionResponse
    : public ModelBase, public HttpResponse
{
public:
    UpgradeInstancesVersionResponse();
    virtual ~UpgradeInstancesVersionResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeInstancesVersionResponse members

    /// <summary>
    /// 任务id。
    /// </summary>

    std::vector<std::string>& getJobIds();
    bool jobIdsIsSet() const;
    void unsetjobIds();
    void setJobIds(const std::vector<std::string>& value);

    /// <summary>
    /// 下发成功的实例数量
    /// </summary>

    int32_t getSucceededNum() const;
    bool succeededNumIsSet() const;
    void unsetsucceededNum();
    void setSucceededNum(int32_t value);

    /// <summary>
    /// 下发失败的实例数量
    /// </summary>

    int32_t getFailedNum() const;
    bool failedNumIsSet() const;
    void unsetfailedNum();
    void setFailedNum(int32_t value);

    /// <summary>
    /// 下发失败的实例ID列表
    /// </summary>

    std::vector<std::string>& getFailedInstanceIds();
    bool failedInstanceIdsIsSet() const;
    void unsetfailedInstanceIds();
    void setFailedInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// 下发失败错误信息列表
    /// </summary>

    std::vector<std::string>& getErrorMessages();
    bool errorMessagesIsSet() const;
    void unseterrorMessages();
    void setErrorMessages(const std::vector<std::string>& value);


protected:
    std::vector<std::string> jobIds_;
    bool jobIdsIsSet_;
    int32_t succeededNum_;
    bool succeededNumIsSet_;
    int32_t failedNum_;
    bool failedNumIsSet_;
    std::vector<std::string> failedInstanceIds_;
    bool failedInstanceIdsIsSet_;
    std::vector<std::string> errorMessages_;
    bool errorMessagesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_UpgradeInstancesVersionResponse_H_
