
#ifndef HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateShareCacheGroupsRequest_H_
#define HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateShareCacheGroupsRequest_H_


#include <huaweicloud/cdn/v2/CdnExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cdn/v2/model/UpdateShareCacheGroupsRequstBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CDN_V2_EXPORT  UpdateShareCacheGroupsRequest
    : public ModelBase
{
public:
    UpdateShareCacheGroupsRequest();
    virtual ~UpdateShareCacheGroupsRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateShareCacheGroupsRequest members

    /// <summary>
    /// **参数解释：** 共享缓存组ID，可通过查询共享缓存组列表接口获取 **约束限制：** 不涉及 **取值范围：** 不涉及 **默认取值：** 不涉及
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateShareCacheGroupsRequstBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateShareCacheGroupsRequstBody& value);


protected:
    std::string id_;
    bool idIsSet_;
    UpdateShareCacheGroupsRequstBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateShareCacheGroupsRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateShareCacheGroupsRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CDN_V2_MODEL_UpdateShareCacheGroupsRequest_H_
