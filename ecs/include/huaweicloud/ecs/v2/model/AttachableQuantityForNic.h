
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachableQuantityForNic_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachableQuantityForNic_H_


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
/// 
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  AttachableQuantityForNic
    : public ModelBase
{
public:
    AttachableQuantityForNic();
    virtual ~AttachableQuantityForNic();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachableQuantityForNic members

    /// <summary>
    /// 
    /// </summary>

    int32_t getFreeEfiNic() const;
    bool freeEfiNicIsSet() const;
    void unsetfreeEfiNic();
    void setFreeEfiNic(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getFreeScsi() const;
    bool freeScsiIsSet() const;
    void unsetfreeScsi();
    void setFreeScsi(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getFreeBlk() const;
    bool freeBlkIsSet() const;
    void unsetfreeBlk();
    void setFreeBlk(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getFreeDisk() const;
    bool freeDiskIsSet() const;
    void unsetfreeDisk();
    void setFreeDisk(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getFreeNic() const;
    bool freeNicIsSet() const;
    void unsetfreeNic();
    void setFreeNic(int32_t value);


protected:
    int32_t freeEfiNic_;
    bool freeEfiNicIsSet_;
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

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_AttachableQuantityForNic_H_
