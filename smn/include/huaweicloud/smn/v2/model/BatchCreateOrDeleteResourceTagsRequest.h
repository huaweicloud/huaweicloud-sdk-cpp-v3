
#ifndef HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateOrDeleteResourceTagsRequest_H_
#define HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateOrDeleteResourceTagsRequest_H_

#include <huaweicloud/smn/v2/SmnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/smn/v2/model/BatchCreateOrDeleteResourceTagsRequestBody.h>
#include <string>

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
class HUAWEICLOUD_SMN_V2_EXPORT  BatchCreateOrDeleteResourceTagsRequest
    : public ModelBase
{
public:
    BatchCreateOrDeleteResourceTagsRequest();
    virtual ~BatchCreateOrDeleteResourceTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// BatchCreateOrDeleteResourceTagsRequest members

    /// <summary>
    /// 资源类型，目前有:  smn_topic，主题  smn_sms，短信  smn_application，移动推送
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 资源ID。  获取resource_id的方法：  当resource_type为“smn_topic”时， 手动添加请求消息头“X-SMN-RESOURCEID-TYPE&#x3D;name”，资源ID即为topic名称。 不添加请求消息头，通过“查询资源实例”，获取资源ID。 当resource_type为“smn_sms”时，resource_id为签名ID。您可在控制台获取。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchCreateOrDeleteResourceTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateOrDeleteResourceTagsRequestBody& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    BatchCreateOrDeleteResourceTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateOrDeleteResourceTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateOrDeleteResourceTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SMN_V2_MODEL_BatchCreateOrDeleteResourceTagsRequest_H_
