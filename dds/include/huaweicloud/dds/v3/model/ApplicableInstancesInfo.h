
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_ApplicableInstancesInfo_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_ApplicableInstancesInfo_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/dds/v3/model/EntityInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 可被参数模板应用的实例信息
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  ApplicableInstancesInfo
    : public ModelBase
{
public:
    ApplicableInstancesInfo();
    virtual ~ApplicableInstancesInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ApplicableInstancesInfo members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 实例名称。
    /// </summary>

    std::string getInstanceName() const;
    bool instanceNameIsSet() const;
    void unsetinstanceName();
    void setInstanceName(const std::string& value);

    /// <summary>
    /// 节点组信息或节点信息的列表对象。  当参数模板是集群类型时，如果是shard组或者config组的参数模板，则可应用到的是对应类型的节点组，如果是mongos组的参数模板，则可应用到的是对应类型的的节点。  当参数模板是副本集或单节点类型时，直接应用到对应实例。  例如：一个mongos参数模板可应用到一个或多个mongos节点。
    /// </summary>

    std::vector<EntityInfo>& getEntities();
    bool entitiesIsSet() const;
    void unsetentities();
    void setEntities(const std::vector<EntityInfo>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string instanceName_;
    bool instanceNameIsSet_;
    std::vector<EntityInfo> entities_;
    bool entitiesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_ApplicableInstancesInfo_H_
