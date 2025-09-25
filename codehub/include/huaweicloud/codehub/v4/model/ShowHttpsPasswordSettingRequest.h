
#ifndef HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowHttpsPasswordSettingRequest_H_
#define HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowHttpsPasswordSettingRequest_H_


#include <huaweicloud/codehub/v4/CodeHubExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEHUB_V4_EXPORT  ShowHttpsPasswordSettingRequest
    : public ModelBase
{
public:
    ShowHttpsPasswordSettingRequest();
    virtual ~ShowHttpsPasswordSettingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowHttpsPasswordSettingRequest members


protected:

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowHttpsPasswordSettingRequest& dereference_from_shared_ptr(std::shared_ptr<ShowHttpsPasswordSettingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEHUB_V4_MODEL_ShowHttpsPasswordSettingRequest_H_
