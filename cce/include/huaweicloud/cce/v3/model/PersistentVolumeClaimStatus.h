
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PersistentVolumeClaimStatus_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PersistentVolumeClaimStatus_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PersistentVolumeClaimStatus
    : public ModelBase
{
public:
    PersistentVolumeClaimStatus();
    virtual ~PersistentVolumeClaimStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PersistentVolumeClaimStatus members

    /// <summary>
    /// 显示volume实际具有的访问模式。
    /// </summary>

    std::vector<std::string>& getAccessModes();
    bool accessModesIsSet() const;
    void unsetaccessModes();
    void setAccessModes(const std::vector<std::string>& value);

    /// <summary>
    /// 底层卷的实际资源
    /// </summary>

    std::string getCapacity() const;
    bool capacityIsSet() const;
    void unsetcapacity();
    void setCapacity(const std::string& value);

    /// <summary>
    /// PersistentVolumeClaim当前所处的状态
    /// </summary>

    std::string getPhase() const;
    bool phaseIsSet() const;
    void unsetphase();
    void setPhase(const std::string& value);


protected:
    std::vector<std::string> accessModes_;
    bool accessModesIsSet_;
    std::string capacity_;
    bool capacityIsSet_;
    std::string phase_;
    bool phaseIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PersistentVolumeClaimStatus_H_
