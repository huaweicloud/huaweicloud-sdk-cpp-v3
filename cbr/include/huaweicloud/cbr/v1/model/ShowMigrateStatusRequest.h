
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMigrateStatusRequest_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMigrateStatusRequest_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowMigrateStatusRequest
    : public ModelBase
{
public:
    ShowMigrateStatusRequest();
    virtual ~ShowMigrateStatusRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowMigrateStatusRequest members

    /// <summary>
    /// 是否查询其他区域结果
    /// </summary>

    bool isAllRegions() const;
    bool allRegionsIsSet() const;
    void unsetallRegions();
    void setAllRegions(bool value);


protected:
    bool allRegions_;
    bool allRegionsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowMigrateStatusRequest& dereference_from_shared_ptr(std::shared_ptr<ShowMigrateStatusRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMigrateStatusRequest_H_
