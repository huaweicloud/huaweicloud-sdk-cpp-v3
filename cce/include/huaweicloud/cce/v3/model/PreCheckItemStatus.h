
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PreCheckItemStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PreCheckItemStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cce/v3/model/RiskSource.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 检查项状态信息
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PreCheckItemStatus
    : public ModelBase
{
public:
    PreCheckItemStatus();
    virtual ~PreCheckItemStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreCheckItemStatus members

    /// <summary>
    /// 检查项名称
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 检查项类型，取值如下 - Exception: 异常类，需要用户解决 - Risk：风险类，用户确认后可选择跳过
    /// </summary>

    std::string getKind() const;
    bool kindIsSet() const;
    void unsetkind();
    void setKind(const std::string& value);

    /// <summary>
    /// 检查项分组，取值如下 - LimitCheck: 集群限制检查 - MasterCheck：控制节点检查 - NodeCheck：用户节点检查 - AddonCheck：插件检查 - ExecuteException：检查流程错误
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// 检查项风险级别，取值如下 - Info: 提示级别 - Warning：风险级别 - Fatal：严重级别
    /// </summary>

    std::string getLevel() const;
    bool levelIsSet() const;
    void unsetlevel();
    void setLevel(const std::string& value);

    /// <summary>
    /// 状态，取值如下 - Init: 初始化 - Running 运行中 - Success 成功 - Failed 失败
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);

    /// <summary>
    /// 提示信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    RiskSource getRiskSource() const;
    bool riskSourceIsSet() const;
    void unsetriskSource();
    void setRiskSource(const RiskSource& value);

    /// <summary>
    /// 错误码集合
    /// </summary>

    std::vector<std::string>& getErrorCodes();
    bool errorCodesIsSet() const;
    void unseterrorCodes();
    void setErrorCodes(const std::vector<std::string>& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string kind_;
    bool kindIsSet_;
    std::string group_;
    bool groupIsSet_;
    std::string level_;
    bool levelIsSet_;
    std::string phase_;
    bool phaseIsSet_;
    std::string message_;
    bool messageIsSet_;
    RiskSource riskSource_;
    bool riskSourceIsSet_;
    std::vector<std::string> errorCodes_;
    bool errorCodesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PreCheckItemStatus_H_
