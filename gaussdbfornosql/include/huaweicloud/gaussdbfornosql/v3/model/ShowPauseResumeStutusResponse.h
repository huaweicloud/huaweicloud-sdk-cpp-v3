
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowPauseResumeStutusResponse_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowPauseResumeStutusResponse_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbfornosql/v3/model/NoSQLDrDateSyncIndicators.h>
#include <string>
#include <huaweicloud/gaussdbfornosql/v3/model/NoSQLDrRpoAndRto.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ShowPauseResumeStutusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowPauseResumeStutusResponse();
    virtual ~ShowPauseResumeStutusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowPauseResumeStutusResponse members

    /// <summary>
    /// 主实例id
    /// </summary>

    std::string getMasterInstanceId() const;
    bool masterInstanceIdIsSet() const;
    void unsetmasterInstanceId();
    void setMasterInstanceId(const std::string& value);

    /// <summary>
    /// 备实例id
    /// </summary>

    std::string getSlaveInstanceId() const;
    bool slaveInstanceIdIsSet() const;
    void unsetslaveInstanceId();
    void setSlaveInstanceId(const std::string& value);

    /// <summary>
    /// 容灾实例数据同步状态 - NA：实例尚未搭建容灾关系 - NEW：尚未启动的数据同步状态 - SYNCING：数据同步正常进行中 - SUSPENDING：正在暂停数据同步 - SUSPENDED：数据同步已暂停 - RECOVERYING：正在恢复数据同步
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    NoSQLDrDateSyncIndicators getDataSyncIndicators() const;
    bool dataSyncIndicatorsIsSet() const;
    void unsetdataSyncIndicators();
    void setDataSyncIndicators(const NoSQLDrDateSyncIndicators& value);

    /// <summary>
    /// 切换或倒换RPO和RTO值，仅当请求实例id为主实例时有值
    /// </summary>

    std::vector<NoSQLDrRpoAndRto>& getRtoAndRpoIndicators();
    bool rtoAndRpoIndicatorsIsSet() const;
    void unsetrtoAndRpoIndicators();
    void setRtoAndRpoIndicators(const std::vector<NoSQLDrRpoAndRto>& value);


protected:
    std::string masterInstanceId_;
    bool masterInstanceIdIsSet_;
    std::string slaveInstanceId_;
    bool slaveInstanceIdIsSet_;
    std::string status_;
    bool statusIsSet_;
    NoSQLDrDateSyncIndicators dataSyncIndicators_;
    bool dataSyncIndicatorsIsSet_;
    std::vector<NoSQLDrRpoAndRto> rtoAndRpoIndicators_;
    bool rtoAndRpoIndicatorsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ShowPauseResumeStutusResponse_H_
