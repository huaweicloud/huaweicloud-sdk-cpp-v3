
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryPreCheckResp_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryPreCheckResp_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
    /// 预检查id。
    /// </summary>

    std::string getPrecheckId() const;
    bool precheckIdIsSet() const;
    void unsetprecheckId();
    void setPrecheckId(const std::string& value);

    /// <summary>
    /// 返回的预检查结果是否通过。true表示预检查通过，通过后才可进行启动任务。
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
    /// RDS实例id。
    /// </summary>

    std::string getRdsInstanceId() const;
    bool rdsInstanceIdIsSet() const;
    void unsetrdsInstanceId();
    void setRdsInstanceId(const std::string& value);

    /// <summary>
    /// 迁移方向。 - up-入云 灾备场景时对应本云为备 - down-出云 灾备场景时对应本云为主 - non-dbs-自建
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
    /// 错误信息
    /// </summary>

    std::string getErrorMsg() const;
    bool errorMsgIsSet() const;
    void unseterrorMsg();
    void setErrorMsg(const std::string& value);

    /// <summary>
    /// 任务错误码。
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
