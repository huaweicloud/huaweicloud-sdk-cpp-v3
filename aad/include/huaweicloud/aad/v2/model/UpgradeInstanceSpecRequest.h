
#ifndef HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceSpecRequest_H_
#define HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceSpecRequest_H_


#include <huaweicloud/aad/v2/AadExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/aad/v2/model/UpgradeInstanceSpecV2RequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Aad {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_AAD_V2_EXPORT  UpgradeInstanceSpecRequest
    : public ModelBase
{
public:
    UpgradeInstanceSpecRequest();
    virtual ~UpgradeInstanceSpecRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpgradeInstanceSpecRequest members

    /// <summary>
    /// 
    /// </summary>

    UpgradeInstanceSpecV2RequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpgradeInstanceSpecV2RequestBody& value);


protected:
    UpgradeInstanceSpecV2RequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpgradeInstanceSpecRequest& dereference_from_shared_ptr(std::shared_ptr<UpgradeInstanceSpecRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_AAD_V2_MODEL_UpgradeInstanceSpecRequest_H_
