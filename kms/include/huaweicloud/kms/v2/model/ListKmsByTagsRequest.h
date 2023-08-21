
#ifndef HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsByTagsRequest_H_
#define HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsByTagsRequest_H_

#include <huaweicloud/kms/v2/KmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/kms/v2/model/ListKmsByTagsRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_KMS_V2_EXPORT  ListKmsByTagsRequest
    : public ModelBase
{
public:
    ListKmsByTagsRequest();
    virtual ~ListKmsByTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListKmsByTagsRequest members

    /// <summary>
    /// 资源实例，固定值为resource_instances
    /// </summary>

    std::string getResourceInstances() const;
    bool resourceInstancesIsSet() const;
    void unsetresourceInstances();
    void setResourceInstances(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ListKmsByTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ListKmsByTagsRequestBody& value);


protected:
    std::string resourceInstances_;
    bool resourceInstancesIsSet_;
    ListKmsByTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListKmsByTagsRequest& dereference_from_shared_ptr(std::shared_ptr<ListKmsByTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_KMS_V2_MODEL_ListKmsByTagsRequest_H_
