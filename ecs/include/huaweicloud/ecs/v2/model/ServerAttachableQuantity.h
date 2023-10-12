
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerAttachableQuantity_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerAttachableQuantity_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器可挂载网卡和卷数。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ServerAttachableQuantity
    : public ModelBase
{
public:
    ServerAttachableQuantity();
    virtual ~ServerAttachableQuantity();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerAttachableQuantity members

    /// <summary>
    /// 可挂载scsi卷数。
    /// </summary>

    int32_t getFreeScsi() const;
    bool freeScsiIsSet() const;
    void unsetfreeScsi();
    void setFreeScsi(int32_t value);

    /// <summary>
    /// 可挂载vbd卷数。
    /// </summary>

    int32_t getFreeBlk() const;
    bool freeBlkIsSet() const;
    void unsetfreeBlk();
    void setFreeBlk(int32_t value);

    /// <summary>
    /// 可挂载卷数。
    /// </summary>

    int32_t getFreeDisk() const;
    bool freeDiskIsSet() const;
    void unsetfreeDisk();
    void setFreeDisk(int32_t value);

    /// <summary>
    /// 可挂载网卡数。
    /// </summary>

    int32_t getFreeNic() const;
    bool freeNicIsSet() const;
    void unsetfreeNic();
    void setFreeNic(int32_t value);


protected:
    int32_t freeScsi_;
    bool freeScsiIsSet_;
    int32_t freeBlk_;
    bool freeBlkIsSet_;
    int32_t freeDisk_;
    bool freeDiskIsSet_;
    int32_t freeNic_;
    bool freeNicIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerAttachableQuantity_H_
