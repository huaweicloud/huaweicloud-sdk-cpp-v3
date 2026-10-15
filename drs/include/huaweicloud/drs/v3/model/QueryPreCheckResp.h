
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryPreCheckResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryPreCheckResp_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/PrecheckResult.h>
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
/// 获取预检查结果返回体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryPreCheckResp
    : public ModelBase
{
public:
    QueryPreCheckResp();
    virtual ~QueryPreCheckResp();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryPreCheckResp members

    /// <summary>
    /// **参数解释**：  查询预检查结果的任务ID，用于唯一标识一个预检查任务。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getPrecheckId() const;
    bool precheckIdIsSet() const;
    void unsetprecheckId();
    void setPrecheckId(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查结果是否通过，标识任务预检查的整体通过情况。  **约束限制**：  不涉及。  **取值范围**：  - true：预检查通过，通过后才可进行启动任务 - false：预检查未通过，需查看precheck_result中的具体失败项  **默认取值**：  不涉及
    /// </summary>

    bool isResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(bool value);

    /// <summary>
    /// **参数解释**：  预检查进度百分比，表示预检查任务的执行进度。  **约束限制**：  不涉及。  **取值范围**：  0%-100%。  **默认取值**：  不涉及
    /// </summary>

    std::string getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const std::string& value);

    /// <summary>
    /// **参数解释**：  预检查通过百分比，表示预检查项中通过的占比。  **约束限制**：  不涉及。  **取值范围**：  0%-100%。  **默认取值**：  不涉及
    /// </summary>

    std::string getTotalPassedRate() const;
    bool totalPassedRateIsSet() const;
    void unsettotalPassedRate();
    void setTotalPassedRate(const std::string& value);

    /// <summary>
    /// **参数解释**：  RDS实例ID，用于标识关联的华为云RDS数据库实例。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getRdsInstanceId() const;
    bool rdsInstanceIdIsSet() const;
    void unsetrdsInstanceId();
    void setRdsInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的迁移方向。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 预检查各项结果。
    /// </summary>

    std::vector<PrecheckResult>& getPrecheckResult();
    bool precheckResultIsSet() const;
    void unsetprecheckResult();
    void setPrecheckResult(const std::vector<PrecheckResult>& value);

    /// <summary>
    /// **参数解释**：  错误详细信息，当任务执行失败时返回的具体错误描述。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// **参数解释**：  错误码，当任务报错时返回的错误代码。  **约束限制**：  不涉及。  **取值范围**：  格式为DRS.XXXXXX。  **默认取值**：  不涉及
    /// </summary>

    std::string getErrorCode() const;
    bool errorCodeIsSet() const;
    void unseterrorCode();
    void setErrorCode(const std::string& value);


protected:
    std::string precheckId_;
    bool precheckIdIsSet_;
    bool result_;
    bool resultIsSet_;
    std::string process_;
    bool processIsSet_;
    std::string totalPassedRate_;
    bool totalPassedRateIsSet_;
    std::string rdsInstanceId_;
    bool rdsInstanceIdIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::vector<PrecheckResult> precheckResult_;
    bool precheckResultIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string errorCode_;
    bool errorCodeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryPreCheckResp_H_
