
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Instance_dr_relation_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Instance_dr_relation_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/rds/v3/model/Slave_instance.h>
#include <string>
#include <huaweicloud/rds/v3/model/Master_instance.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 容灾实例信息。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Instance_dr_relation
    : public ModelBase
{
public:
    Instance_dr_relation();
    virtual ~Instance_dr_relation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// Instance_dr_relation members

    /// <summary>
    /// 当前区域实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    Master_instance getMasterInstance() const;
    bool masterInstanceIsSet() const;
    void unsetmasterInstance();
    void setMasterInstance(const Master_instance& value);

    /// <summary>
    /// 容灾实例信息列表。
    /// </summary>

    std::vector<Slave_instance>& getSlaveInstances();
    bool slaveInstancesIsSet() const;
    void unsetslaveInstances();
    void setSlaveInstances(const std::vector<Slave_instance>& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    Master_instance masterInstance_;
    bool masterInstanceIsSet_;
    std::vector<Slave_instance> slaveInstances_;
    bool slaveInstancesIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Instance_dr_relation_H_
