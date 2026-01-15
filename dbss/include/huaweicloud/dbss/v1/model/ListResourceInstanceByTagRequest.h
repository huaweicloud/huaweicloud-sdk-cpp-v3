
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListResourceInstanceByTagRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListResourceInstanceByTagRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dbss/v1/model/ResourceInstanceTagRequest.h>
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
class HUAWEICLOUD_DBSS_V1_EXPORT  ListResourceInstanceByTagRequest
    : public ModelBase
{
public:
    ListResourceInstanceByTagRequest();
    virtual ~ListResourceInstanceByTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListResourceInstanceByTagRequest members

    /// <summary>
    /// **参数解释**：  资源类型。 **约束限制**： 不涉及 **取值范围**：  - auditInstance：审计  **默认取值**： 不涉及 
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

    /// <summary>
    /// **参数解释**： 每页查询记录数。 **约束限制**： 仅支持大于0的整数 **取值范围**： 大于0小于等于10000 **默认取值**： 默认值为1000 
    /// </summary>

    std::string getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(const std::string& value);

    /// <summary>
    /// **参数解释**： 分页偏移量，从第一条数据偏移offset条数据后开始查询 **约束限制**： 仅支持大于等于0的整数 **取值范围**： 大于等于0 **默认取值**： 默认值为0 
    /// </summary>

    std::string getOffset() const;
    bool offsetIsSet() const;
    void unsetoffset();
    void setOffset(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ResourceInstanceTagRequest getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ResourceInstanceTagRequest& value);


protected:
    std::string resourceType_;
    bool resourceTypeIsSet_;
    std::string limit_;
    bool limitIsSet_;
    std::string offset_;
    bool offsetIsSet_;
    ResourceInstanceTagRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ListResourceInstanceByTagRequest& dereference_from_shared_ptr(std::shared_ptr<ListResourceInstanceByTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_ListResourceInstanceByTagRequest_H_
