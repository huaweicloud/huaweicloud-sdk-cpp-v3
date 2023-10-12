
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowStorageUsageResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowStorageUsageResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cbr/v1/model/StorageUsage.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowStorageUsageResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowStorageUsageResponse();
    virtual ~ShowStorageUsageResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowStorageUsageResponse members

    /// <summary>
    /// 满足过滤条件的资源总条数
    /// </summary>

    int32_t getResourceCount() const;
    bool resourceCountIsSet() const;
    void unsetresourceCount();
    void setResourceCount(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    std::vector<StorageUsage>& getStorageUsage();
    bool storageUsageIsSet() const;
    void unsetstorageUsage();
    void setStorageUsage(const std::vector<StorageUsage>& value);


protected:
    int32_t resourceCount_;
    bool resourceCountIsSet_;
    std::vector<StorageUsage> storageUsage_;
    bool storageUsageIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowStorageUsageResponse_H_
