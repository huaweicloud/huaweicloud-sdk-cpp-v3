
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryPreCheckResult_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryPreCheckResult_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/PrecheckResult.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预检查结果信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  QueryPreCheckResult
    : public ModelBase
{
public:
    QueryPreCheckResult();
    virtual ~QueryPreCheckResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QueryPreCheckResult members

    /// <summary>
    /// 返回的预检查结果是否通过。
    /// </summary>

    bool isResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(bool value);

    /// <summary>
    /// 预检查进度百分比。
    /// </summary>

    std::string getProcess() const;
    bool processIsSet() const;
    void unsetprocess();
    void setProcess(const std::string& value);

    /// <summary>
    /// 预检查通过百分比。
    /// </summary>

    std::string getTotalPassedRate() const;
    bool totalPassedRateIsSet() const;
    void unsettotalPassedRate();
    void setTotalPassedRate(const std::string& value);

    /// <summary>
    /// 数据库实例ID。
    /// </summary>

    std::string getRdsInstanceId() const;
    bool rdsInstanceIdIsSet() const;
    void unsetrdsInstanceId();
    void setRdsInstanceId(const std::string& value);

    /// <summary>
    /// 迁移方向。
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 预检查各项结果。
    /// </summary>

    std::vector<PrecheckResult>& getPrecheckResults();
    bool precheckResultsIsSet() const;
    void unsetprecheckResults();
    void setPrecheckResults(const std::vector<PrecheckResult>& value);


protected:
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
    std::vector<PrecheckResult> precheckResults_;
    bool precheckResultsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_QueryPreCheckResult_H_
