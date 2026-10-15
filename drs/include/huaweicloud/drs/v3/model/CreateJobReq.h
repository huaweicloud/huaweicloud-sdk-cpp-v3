
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateJobReq_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/PeriodOrderInfo.h>
#include <huaweicloud/drs/v3/model/PublicIpConfig.h>
#include <huaweicloud/drs/v3/model/ResourceTag.h>
#include <string>
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
/// 创建任务请求体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  CreateJobReq
    : public ModelBase
{
public:
    CreateJobReq();
    virtual ~CreateJobReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateJobReq members

    /// <summary>
    /// **参数解释**：  是否绑定EIP（弹性公网IP）。  **约束限制**：  网络类型为EIP时必填且为true。  **取值范围**：  - true：绑定EIP - false：不绑定EIP  **默认取值**：  不涉及
    /// </summary>

    bool isBindEip() const;
    bool bindEipIsSet() const;
    void unsetbindEip();
    void setBindEip(bool value);

    /// <summary>
    /// **参数解释**：  迁移任务的业务场景类型。  **约束限制**：  不涉及。  **取值范围**：  - migration：实时迁移 - sync：实时同步 - cloudDataGuard：实时灾备  **默认取值**：  不涉及
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务名称。  **约束限制**：  - 必须以字母开头，不区分大小写，可以包含字母、数字、中划线或下划线，不能包括其他特殊字符。  **取值范围**：  长度为4-50个字符。  **默认取值**：  不涉及
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务描述。  **约束限制**：  不能超过256位，且不能包含!&lt;&gt;&amp;&#39;\&quot;特殊字符。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS任务引擎类型。  **约束限制**：  不涉及。  **取值范围**：  - mysql：MySQL到MySQL迁移，MySQL到MySQL同步 - mongodb：MongoDB到DDS迁移与同步 - cloudDataGuard-mysql：MySQL到MySQL灾备 - gaussdbv5：GaussDB同步 - postgresql：PostgreSQL到PostgreSQL同步 - mysql-to-kafka：MySQL到Kafka同步 - taurus-to-kafka：TaurusDB到Kafka同步 - gaussdbv5ha-to-kafka：GaussDB集中式版到Kafka同步 - oracle-to-gaussdbv5：Oracle-GaussDB分布式版 - oracle-to-gaussdbv5ha：Oracle-GaussDB集中式版 - gaussdbv5-to-oracle：GaussDB分布式版-Oracle - gaussdbv5ha-to-oracle：GaussDB集中式版-Oracle - gaussdbv5-to-kafka：GaussDB分布式版-Kafka  详细取值可参考引擎类型说明。  **默认取值**：  不涉及
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// **参数解释**：  指定目标实例是否限制为只读。  **约束限制**：  - MySQL迁移和灾备，且job_direction为up时设置有效。 - 灾备场景下，单主灾备且本云为备为必填且为true，不填默认设置为true。  **取值范围**：  - true：目标实例限制为只读 - false：目标实例不限制为只读  **默认取值**：  不涉及
    /// </summary>

    bool isIsTargetReadonly() const;
    bool isTargetReadonlyIsSet() const;
    void unsetisTargetReadonly();
    void setIsTargetReadonly(bool value);

    /// <summary>
    /// **参数解释**：  任务的迁移方向。  **约束限制**：  不涉及。  **取值范围**：  - up：入云，灾备场景时对应本云为备 - down：出云，灾备场景时对应本云为主 - non-dbs：自建  **默认取值**：  不涉及
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// **参数解释**：  是否为双主灾备模式。  **约束限制**：  - db_use_type为cloudDataGuard时必填。 - db_use_type为其他类型时为非必选参数。  **取值范围**：  - true：双主灾备 - false：非双主灾备  **默认取值**：  false
    /// </summary>

    bool isMultiWrite() const;
    bool multiWriteIsSet() const;
    void unsetmultiWrite();
    void setMultiWrite(bool value);

    /// <summary>
    /// **参数解释**：  任务使用的网络类型。  **约束限制**：  灾备场景不支持选择VPC网络。  **取值范围**：  - vpn：虚拟专用网络 - vpc：虚拟私有云 - eip：弹性公网IP  **默认取值**：  不涉及
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// **参数解释**：  节点个数。MongoDB数据库时对应源端分片个数，源库为集群时必填。MySQL双主灾备时会默认设置为2。  **约束限制**：  不涉及。  **取值范围**：  1-32  **默认取值**：  不涉及
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// **参数解释**：  DRS任务实例规格编码，决定迁移实例的计算资源大小。  **约束限制**：  不涉及。  **取值范围**：  - micro：极小规格 - small：小规格 - medium：中规格 - high：大规格 - xlarge：超大规格 - 2xlarge：极大规格  具体某种场景支持的取值可以通过查询可用的Node规格接口获取。  **默认取值**：  high
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

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
    /// **参数解释**：  标签信息列表，详情请参见ResourceTag对象定义。  **约束限制**：  最多添加20个标签。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// **参数解释**：  任务迁移模式，指定数据复制任务的执行方式。  **约束限制**：  单主灾备场景仅支持选择全量加增量（FULL_INCR_TRANS）。  **取值范围**：  - FULL_TRANS：全量迁移，仅迁移历史数据 - FULL_INCR_TRANS：全量+增量迁移，先迁移历史数据再持续同步增量 - INCR_TRANS：增量迁移，仅同步数据变更  **默认取值**：  FULL_INCR_TRANS
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// **参数解释**：  DRS实例所在子网ID，对应目标库相同VPC下已创建的子网（subnet）的网络ID。  **约束限制**：  UUID格式。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getCustomizeSutnetId() const;
    bool customizeSutnetIdIsSet() const;
    void unsetcustomizeSutnetId();
    void setCustomizeSutnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：  产品ID，用于标识包年包月任务对应的产品。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// **参数解释**：  企业项目标签列表，详情请参见ResourceTag对象定义。  **约束限制**：  - 不填默认为default。 - key值必须为_sys_enterprise_project_id，value为企业项目ID。 - 只能填一个企业项目。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<ResourceTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// **参数解释**：  任务处于异常状态一段时间后自动结束的天数。  **约束限制**：  不涉及。  **取值范围**：  14-100  **默认取值**：  14
    /// </summary>

    std::string getExpiredDays() const;
    bool expiredDaysIsSet() const;
    void unsetexpiredDays();
    void setExpiredDays(const std::string& value);

    /// <summary>
    /// **参数解释**：  主备任务主任务所在可用区编码，可以通过查询规格未售罄的可用区接口获取。  **约束限制**：  - master_az和slave_az同时填写时生效。 - 目前支持mysql，gaussdbv5ha-to-kafka。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getMasterAz() const;
    bool masterAzIsSet() const;
    void unsetmasterAz();
    void setMasterAz(const std::string& value);

    /// <summary>
    /// **参数解释**：  主备任务备任务所在可用区编码，可以通过查询规格未售罄的可用区接口获取。  **约束限制**：  - master_az和slave_az同时填写时生效。 - 目前支持mysql，gaussdbv5ha-to-kafka。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::string getSlaveAz() const;
    bool slaveAzIsSet() const;
    void unsetslaveAz();
    void setSlaveAz(const std::string& value);

    /// <summary>
    /// **参数解释**：  任务的计费模式，指定数据复制任务的付费方式。  **约束限制**：  - db_use_type为migration时不支持包年包月。 - 支持的engine_type为：mysql，cloudDataGuard-mysql，postgresql，gaussdbv5ha-to-kafka。  **取值范围**：  - period：包年包月 - on_demand：按需计费  **默认取值**：  on_demand
    /// </summary>

    std::string getChargingMode() const;
    bool chargingModeIsSet() const;
    void unsetchargingMode();
    void setChargingMode(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    PeriodOrderInfo getPeriodOrder() const;
    bool periodOrderIsSet() const;
    void unsetperiodOrder();
    void setPeriodOrder(const PeriodOrderInfo& value);

    /// <summary>
    /// **参数解释**：  指定公网IP的信息列表，详情请参见PublicIpConfig对象定义。  **约束限制**：  不涉及。  **取值范围**：  不涉及。  **默认取值**：  不涉及
    /// </summary>

    std::vector<PublicIpConfig>& getPublicIpList();
    bool publicIpListIsSet() const;
    void unsetpublicIpList();
    void setPublicIpList(const std::vector<PublicIpConfig>& value);

    /// <summary>
    /// **参数解释**：  是否开启云数据库RDS for MySQL或MariaDB的Binlog快速清理。  **约束限制**：  不涉及。  **取值范围**：  - true：开启Binlog快速清理 - false：不开启Binlog快速清理  **默认取值**：  false
    /// </summary>

    bool isIsOpenFastClean() const;
    bool isOpenFastCleanIsSet() const;
    void unsetisOpenFastClean();
    void setIsOpenFastClean(bool value);


protected:
    bool bindEip_;
    bool bindEipIsSet_;
    std::string dbUseType_;
    bool dbUseTypeIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string description_;
    bool descriptionIsSet_;
    std::string engineType_;
    bool engineTypeIsSet_;
    bool isTargetReadonly_;
    bool isTargetReadonlyIsSet_;
    std::string jobDirection_;
    bool jobDirectionIsSet_;
    bool multiWrite_;
    bool multiWriteIsSet_;
    std::string netType_;
    bool netTypeIsSet_;
    int32_t nodeNum_;
    bool nodeNumIsSet_;
    std::string nodeType_;
    bool nodeTypeIsSet_;
    Endpoint sourceEndpoint_;
    bool sourceEndpointIsSet_;
    Endpoint targetEndpoint_;
    bool targetEndpointIsSet_;
    std::vector<ResourceTag> tags_;
    bool tagsIsSet_;
    std::string taskType_;
    bool taskTypeIsSet_;
    std::string customizeSutnetId_;
    bool customizeSutnetIdIsSet_;
    std::string productId_;
    bool productIdIsSet_;
    std::vector<ResourceTag> sysTags_;
    bool sysTagsIsSet_;
    std::string expiredDays_;
    bool expiredDaysIsSet_;
    std::string masterAz_;
    bool masterAzIsSet_;
    std::string slaveAz_;
    bool slaveAzIsSet_;
    std::string chargingMode_;
    bool chargingModeIsSet_;
    PeriodOrderInfo periodOrder_;
    bool periodOrderIsSet_;
    std::vector<PublicIpConfig> publicIpList_;
    bool publicIpListIsSet_;
    bool isOpenFastClean_;
    bool isOpenFastCleanIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateJobReq_H_
