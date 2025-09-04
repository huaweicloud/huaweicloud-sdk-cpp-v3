
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowAppendableVolumeQuotaResponse_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowAppendableVolumeQuotaResponse_H_


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
/// Response Object
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ShowAppendableVolumeQuotaResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowAppendableVolumeQuotaResponse();
    virtual ~ShowAppendableVolumeQuotaResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowAppendableVolumeQuotaResponse members

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

    int32_t getCount() const;
    bool countIsSet() const;
    void unsetcount();
    void setCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getFreeBlk() const;
    bool freeBlkIsSet() const;
    void unsetfreeBlk();
    void setFreeBlk(int32_t value);


protected:
    int32_t freeScsi_;
    bool freeScsiIsSet_;
    int32_t count_;
    bool countIsSet_;
    int32_t freeBlk_;
    bool freeBlkIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ShowAppendableVolumeQuotaResponse_H_
