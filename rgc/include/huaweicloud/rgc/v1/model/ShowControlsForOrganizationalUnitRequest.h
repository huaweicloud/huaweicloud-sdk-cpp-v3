
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForOrganizationalUnitRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForOrganizationalUnitRequest_H_


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
class HUAWEICLOUD_RGC_V1_EXPORT  ShowControlsForOrganizationalUnitRequest
    : public ModelBase
{
public:
    ShowControlsForOrganizationalUnitRequest();
    virtual ~ShowControlsForOrganizationalUnitRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowControlsForOrganizationalUnitRequest members

    /// <summary>
    /// 注册OU ID。
    /// </summary>

    std::string getManagedOrganizationalUnitId() const;
    bool managedOrganizationalUnitIdIsSet() const;
    void unsetmanagedOrganizationalUnitId();
    void setManagedOrganizationalUnitId(const std::string& value);

    /// <summary>
    /// 控制策略ID。
    /// </summary>

    std::string getControlId() const;
    bool controlIdIsSet() const;
    void unsetcontrolId();
    void setControlId(const std::string& value);


protected:
    std::string managedOrganizationalUnitId_;
    bool managedOrganizationalUnitIdIsSet_;
    std::string controlId_;
    bool controlIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowControlsForOrganizationalUnitRequest& dereference_from_shared_ptr(std::shared_ptr<ShowControlsForOrganizationalUnitRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ShowControlsForOrganizationalUnitRequest_H_
