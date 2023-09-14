
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_ListResourceInstancesRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_ListResourceInstancesRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/smn/v2/model/ListInstanceRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SMN_V2_EXPORT  ListResourceInstancesRequest
    : public ModelBase
{
public:
    ListResourceInstancesRequest();
    virtual ~ListResourceInstancesRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListResourceInstancesRequest members

    /// <summary>
    /// 资源类型，目前有:  smn_topic，主题  smn_sms，短信  smn_application，移动推送
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListInstanceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListInstanceRequestBody& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    ListInstanceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListResourceInstancesRequest& dereference_from_shared_ptr(std::shared_ptr<ListResourceInstancesRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_ListResourceInstancesRequest_H_
