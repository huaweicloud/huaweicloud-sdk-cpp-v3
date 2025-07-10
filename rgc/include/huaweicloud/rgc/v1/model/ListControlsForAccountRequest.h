
#ifndef HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlsForAccountRequest_H_
#define HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlsForAccountRequest_H_


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
class HUAWEICLOUD_RGC_V1_EXPORT  ListControlsForAccountRequest
    : public ModelBase
{
public:
    ListControlsForAccountRequest();
    virtual ~ListControlsForAccountRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListControlsForAccountRequest members

    /// <summary>
    /// 纳管账号ID。
    /// </summary>

    std::string getManagedAccountId() const;
    bool managedAccountIdIsSet() const;
    void unsetmanagedAccountId();
    void setManagedAccountId(const std::string& value);

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
    std::string managedAccountId_;
    bool managedAccountIdIsSet_;
    int32_t limit_;
    bool limitIsSet_;
    std::string marker_;
    bool markerIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListControlsForAccountRequest& dereference_from_shared_ptr(std::shared_ptr<ListControlsForAccountRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_MODEL_ListControlsForAccountRequest_H_
