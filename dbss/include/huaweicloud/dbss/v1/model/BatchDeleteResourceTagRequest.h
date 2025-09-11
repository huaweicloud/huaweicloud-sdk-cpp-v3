
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_BatchDeleteResourceTagRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_BatchDeleteResourceTagRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ResourceTagDeleteRequest.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  BatchDeleteResourceTagRequest
    : public ModelBase
{
public:
    BatchDeleteResourceTagRequest();
    virtual ~BatchDeleteResourceTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteResourceTagRequest members

    /// <summary>
    /// **参数解释**：  资源类型。 **约束限制**： 不涉及 **取值范围**：  - auditInstance: 审计  **默认取值**： 不涉及 
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// **参数解释**：  资源ID。可在查询实例列表接口的resource_id字段获取。 **约束限制**： 不涉及 **取值范围**： 以查询实例列表接口获取值为准，字符长度32-64。 **默认取值**： 不涉及 
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceTagDeleteRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceTagDeleteRequest& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    ResourceTagDeleteRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    BatchDeleteResourceTagRequest& dereference_from_shared_ptr(std::shared_ptr<BatchDeleteResourceTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_BatchDeleteResourceTagRequest_H_
