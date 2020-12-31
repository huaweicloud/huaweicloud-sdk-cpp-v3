
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotOption_H_

#include <huaweicloud/evs/EvsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_EVS_EXPORT  RollbackSnapshotOption
    : public ModelBase
{
public:
    RollbackSnapshotOption();
    virtual ~RollbackSnapshotOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RollbackSnapshotOption members

    /// <summary>
    /// 回滚的目标云硬盘名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 回滚的目标云硬盘UUID。
    /// </summary>

    std::string getVolumeId() const;
    bool volumeIdIsSet() const;
    void unsetvolumeId();
    void setVolumeId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string volumeId_;
    bool volumeIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_RollbackSnapshotOption_H_
