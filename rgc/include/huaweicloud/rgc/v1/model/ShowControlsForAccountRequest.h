
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForAccountRequest_H_


#include <huaweicloud/rgc/v1/RgcExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_RGC_V1_EXPORT  ShowControlsForAccountRequest
    : public ModelBase
{
public:
    ShowControlsForAccountRequest();
    virtual ~ShowControlsForAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowControlsForAccountRequest members

    /// <summary>
    /// 纳管账号ID。
    /// </summary>

    std::string getManagedAccountId() const;
    bool managedAccountIdIsSet() const;
    void unsetmanagedAccountId();
    void setManagedAccountId(const std::string& value);

    /// <summary>
    /// 控制策略ID。
    /// </summary>

    std::string getControlId() const;
    bool controlIdIsSet() const;
    void unsetcontrolId();
    void setControlId(const std::string& value);


protected:
    std::string managedAccountId_;
    bool managedAccountIdIsSet_;
    std::string controlId_;
    bool controlIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowControlsForAccountRequest& dereference_from_shared_ptr(std::shared_ptr<ShowControlsForAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForAccountRequest_H_
