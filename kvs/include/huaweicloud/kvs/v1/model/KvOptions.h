
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_KvOptions_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_KvOptions_H_

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
class HUAWEICLOUD_KVS_V1_EXPORT  KvOptions
    : public ModelBase
{
public:
    KvOptions();
    virtual ~KvOptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// KvOptions members

    /// <summary>
    /// 
    /// </summary>

    bool isReturnHint() const;
    bool returnHintIsSet() const;
    void unsetreturnHint();
    void setReturnHint(bool value);


protected:
    bool returnHint_;
    bool returnHintIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_KvOptions_H_
