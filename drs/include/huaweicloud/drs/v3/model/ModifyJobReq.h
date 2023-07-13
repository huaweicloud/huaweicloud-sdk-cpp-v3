
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyJobReq_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ModifyJobReq_H_

#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// 修改任务描述信息、名称，设置异常通知信息、限速等。
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
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 任务描述，修改任务描述时必填。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 任务名称，修改任务名称时必填
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
    /// 任务模式，FULL_TRANS：全量；FULL_INCR_TRANS：全量+增量；INCR_TRANS：增量。
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
    /// node规格类型，测试连接之后修改调用时必填。
    /// </summary>

    std::string getNodeType() const;
    bool nodeTypeIsSet() const;
    void unsetnodeType();
    void setNodeType(const std::string& value);

    /// <summary>
    /// 引擎类型，测试连接之后修改调用时必填。mysql：迁移，同步使用。mongodb：迁移使用。cloudDataGuard-mysql：灾备使用
    /// </summary>

    std::string getEngineType() const;
    bool engineTypeIsSet() const;
    void unsetengineType();
    void setEngineType(const std::string& value);

    /// <summary>
    /// 网络类型，测试连接之后修改调用时必填。
    /// </summary>

    std::string getNetType() const;
    bool netTypeIsSet() const;
    void unsetnetType();
    void setNetType(const std::string& value);

    /// <summary>
    /// 保存数据库信息，测试连接之后修改调用时必填为true。
    /// </summary>

    bool isStoreDbInfo() const;
    bool storeDbInfoIsSet() const;
    void unsetstoreDbInfo();
    void setStoreDbInfo(bool value);

    /// <summary>
    /// 是否为重建任务。
    /// </summary>

    bool isIsRecreate() const;
    bool isRecreateIsSet() const;
    void unsetisRecreate();
    void setIsRecreate(bool value);

    /// <summary>
    /// 迁移方向,up 入云 灾备场景时对应本云为备,down 出云 灾备场景时对应本云为主,non-dbs 自建
    /// </summary>

    std::string getJobDirection() const;
    bool jobDirectionIsSet() const;
    void unsetjobDirection();
    void setJobDirection(const std::string& value);

    /// <summary>
    /// 目标实例是否限制为只读。
    /// </summary>

    bool isIsTargetReadonly() const;
    bool isTargetReadonlyIsSet() const;
    void unsetisTargetReadonly();
    void setIsTargetReadonly(bool value);

    /// <summary>
    /// 所有Definer是否迁移到该用户下，MySQL数据库支持该设置，测试连接之后修改调用时必填。 - true：迁移后，所有源数据库对象的Definer都会迁移至该用户下，其他用户需要授权后才具有数据库对象权限 - false：迁移后，将保持源数据库对象Definer定义不变，选择此选项，需要配合下一步用户权限迁移功能，将源数据库的用户全部迁移，这样才能保持源数据库的权限体系完全不变。
    /// </summary>

    bool isReplaceDefiner() const;
    bool replaceDefinerIsSet() const;
    void unsetreplaceDefiner();
    void setReplaceDefiner(bool value);

    /// <summary>
    /// 标签信息
    /// </summary>

    std::vector<ResourceTag>& getTags();
    bool tagsIsSet() const;
    void unsettags();
    void setTags(const std::vector<ResourceTag>& value);

    /// <summary>
    /// 迁移类型，migration-实时迁移,sync-实时同步,cloudDataGuard-实时灾备
    /// </summary>

    std::string getDbUseType() const;
    bool dbUseTypeIsSet() const;
    void unsetdbUseType();
    void setDbUseType(const std::string& value);

    /// <summary>
    /// 产品ID。
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
