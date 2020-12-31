
#ifndef HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotOption_H_
#define HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotOption_H_

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
class HUAWEICLOUD_EVS_EXPORT  UpdateSnapshotOption
    : public ModelBase
{
public:
    UpdateSnapshotOption();
    virtual ~UpdateSnapshotOption();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateSnapshotOption members

    /// <summary>
    /// 云硬盘快照描述。最大支持255个字节。
    /// </summary>

    std::string getDescription() const;
    bool descriptionIsSet() const;
    void unsetdescription();
    void setDescription(const std::string& value);

    /// <summary>
    /// 云硬盘快照名称。最大支持255个字节。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string description_;
    bool descriptionIsSet_;
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EVS_V2_MODEL_UpdateSnapshotOption_H_
