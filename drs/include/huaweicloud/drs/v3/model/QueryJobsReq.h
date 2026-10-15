
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobsReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobsReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询任务列表请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  QueryJobsReq
    : public ModelBase
{
public:
    QueryJobsReq();
    virtual ~QueryJobsReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QueryJobsReq members

    /// <summary>
    /// **参数解释**：  当前页码，用于分页查询时指定返回第几页的数据。填0可获取全部数据项。  **约束限制**：  - 当per_page填0时，cur_page只能填0或1。  **取值范围**：  不涉及。  **默认取值**：  1
    /// </summary>

    int32_t getCurPage() const;
    bool curPageIsSet() const;
    void unsetcurPage();
    void setCurPage(int32_t value);

    /// <summary>
    /// **参数解释**：  每页返回的记录数，用于分页查询时控制每页数据量。  **约束限制**：  - 填0时，cur_page只能填0或1。  **取值范围**：  0-100。  **默认取值**：  10
    /// </summary>

    int32_t getPerPage() const;
    bool perPageIsSet() const;
    void unsetperPage();
    void setPerPage(int32_t value);

    /// <summary>
    /// **参数解释**：  迁移任务的业务场景类型。  **约束限制**：  不涉及。  **取值范围**：  - migration：实时迁移 - sync：实时同步 - cloudDataGuard：实时灾备  **默认取值**：  不涉及
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS任务引擎类型。  **约束限制**：  不涉及。  **取值范围**：  - mysql：MySQL到MySQL迁移，MySQL到MySQL同步 - mongodb：MongoDB到DDS迁移与同步 - cloudDataGuard-mysql：MySQL到MySQL灾备 - gaussdbv5：GaussDB同步 - mysql-to-kafka：MySQL到Kafka同步 - taurus-to-kafka：TaurusDB到Kafka同步 - gaussdbv5ha-to-kafka：GaussDB集中式版到Kafka同步 - postgresql：PostgreSQL到PostgreSQL同步  **默认取值**：  不涉及
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// **参数解释**：  企业项目ID，用于按企业项目过滤查询结果。  **约束限制**：  - 不传值时设置为null，不能设置为空字符串。 - 当企业项目开关打开时，可以传值。  **取值范围**：  不涉及。  **默认取值**：  null
    /// </summary>

    std::string getEnterpriseProjectId() const;
    bool enterpriseProjectIdIsSet() const;
    void unsetenterpriseProjectId();
    void setEnterpriseProjectId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称或ID，用于按任务名称或ID过滤查询结果。支持传入多个任务ID，逗号分隔，最多100个。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的网络类型。  **约束限制**：  不涉及。  **取值范围**：  - vpn：虚拟专用网络 - vpc：虚拟私有云 - eip：弹性公网IP  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  服务名称，开启EPS（企业项目服务）时使用。  **约束限制**：  不涉及。  **取值范围**：  - eps：企业项目服务  **默认取值**：  不涉及
    /// </summary>

    std::string getServiceName() const;
    bool serviceNameIsSet() const;
    void unsetserviceName();
    void setServiceName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务当前运行状态，用于按任务状态过滤查询结果。  **约束限制**：  不涉及。  **取值范围**：  - CREATING：创建中 - CREATE_FAILED：创建失败 - CONFIGURATION：配置中 - STARTJOBING：启动中 - WAITING_FOR_START：等待启动中 - START_JOB_FAILED：启动失败 - PAUSING：已暂停 - FULL_TRANSFER_STARTED：全量开始，灾备场景下为初始化 - FULL_TRANSFER_FAILED：全量失败，灾备场景下为初始化失败 - FULL_TRANSFER_COMPLETE：全量完成，灾备场景下为初始化完成 - INCRE_TRANSFER_STARTED：增量开始，灾备场景下为灾备中 - INCRE_TRANSFER_FAILED：增量失败，灾备场景下为灾备异常 - RELEASE_RESOURCE_STARTED：结束任务中 - RELEASE_RESOURCE_FAILED：结束任务失败 - RELEASE_RESOURCE_COMPLETE：已结束 - REBUILD_NODE_STARTED：故障恢复中 - REBUILD_NODE_FAILED：故障恢复失败 - CHANGE_JOB_STARTED：任务变更中 - CHANGE_JOB_FAILED：任务变更失败 - DELETED：已删除 - CHILD_TRANSFER_STARTING：再编辑子任务启动中 - CHILD_TRANSFER_STARTED：再编辑子任务迁移中 - CHILD_TRANSFER_COMPLETE：再编辑子任务迁移完成 - CHILD_TRANSFER_FAILED：再编辑子任务迁移失败 - RELEASE_CHILD_TRANSFER_STARTED：再编辑子任务结束中 - RELEASE_CHILD_TRANSFER_COMPLETE：再编辑子任务已结束 - NODE_UPGRADE_START：升级开始 - NODE_UPGRADE_COMPLETE：升级完成 - NODE_UPGRADE_FAILED：升级失败  **默认取值**：  不涉及
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// **参数解释**：  标签信息，用于按标签过滤查询结果，格式为key/value键值对。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::map<std::string, std::string>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::map<std::string, std::string>& value);

    /// <summary>
    /// **参数解释**：  数据库实例ID列表，用于按数据库实例过滤查询结果。  **约束限制**：  - 最多支持10个实例ID。  **取值范围**：  不涉及。  **默认取值**：  null，表示不使用数据库实例ID过滤
    /// </summary>

    std::vector<std::string>& getInstanceIds();
    bool instanceIdsIsSet() const;
    void unsetinstanceIds();
    void setInstanceIds(const std::vector<std::string>& value);

    /// <summary>
    /// **参数解释**：  DRS绑定的数据库实例IP，用于按数据库实例IP过滤查询结果。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  空字符串，表示不使用DRS绑定数据库IP过滤
    /// </summary>

    std::string getInstanceIp() const;
    bool instanceIpIsSet() const;
    void unsetinstanceIp();
    void setInstanceIp(const std::string& value);


protected:
    int32_t curPage_;
    bool curPageIsSet_;
    int32_t perPage_;
    bool perPageIsSet_;
    std::string dbUseType_;
    bool dbUseTypeIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string enterpriseProjectId_;
    bool enterpriseProjectIdIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    std::string serviceName_;
    bool serviceNameIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::map<std::string, std::string> tags_;
    bool tagsIsSet_;
    std::vector<std::string> instanceIds_;
    bool instanceIdsIsSet_;
    std::string instanceIp_;
    bool instanceIpIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_QueryJobsReq_H_
