
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RetypeVolume_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RetypeVolume_H_


#include <huaweicloud/evs/v2/EvsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 变更云硬盘类型
/// </summary>
class HUAWEICLOUD_EVS_V2_EXPORT  RetypeVolume
    : public ModelBase
{
public:
    RetypeVolume();
    virtual ~RetypeVolume();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RetypeVolume members

    /// <summary>
    /// 变更至指定的云硬盘类型
    /// </summary>

    std::string getNewType() const;
    bool newTypeIsSet() const;
    void unsetnewType();
    void setNewType(const std::string& value);

    /// <summary>
    /// 云硬盘iops大小。
    /// </summary>

    int32_t getIops() const;
    bool iopsIsSet() const;
    void unsetiops();
    void setIops(int32_t value);

    /// <summary>
    /// 云硬盘的吞吐量大小。
    /// </summary>

    int32_t getThroughput() const;
    bool throughputIsSet() const;
    void unsetthroughput();
    void setThroughput(int32_t value);


protected:
    std::string newType_;
    bool newTypeIsSet_;
    int32_t iops_;
    bool iopsIsSet_;
    int32_t throughput_;
    bool throughputIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RetypeVolume_H_
