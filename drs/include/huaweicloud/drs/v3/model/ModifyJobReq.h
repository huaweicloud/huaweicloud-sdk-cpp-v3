
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyJobReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/ResourceTag.h>
#include <string>
#include <huaweicloud/drs/v3/model/AlarmNotifyInfo.h>
#include <vector>
#include <huaweicloud/drs/v3/model/Endpoint.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 修改任务描述信息、名称，设置异常通知信息。
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ModifyJobReq
    : public ModelBase
{
public:
    ModifyJobReq();
    virtual ~ModifyJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ModifyJobReq members

    /// <summary>
    /// **参数解释**：  迁移任务ID，用于唯一标识一个数据复制任务，在修改任务时作为任务的识别凭证。  **约束限制**：  不涉及。  **取值范围**：  UUID格式字符串。  **默认取值**：  不涉及
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务描述，用于补充说明任务的用途或备注信息。  **约束限制**：  - 修改任务描述时必填。 - 长度为0-256个字符。 - 不能包含!&lt;&gt;&amp;&#39;\&quot;特殊字符。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称，用于标识和区分不同的数据复制任务。  **约束限制**：  - 需要修改任务名称时填写。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AlarmNotifyInfo getAlarmNotify() const;
    bool alarmNotifyIsSet() const;
    void unsetalarmNotify();
    void setAlarmNotify(const AlarmNotifyInfo& value);

    /// <summary>
    /// **参数解释**：  任务迁移模式，指定数据复制任务的执行方式。  **约束限制**：  - 目前仅支持MySQL到TaurusDB同步任务在配置中或者增量中时修改。  **取值范围**：  - FULL_TRANS：全量迁移，仅迁移历史数据 - FULL_INCR_TRANS：全量+增量迁移，先迁移历史数据再持续同步增量 - INCR_TRANS：增量迁移，仅同步数据变更  **默认取值**：  不涉及
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Endpoint getSourceEndpoint() const;
    bool sourceEndpointIsSet() const;
    void unsetsourceEndpoint();
    void setSourceEndpoint(const Endpoint& value);

    /// <summary>
    /// 
    /// </summary>

    Endpoint getTargetEndpoint() const;
    bool targetEndpointIsSet() const;
    void unsettargetEndpoint();
    void setTargetEndpoint(const Endpoint& value);

    /// <summary>
    /// **参数解释**：  DRS任务实例规格编码，决定迁移实例的计算资源大小，测试连接之后修改调用时必填。  **约束限制**：  - 测试连接之后修改调用时必填。 - 具体某种场景支持的取值可以通过查询可用的Node规格获取。  **取值范围**：  - micro：极小规格 - small：小规格 - medium：中规格 - high：大规格 - xlarge：超大规格 - 2xlarge：极大规格  **默认取值**：  high
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS任务引擎类型，测试连接之后修改调用时必填。  **约束限制**：  - 测试连接之后修改调用时必填。 - 详细取值可参考引擎类型说明。  **取值范围**：  - mysql：MySQL到MySQL迁移，MySQL到MySQL同步 - mongodb：MongoDB到DDS迁移与同步 - cloudDataGuard-mysql：MySQL到MySQL灾备 - gaussdbv5：GaussDB同步 - mysql-to-kafka：MySQL到Kafka同步 - taurus-to-kafka：TaurusDB到Kafka同步 - gaussdbv5ha-to-kafka：GaussDB集中式版到Kafka同步 - postgresql：PostgreSQL到PostgreSQL同步 - oracle-to-gaussdbv5：Oracle-GaussDB分布式版 - oracle-to-gaussdbv5ha：Oracle-GaussDB集中式版 - gaussdbv5-to-oracle：GaussDB分布式版-Oracle - gaussdbv5ha-to-oracle：GaussDB集中式版-Oracle - gaussdbv5-to-kafka：GaussDB分布式版-Kafka  **默认取值**：  不涉及
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务使用的网络类型，测试连接之后调用必填。  **约束限制**：  - 测试连接之后调用必填。  **取值范围**：  - vpn：虚拟专用网络 - vpc：虚拟私有云 - eip：弹性公网IP  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否保存数据库信息，测试连接之后调用必填。  **约束限制**：  - 测试连接之后调用必填。  **取值范围**：  - true：保存数据库信息 - false：不保存数据库信息  **默认取值**：  不涉及
    /// </summary>

    bool isStoreDbInfo() const;
    bool storeDbInfoIsSet() const;
    void unsetstoreDbInfo();
    void setStoreDbInfo(bool value);

    /// <summary>
    /// **参数解释**：  是否为重建任务。  **约束限制**：  不涉及。  **取值范围**：  - true：重建任务 - false：非重建任务  **默认取值**：  不涉及
    /// </summary>

    bool isIsRecreate() const;
    bool isRecreateIsSet() const;
    void unsetisRecreate();
    void setIsRecreate(bool value);

    /// <summary>
    /// **参数解释**：  任务的迁移方向，测试连接之后调用必填。  **约束限制**：  - 测试连接之后调用必填。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// **参数解释**：  指定目标数据库实例在迁移过程中是否限制为只读状态。  **约束限制**：  不涉及。  **取值范围**：  - true：目标实例限制为只读 - false：目标实例不限制为只读  **默认取值**：  不涉及
    /// </summary>

    bool isIsTargetReadonly() const;
    bool isTargetReadonlyIsSet() const;
    void unsetisTargetReadonly();
    void setIsTargetReadonly(bool value);

    /// <summary>
    /// **参数解释**：  所有Definer是否迁移到该用户下，MySQL数据库支持该设置，测试连接之后修改调用时必填。  **约束限制**：  - 测试连接之后修改调用时必填。  **取值范围**：  - true：迁移后，所有源数据库对象的Definer都会迁移至该用户下，其他用户需要授权后才具有数据库对象权限 - false：迁移后，将保持源数据库对象Definer定义不变，选择此选项，需要配合下一步用户权限迁移功能，将源数据库的用户全部迁移，这样才能保持源数据库的权限体系完全不变  **默认取值**：  不涉及
    /// </summary>

    bool isReplaceDefiner() const;
    bool replaceDefinerIsSet() const;
    void unsetreplaceDefiner();
    void setReplaceDefiner(bool value);

    /// <summary>
    /// **参数解释**：  标签信息，用于给任务添加标识以便分类管理，详情请参见ResourceTag对象定义。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// **参数解释**：  迁移任务的业务场景类型。  **约束限制**：  不涉及。  **取值范围**：  - migration：实时迁移 - sync：实时同步 - cloudDataGuard：实时灾备  **默认取值**：  不涉及
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// **参数解释**：  产品ID，用于标识包周期任务的产品信息。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;
    AlarmNotifyInfo alarmNotify_;
    bool alarmNotifyIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    Endpoint sourceEndpoint_;
    bool sourceEndpointIsSet_;
    Endpoint targetEndpoint_;
    bool targetEndpointIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    bool storeDbInfo_;
    bool storeDbInfoIsSet_;
    bool isRecreate_;
    bool isRecreateIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    bool isTargetReadonly_;
    bool isTargetReadonlyIsSet_;
    bool replaceDefiner_;
    bool replaceDefinerIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::string dbUseType_;
    bool dbUseTypeIsSet_;
    std::string productId_;
    bool productIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyJobReq_H_
