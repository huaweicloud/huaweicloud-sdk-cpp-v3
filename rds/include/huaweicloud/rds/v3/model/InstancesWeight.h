
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstancesWeight_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstancesWeight_H_


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
/// 数据库节点的读权重设置。  在proxy_mode为readonly时，只能为只读节点选择权重。
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InstancesWeight
    : public ModelBase
{
public:
    InstancesWeight();
    virtual ~InstancesWeight();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstancesWeight members

    /// <summary>
    /// 数据库实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 数据库代理读权重。
    /// </summary>

    int32_t getWeight() const;
    bool weightIsSet() const;
    void unsetweight();
    void setWeight(int32_t value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    int32_t weight_;
    bool weightIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstancesWeight_H_
