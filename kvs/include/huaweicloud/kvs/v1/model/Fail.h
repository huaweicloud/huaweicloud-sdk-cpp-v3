
#ifndef HUAWEICLOUD_SDK_KVS_V1_MODEL_Fail_H_
#define HUAWEICLOUD_SDK_KVS_V1_MODEL_Fail_H_

#include <huaweicloud/core/bson/Defines.h>
#include <huaweicloud/core/bson/Builder.h>
#include <huaweicloud/core/bson/Viewer.h>

#include <huaweicloud/kvs/v1/KvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_KVS_V1_EXPORT  Fail
    : public ModelBase
{
public:
    Fail();
    virtual ~Fail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    bool fromBson(const Viewer &viewer) override;
    bool toBson(Builder &builder) const override;
    /////////////////////////////////////////////
    /// Fail members

    /// <summary>
    /// 
    /// </summary>

    int32_t getOperId() const;
    bool operIdIsSet() const;
    void unsetoperId();
    void setOperId(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    int32_t operId_;
    bool operIdIsSet_;
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_MODEL_Fail_H_
