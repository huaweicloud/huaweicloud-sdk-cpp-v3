
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeReports_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeReports_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  UpgradeReports
    : public ModelBase
{
public:
    UpgradeReports();
    virtual ~UpgradeReports();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeReports members

    /// <summary>
    /// 升级报告ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 升级开始时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 升级结束时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 原实例ID。
    /// </summary>

    std::string getSrcInstanceId() const;
    bool srcInstanceIdIsSet() const;
    void unsetsrcInstanceId();
    void setSrcInstanceId(const std::string& value);

    /// <summary>
    /// 原数据库版本。
    /// </summary>

    std::string getSrcDatabaseVersion() const;
    bool srcDatabaseVersionIsSet() const;
    void unsetsrcDatabaseVersion();
    void setSrcDatabaseVersion(const std::string& value);

    /// <summary>
    /// 目标实例ID。
    /// </summary>

    std::string getDstInstanceId() const;
    bool dstInstanceIdIsSet() const;
    void unsetdstInstanceId();
    void setDstInstanceId(const std::string& value);

    /// <summary>
    /// 目标数据库版本。
    /// </summary>

    std::string getDstDatabaseVersion() const;
    bool dstDatabaseVersionIsSet() const;
    void unsetdstDatabaseVersion();
    void setDstDatabaseVersion(const std::string& value);

    /// <summary>
    /// 升级结果。 success，表示成功。 failed，表示失败。 running， 表示升级中。
    /// </summary>

    std::string getResult() const;
    bool resultIsSet() const;
    void unsetresult();
    void setResult(const std::string& value);

    /// <summary>
    /// 实例内网IP是否改变。 true，表示改变。 false，表示不改变。
    /// </summary>

    bool isIsPrivateIpChanged() const;
    bool isPrivateIpChangedIsSet() const;
    void unsetisPrivateIpChanged();
    void setIsPrivateIpChanged(bool value);

    /// <summary>
    /// 实例内网IP修改时间，格式为“yyyy-mm-ddThh:mm:ssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如偏移1个小时显示为+0100。
    /// </summary>

    std::string getPrivateIpChangeTime() const;
    bool privateIpChangeTimeIsSet() const;
    void unsetprivateIpChangeTime();
    void setPrivateIpChangeTime(const std::string& value);

    /// <summary>
    /// 统计信息收集模式。 before_change_private_ip，修改实例内网IP前收集。 after_change_private_ip，修改实例内网IP后收集。
    /// </summary>

    std::string getStatisticsCollectionMode() const;
    bool statisticsCollectionModeIsSet() const;
    void unsetstatisticsCollectionMode();
    void setStatisticsCollectionMode(const std::string& value);

    /// <summary>
    /// 升级报告详情。
    /// </summary>

    std::string getDetail() const;
    bool detailIsSet() const;
    void unsetdetail();
    void setDetail(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::string srcInstanceId_;
    bool srcInstanceIdIsSet_;
    std::string srcDatabaseVersion_;
    bool srcDatabaseVersionIsSet_;
    std::string dstInstanceId_;
    bool dstInstanceIdIsSet_;
    std::string dstDatabaseVersion_;
    bool dstDatabaseVersionIsSet_;
    std::string result_;
    bool resultIsSet_;
    bool isPrivateIpChanged_;
    bool isPrivateIpChangedIsSet_;
    std::string privateIpChangeTime_;
    bool privateIpChangeTimeIsSet_;
    std::string statisticsCollectionMode_;
    bool statisticsCollectionModeIsSet_;
    std::string detail_;
    bool detailIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_UpgradeReports_H_
