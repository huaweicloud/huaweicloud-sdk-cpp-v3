
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Get_oper_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Get_oper_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kvs/v1/model/Get_kv.h>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Get_oper
    : public ModelBase
{
public:
    Get_oper();
    virtual ~Get_oper();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Get_oper members

    /// <summary>
    /// 
    /// </summary>

    Get_kv getGetKv() const;
    bool getKvIsSet() const;
    void unsetgetKv();
    void setGetKv(const Get_kv& value);


protected:
    Get_kv getKv_;
    bool getKvIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Get_oper_H_
