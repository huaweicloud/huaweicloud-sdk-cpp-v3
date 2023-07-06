
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateJobReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/drs/v3/model/PeriodOrderInfo.h>
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
    /// 是否绑定eip，网络类型为eip时必填且为true
    /// </summary>

    bool isBindEip() const;
    bool bindEipIsSet() const;
    void unsetbindEip();
    void setBindEip(bool value);

    /// <summary>
    /// 迁移场景，migration-实时迁移,sync-实时同步,cloudDataGuard-实时灾备
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// 任务名称，约束：任务名称在4位到50位之间，不区分大小写，可以包含字母、数字、中划线或下划线，不能包括其他特殊字符。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 任务描述。  **约束**：任务描述不能超过256位，且不能包含!&lt;&gt;&amp;&#39;\&quot;\\特殊字符。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 引擎类型 - mysql：迁移，同步使用 - mongodb：迁移使用 - cloudDataGuard-mysql：灾备使用 - gaussdbv5，postgresql：同步使用
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 指定目标实例是否限制为只读，MySQL迁移和灾备，且job_direction为up时设置有效。（灾备场景下，单主灾备且本云为备为必填且为true，不填默认设置为true）。
    /// </summary>

    bool isIsTargetReadonly() const;
    bool isTargetReadonlyIsSet() const;
    void unsetisTargetReadonly();
    void setIsTargetReadonly(bool value);

    /// <summary>
    /// 迁移方向，up ：入云 ，灾备场景时对应本云为备，down：出云，灾备场景时对应本云为主，non-dbs：自建
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// - db_use_type 是cloudDataGuard时，必填，灾备类型是双主灾备时 muti_write取值true, 否则为false。 - db_use_type 是其他类型时，muti_write是非必选参数
    /// </summary>

    bool isMultiWrite() const;
    bool multiWriteIsSet() const;
    void unsetmultiWrite();
    void setMultiWrite(bool value);

    /// <summary>
    /// 网络类型
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 节点个数。MongoDB数据库时对应源端分片个数，源库为集群时必填，[1-32]，MySQL双主灾备时会默认设置为2。
    /// </summary>

    int32_t getNodeNum() const;
    bool nodeNumIsSet() const;
    void unsetnodeNum();
    void setNodeNum(int32_t value);

    /// <summary>
    /// 规格类型。
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
    /// 标签信息。
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 迁移模式，FULL_TRANS 全量,FULL_INCR_TRANS 全量+增量,INCR_TRANS 增量，灾备场景单主灾备仅支持全量加增量（FULL_INCR_TRANS）
    /// </summary>

    std::string getTaskType() const;
    bool taskTypeIsSet() const;
    void unsettaskType();
    void setTaskType(const std::string& value);

    /// <summary>
    /// DRS实例所在子网ID，对应目标库相同VPC下已创建的子网（subnet）的网络ID，UUID格式。
    /// </summary>

    std::string getCustomizeSutnetId() const;
    bool customizeSutnetIdIsSet() const;
    void unsetcustomizeSutnetId();
    void setCustomizeSutnetId(const std::string& value);

    /// <summary>
    /// 产品id。
    /// </summary>

    std::string getProductId() const;
    bool productIdIsSet() const;
    void unsetproductId();
    void setProductId(const std::string& value);

    /// <summary>
    /// 企业项目，不填默认为default，key值必须为_sys_enterprise_project_id，value为企业项目ID，只能有一个企业项目。
    /// </summary>

    std::vector<ResourceTag>& getSysTags();
    bool sysTagsIsSet() const;
    void unsetsysTags();
    void setSysTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 任务处于异常状态一段时间后，将会自动结束，单位为天。(范围14-100)，不传默认为14天。
    /// </summary>

    std::string getExpiredDays() const;
    bool expiredDaysIsSet() const;
    void unsetexpiredDays();
    void setExpiredDays(const std::string& value);

    /// <summary>
    /// 主备任务主任务所在可用区code，可以通过查询规格未售罄的可用区接口获取 - master_az和slave_az同时填写时生效 - 目前支持mysql，gaussdbv5ha-to-kafka
    /// </summary>

    std::string getMasterAz() const;
    bool masterAzIsSet() const;
    void unsetmasterAz();
    void setMasterAz(const std::string& value);

    /// <summary>
    /// 主备任务备任务所在可用区code，可以通过查询规格未售罄的可用区接口获取 - master_az和slave_az同时填写时生效 - 目前支持mysql，gaussdbv5ha-to-kafka
    /// </summary>

    std::string getSlaveAz() const;
    bool slaveAzIsSet() const;
    void unsetslaveAz();
    void setSlaveAz(const std::string& value);

    /// <summary>
    /// 计费模式，不填默认为按需计费。 取值范围： - period：包年包月。 - on_demand：按需计费。
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

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_CreateJobReq_H_
