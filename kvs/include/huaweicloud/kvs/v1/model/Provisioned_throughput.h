
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Provisioned_throughput_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Provisioned_throughput_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_KVS_V1_EXPORT  Provisioned_throughput
    : public ModelBase
{
public:
    Provisioned_throughput();
    virtual ~Provisioned_throughput();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Provisioned_throughput members

    /// <summary>
    /// 预置表级读请求单元数
    /// </summary>

    int64_t getRcu() const;
    bool rcuIsSet() const;
    void unsetrcu();
    void setRcu(int64_t value);

    /// <summary>
    /// 预置表级写请求单元数
    /// </summary>

    int64_t getWcu() const;
    bool wcuIsSet() const;
    void unsetwcu();
    void setWcu(int64_t value);


protected:
    int64_t rcu_;
    bool rcuIsSet_;
    int64_t wcu_;
    bool wcuIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Provisioned_throughput_H_
