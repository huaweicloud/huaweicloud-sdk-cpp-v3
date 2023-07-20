
#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListImmediateJobsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListImmediateJobsRequest_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDB_V3_EXPORT  ListImmediateJobsRequest
    : public ModelBase
{
public:
    ListImmediateJobsRequest();
    virtual ~ListImmediateJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListImmediateJobsRequest members

    /// <summary>
    /// 语言。
    /// </summary>

    std::string getXLanguage() const;
    bool xLanguageIsSet() const;
    void unsetxLanguage();
    void setXLanguage(const std::string& value);

    /// <summary>
    /// 任务执行状态。 取值： - 值为“Running”，表示任务正在执行。 - 值为“Completed”，表示任务执行成功。 - 值为“Failed”，表示任务执行失败。 - 值为“Pending”，表示任务未执行。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务名称。取值有：  - \&quot;CreateGaussDBforMySQLInstance\&quot;表示创建实例。  - \&quot;RestoreGaussDBforMySQLNewInstance\&quot;表示恢复新实例。  - \&quot;AddGaussDBforMySQLNodes\&quot;表示添加节点。  - \&quot;DeleteGaussDBforMySQLNode\&quot;表示删除节点。  - \&quot;RebootGaussDBforMySQLInstance\&quot;表示重启实例。  - \&quot;ModifyGaussDBforMySQLPort\&quot;表示修改实例端口。  - \&quot;ModifyGaussDBforMySQLSecurityGroup\&quot;表示修改实例安全组。  - \&quot;ResizeGaussDBforMySQLFlavor\&quot;表示实例规格变更。  - \&quot;SwitchoverGaussDBforMySQLMasterNode\&quot;表示只读升主。  - \&quot;GaussDBforMySQLBindEIP\&quot;表示绑定弹性公网IP。  - \&quot;GaussDBforMySQLUnbindEIP\&quot;表示解绑弹性公网IP。  - \&quot;RenameGaussDBforMySQLInstance\&quot;表示修改实例名称。  - \&quot;DeleteGaussDBforMySQLInstance\&quot;表示删除实例集群。  - \&quot;UpgradeGaussDBforMySQLDatabaseVersion\&quot;表示版本升级。  - \&quot;EnlargeGaussDBforMySQLProxy\&quot;表示实例的数据库代理节点扩容。  - \&quot;OpenGaussDBforMySQLProxy\&quot;表示开启实例的数据库代理。  - \&quot;CloseGaussDBforMySQLProxy\&quot;表示关闭实例的数据库代理。  - \&quot;GaussdbforMySQLModifyProxyIp\&quot;表示修改数据库代理ip。  - \&quot;ScaleGaussDBforMySQLProxy\&quot;表示实例的数据库代理节点规格变更。  - \&quot;GaussDBforMySQLModifyInstanceMetricExtend\&quot;表示实例秒级监控。  - \&quot;GaussDBforMySQLModifyInstanceDataVip\&quot;表示修改实例数据Vip。  - \&quot;GaussDBforMySQLSwitchSSL\&quot;表示切换实例SSL开关。  - \&quot;GaussDBforMySQLModifyProxyConsist\&quot;表示修改代理一致性。  - \&quot;GaussDBforMySQLModifyProxyWeight\&quot;表示修改代理权重。
    /// </summary>

    std::string getJobName() const;
    bool jobNameIsSet() const;
    void unsetjobName();
    void setJobName(const std::string& value);

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为1，必须为数字，不能为负数。
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 查询记录数。默认为10，取值为10、20、50。
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// 起始时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 结束时间，格式为\&quot;yyyy-mm-ddThh:mm:ssZ\&quot;。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);


protected:
    std::string xLanguage_;
    bool xLanguageIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string jobName_;
    bool jobNameIsSet_;
    std::string jobId_;
    bool jobIdIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListImmediateJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListImmediateJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_MODEL_ListImmediateJobsRequest_H_
