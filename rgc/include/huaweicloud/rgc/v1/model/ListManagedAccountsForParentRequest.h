
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedAccountsForParentRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedAccountsForParentRequest_H_


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
class HUAWEICLOUD_RGC_V1_EXPORT  ListManagedAccountsForParentRequest
    : public ModelBase
{
public:
    ListManagedAccountsForParentRequest();
    virtual ~ListManagedAccountsForParentRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListManagedAccountsForParentRequest members

    /// <summary>
    /// 注册OU ID。
    /// </summary>

    std::string getManagedOrganizationalUnitId() const;
    bool managedOrganizationalUnitIdIsSet() const;
    void unsetmanagedOrganizationalUnitId();
    void setManagedOrganizationalUnitId(const std::string& value);

    /// <summary>
    /// 分页页面的最大值。
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);

    /// <summary>
    /// 页面标记。
    /// </summary>

    std::string getMarker() const;
    bool markerIsSet() const;
    void unsetmarker();
    void setMarker(const std::string& value);


protected:
    std::string managedOrganizationalUnitId_;
    bool managedOrganizationalUnitIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListManagedAccountsForParentRequest& dereference_from_shared_ptr(std::shared_ptr<ListManagedAccountsForParentRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListManagedAccountsForParentRequest_H_
