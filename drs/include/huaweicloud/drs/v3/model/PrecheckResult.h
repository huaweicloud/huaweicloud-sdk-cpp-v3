
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckResult_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckResult_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/PrecheckFailSubJobVO.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预检查结果信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PrecheckResult
    : public ModelBase
{
public:
    PrecheckResult();
    virtual ~PrecheckResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PrecheckResult members

    /// <summary>
    /// **参数解释**：  预检查的具体检查项名称，用于标识预检查中执行的具体检查项目。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getItem() const;
    bool itemIsSet() const;
    void unsetitem();
    void setItem(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查项的检查结果，表示该检查项是否通过。  **约束限制**：  不涉及。  **取值范围**：  - PASSED：通过 - ALARM：告警 - FAILED：失败  **默认取值**：  不涉及
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查项的失败原因，当检查结果为FAILED或ALARM时返回的具体失败描述。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getFailedReason() const;
    bool failedReasonIsSet() const;
    void unsetfailedReason();
    void setFailedReason(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查项的加密数据，包含检查项的详细检测数据，以JSON格式加密返回。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getData() const;
    bool dataIsSet() const;
    void unsetdata();
    void setData(const std::string& value);

    /// <summary>
    /// **参数解释**：  原始错误信息，预检查过程中产生的原始错误描述。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getRawErrorMsg() const;
    bool rawErrorMsgIsSet() const;
    void unsetrawErrorMsg();
    void setRawErrorMsg(const std::string& value);

    /// <summary>
    /// **参数解释**：  检查项分组，用于将预检查项按类别归类展示。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getGroup() const;
    bool groupIsSet() const;
    void unsetgroup();
    void setGroup(const std::string& value);

    /// <summary>
    /// **参数解释**：  失败的子任务信息集合，包含预检查中失败的子任务详情，详情请参见PrecheckFailSubJobVO对象定义。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<PrecheckFailSubJobVO>& getFailedSubJobs();
    bool failedSubJobsIsSet() const;
    void unsetfailedSubJobs();
    void setFailedSubJobs(const std::vector<PrecheckFailSubJobVO>& value);


protected:
    std::string item_;
    bool itemIsSet_;
    std::string result_;
    bool resultIsSet_;
    std::string failedReason_;
    bool failedReasonIsSet_;
    std::string data_;
    bool dataIsSet_;
    std::string rawErrorMsg_;
    bool rawErrorMsgIsSet_;
    std::string group_;
    bool groupIsSet_;
    std::vector<PrecheckFailSubJobVO> failedSubJobs_;
    bool failedSubJobsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PrecheckResult_H_
