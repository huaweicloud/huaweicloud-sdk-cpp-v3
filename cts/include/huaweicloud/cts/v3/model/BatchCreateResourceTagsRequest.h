
#ifndef HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchCreateResourceTagsRequest_H_
#define HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchCreateResourceTagsRequest_H_


#include <huaweicloud/cts/v3/CtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cts/v3/model/BatchCreateResourceTagsRequestBody.h>

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
class HUAWEICLOUD_CTS_V3_EXPORT  BatchCreateResourceTagsRequest
    : public ModelBase
{
public:
    BatchCreateResourceTagsRequest();
    virtual ~BatchCreateResourceTagsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateResourceTagsRequest members

    /// <summary>
    /// 资源ID。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// CTS服务的资源类型，目前仅支持cts-tracker。
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BatchCreateResourceTagsRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const BatchCreateResourceTagsRequestBody& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string resourceType_;
    bool resourceTypeIsSet_;
    BatchCreateResourceTagsRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchCreateResourceTagsRequest& dereference_from_shared_ptr(std::shared_ptr<BatchCreateResourceTagsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_MODEL_BatchCreateResourceTagsRequest_H_
