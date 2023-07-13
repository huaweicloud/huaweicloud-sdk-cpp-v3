
#ifndef HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesRequest_H_
#define HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesRequest_H_

#include <huaweicloud/csms/v1/CsmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/csms/v1/model/ListResourceInstancesRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CSMS_V1_EXPORT  ListResourceInstancesRequest
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
    /// 定值为resource_instances。
    /// </summary>

    std::string getResourceInstances() const;
    bool resourceInstancesIsSet() const;
    void unsetresourceInstances();
    void setResourceInstances(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListResourceInstancesRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListResourceInstancesRequestBody& value);


protected:
    std::string resourceInstances_;
    bool resourceInstancesIsSet_;
    ListResourceInstancesRequestBody body_;
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

#endif // HUAWEICLOUD_SDK_CSMS_V1_MODEL_ListResourceInstancesRequest_H_
