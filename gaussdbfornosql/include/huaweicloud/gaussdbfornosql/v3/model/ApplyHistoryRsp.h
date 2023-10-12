
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ApplyHistoryRsp_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ApplyHistoryRsp_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <cpprest/details/basic_types.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ApplyHistoryRsp
    : public ModelBase
{
public:
    ApplyHistoryRsp();
    virtual ~ApplyHistoryRsp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplyHistoryRsp members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 生效时间，格式为\&quot;yyyy-MM-ddTHH:mm:ssZ\&quot;。  [其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。](tag:hc)  [其中，T指某个时间的开始；Z指时区偏移量。](tag:hk)
    /// </summary>

    utility::datetime getAppliedAt() const;
    bool appliedAtIsSet() const;
    void unsetappliedAt();
    void setAppliedAt(const utility::datetime& value);

    /// <summary>
    /// - SUCCESS：应用成功。 - FAILED:应用失败。
    /// </summary>

    std::string getApplyResult() const;
    bool applyResultIsSet() const;
    void unsetapplyResult();
    void setApplyResult(const std::string& value);

    /// <summary>
    /// 失败原因
    /// </summary>

    std::string getFailureReason() const;
    bool failureReasonIsSet() const;
    void unsetfailureReason();
    void setFailureReason(const std::string& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    utility::datetime appliedAt_;
    bool appliedAtIsSet_;
    std::string applyResult_;
    bool applyResultIsSet_;
    std::string failureReason_;
    bool failureReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ApplyHistoryRsp_H_
