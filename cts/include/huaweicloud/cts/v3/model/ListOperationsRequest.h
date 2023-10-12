
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperationsRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperationsRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CTS_V3_EXPORT  ListOperationsRequest
    : public ModelBase
{
public:
    ListOperationsRequest();
    virtual ~ListOperationsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListOperationsRequest members

    /// <summary>
    /// 事件对应的云服务类型。
    /// </summary>

    std::string getServiceType() const;
    bool serviceTypeIsSet() const;
    void unsetserviceType();
    void setServiceType(const std::string& value);

    /// <summary>
    /// 事件对应的资源类型。传入该参数时，service_type必选。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);


protected:
    std::string serviceType_;
    bool serviceTypeIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListOperationsRequest& dereference_from_shared_ptr(std::shared_ptr<ListOperationsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_ListOperationsRequest_H_
