
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_JobBaseInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_JobBaseInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/drs/v5/model/ResourceTag.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建任务基本信息体。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  JobBaseInfo
    : public ModelBase
{
public:
    JobBaseInfo();
    virtual ~JobBaseInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// JobBaseInfo members

    /// <summary>
    /// **参数解释**：  任务名称，用于标识和区分不同的数据复制任务。  **约束限制**：  - 长度在4到50位之间，不区分大小写。 - 可以包含字母、数字、中划线或下划线，不能包括其他特殊字符。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS任务场景类型，用于区分不同的数据复制场景。  **约束限制**：  不涉及。  **取值范围**：  - migration：实时迁移 - sync：实时同步  **默认取值**：  不涉及
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);

    /// <summary>
    /// **参数解释**：  灾备类型是否双主灾备，指定灾备场景下是否启用双向写入功能。  **约束限制**：  - job_type为cloudDataGuard时必填。  **取值范围**：  - true：双主灾备 - false：非双主灾备  **默认取值**：  false
    /// </summary>

    bool isMultiWrite() const;
    bool multiWriteIsSet() const;
    void unsetmultiWrite();
    void setMultiWrite(bool value);

    /// <summary>
    /// **参数解释**：  DRS任务引擎类型。  **约束限制**：  不涉及。  **取值范围**：  - oracle-to-gaussdbv5：Oracle同步到GaussDB分布式版，实时同步场景使用 - redis-to-gaussredis：Redis同步到GeminiDB Redis，实时迁移场景使用 - rediscluster-to-gaussredis：Redis集群同步到GeminiDB Redis，实时迁移场景使用 - mysql-to-mysql：MySQL同步到MySQL，实时同步场景使用  **默认取值**：  不涉及
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的迁移方向。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务迁移模式，指定数据复制任务的执行方式。  **约束限制**：  不涉及。  **取值范围**：  - FULL_TRANS：全量迁移，仅迁移历史数据 - FULL_INCR_TRANS：全量+增量迁移，先迁移历史数据再持续同步增量 - INCR_TRANS：增量迁移，仅同步数据变更  **默认取值**：  不涉及
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的网络类型。  **约束限制**：  - 灾备场景不支持选择VPC网络。  **取值范围**：  - eip：公网网络 - vpc：VPC网络 - vpn：VPN、专线网络  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的计费模式，指定数据复制任务的付费方式。  **约束限制**：  不涉及。  **取值范围**：  - period：包周期 - on_demand：按需  **默认取值**：  on_demand
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// **参数解释**：  企业项目ID，用于按企业项目过滤查询结果。  **约束限制**：  - 不传值时设置为null，不能设置为空字符串。 - 当企业项目开关打开时，可以传值。  **取值范围**：  不涉及。  **默认取值**：  \&quot;0\&quot;，表示default企业项目
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务描述，用于对数据复制任务添加补充说明信息。  **约束限制**：  - 长度不能超过256位。 - 不能包含!&lt;&gt;&amp;&#39;\&quot;\\特殊字符。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务定时启动时间，设置后任务将在指定时间自动启动。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 任务处于异常状态一段时间后，将会自动结束。单位为天。(范围14-100)，不传默认为14天。
    /// </summary>

    std::string getExpiredDays() const;
    bool expiredDaysIsSet() const;
    void unsetexpiredDays();
    void setExpiredDays(const std::string& value);

    /// <summary>
    /// **参数解释**：  标签信息，用于为数据复制任务添加标签以便分类管理。  **约束限制**：  - 最多添加10个标签。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// **参数解释**：  是否开启云数据库RDS for MySQL/MariaDB的binlog快速清理，开启后可自动清理已同步的binlog以释放磁盘空间。  **约束限制**：  - 仅MySQL/MariaDB引擎类型适用。  **取值范围**：  - true：开启binlog快速清理 - false：不开启binlog快速清理  **默认取值**：  false
    /// </summary>

    bool isIsOpenFastClean() const;
    bool isOpenFastCleanIsSet() const;
    void unsetisOpenFastClean();
    void setIsOpenFastClean(bool value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;
    bool multiWrite_;
    bool multiWriteIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string expiredDays_;
    bool expiredDaysIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    bool isOpenFastClean_;
    bool isOpenFastCleanIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_JobBaseInfo_H_
