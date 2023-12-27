
#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListJobsRequest_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListJobsRequest_H_


#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  ListJobsRequest
    : public ModelBase
{
public:
    ListJobsRequest();
    virtual ~ListJobsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListJobsRequest members

    /// <summary>
    /// 任务ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 查询开始时间，默认当前时间往前30天，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始，Z指时区偏移量
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 查询结束时间，默认当前时间，格式为“yyyy-mm-ddThh:mm:ssZ”，且大于查询开始时间，时间跨度不超过30天。 其中，T指某个时间的开始，Z指时区偏移量。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 任务状态： 取值为“Running”为执行中； 取值为“Completed”为完成； 取值为“Failed” 为失败。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 任务名称。对应取值如下： - \&quot;CreateInstance\&quot;：创建实例 - \&quot;RestoreNewInstance\&quot;：恢复到新实例 - \&quot;EnlargeInstance\&quot;：扩容实例 - \&quot;ReduceInstance\&quot;：缩容实例 - \&quot;RestartInstance\&quot;：重启实例 - \&quot;RestartNode\&quot;：重启节点 - \&quot;EnlargeInstanceVolume\&quot;：扩容实例磁盘 - \&quot;ReduceInstanceVolume\&quot;：缩容实例磁盘 - \&quot;ResizeInstance\&quot;：规格变更实例 - \&quot;UpgradeDbVersion\&quot;：升级数据库版本 - \&quot;BindPublicIP\&quot;：绑定公网IP - \&quot;UnbindPublicIP\&quot;：解绑公网IP - \&quot;DeleteInstance\&quot;：删除实例 - \&quot;EnlargeInstanceColdVolume\&quot;：扩容实例冷存储 - \&quot;AddInstanceColdVolume\&quot;：增加实例冷存储 - \&quot;ModifySecurityGroup\&quot;：修改安全组 - \&quot;ModifyCcmCert\&quot;：修改CCM证书 - \&quot;ModifyPort\&quot;：修改端口 - \&quot;ConstructDisasterRecovery\&quot;：构造容灾关系 - \&quot;DeConstructDisasterRecovery\&quot;：解除容灾关系 - \&quot;SwitchOverDisasterRecovery\&quot;：切换容灾关系 - \&quot;BuildBiActiveInstance\&quot;：构建双活实例 - \&quot;ReleaseBiActiveInstance\&quot;：解除双活实例关系 - \&quot;BackupInstance\&quot;：备份实例
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 索引位置，偏移量。从第一条数据偏移offset条数据后开始查询，默认为0（偏移0条数据，表示从第一条数据开始查询），必须为数字，不能为负数。
    /// </summary>

    int32_t getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(int32_t value);

    /// <summary>
    /// 查询记录数。取值 10 20 50 ，默认为50。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t offset_;
    bool offsetIsSet_;
    int32_t limit_;
    bool limitIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListJobsRequest& dereference_from_shared_ptr(std::shared_ptr<ListJobsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_MODEL_ListJobsRequest_H_
