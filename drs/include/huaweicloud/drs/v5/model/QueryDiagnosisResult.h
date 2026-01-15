
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/QueryDiagnosisResult_diagnosis_results.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 一键诊断响应体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryDiagnosisResult
    : public ModelBase
{
public:
    QueryDiagnosisResult();
    virtual ~QueryDiagnosisResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryDiagnosisResult members

    /// <summary>
    /// 得分。
    /// </summary>

    int32_t getScore() const;
    bool scoreIsSet() const;
    void unsetscore();
    void setScore(int32_t value);

    /// <summary>
    /// 状态。 INIT：初始化，RUNNING：诊断中，SUCCESS：诊断完成，FAILED：诊断失败
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 进度。
    /// </summary>

    int32_t getProgress() const;
    bool progressIsSet() const;
    void unsetprogress();
    void setProgress(int32_t value);

    /// <summary>
    /// 失败原因。
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 开始时间。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 诊断项总数。
    /// </summary>

    int64_t getTotal() const;
    bool totalIsSet() const;
    void unsettotal();
    void setTotal(int64_t value);

    /// <summary>
    /// 正常数量。
    /// </summary>

    int64_t getNormalCount() const;
    bool normalCountIsSet() const;
    void unsetnormalCount();
    void setNormalCount(int64_t value);

    /// <summary>
    /// 异常数量。
    /// </summary>

    int64_t getAbnormalCount() const;
    bool abnormalCountIsSet() const;
    void unsetabnormalCount();
    void setAbnormalCount(int64_t value);

    /// <summary>
    /// 告警数量。
    /// </summary>

    int64_t getAlarmCount() const;
    bool alarmCountIsSet() const;
    void unsetalarmCount();
    void setAlarmCount(int64_t value);

    /// <summary>
    /// 失败数量。
    /// </summary>

    int64_t getFailureCount() const;
    bool failureCountIsSet() const;
    void unsetfailureCount();
    void setFailureCount(int64_t value);

    /// <summary>
    /// 超时数量。
    /// </summary>

    int64_t getTimeoutCount() const;
    bool timeoutCountIsSet() const;
    void unsettimeoutCount();
    void setTimeoutCount(int64_t value);

    /// <summary>
    /// 诊断结果。
    /// </summary>

    std::vector<QueryDiagnosisResult_diagnosis_results>& getDiagnosisResults();
    bool diagnosisResultsIsSet() const;
    void unsetdiagnosisResults();
    void setDiagnosisResults(const std::vector<QueryDiagnosisResult_diagnosis_results>& value);


protected:
    int32_t score_;
    bool scoreIsSet_;
    std::string status_;
    bool statusIsSet_;
    int32_t progress_;
    bool progressIsSet_;
    std::string errorMsg_;
    bool errorMsgIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int64_t total_;
    bool totalIsSet_;
    int64_t normalCount_;
    bool normalCountIsSet_;
    int64_t abnormalCount_;
    bool abnormalCountIsSet_;
    int64_t alarmCount_;
    bool alarmCountIsSet_;
    int64_t failureCount_;
    bool failureCountIsSet_;
    int64_t timeoutCount_;
    bool timeoutCountIsSet_;
    std::vector<QueryDiagnosisResult_diagnosis_results> diagnosisResults_;
    bool diagnosisResultsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryDiagnosisResult_H_
