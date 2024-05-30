
#ifndef HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagResourceRequest_H_
#define HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagResourceRequest_H_


#include <huaweicloud/organizations/v1/OrganizationsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/organizations/v1/model/TagResourceReqBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Organizations {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_ORGANIZATIONS_V1_EXPORT  TagResourceRequest
    : public ModelBase
{
public:
    TagResourceRequest();
    virtual ~TagResourceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// TagResourceRequest members

    /// <summary>
    /// 根、组织单元、账号或策略的唯一标识符（ID）。
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TagResourceReqBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const TagResourceReqBody& value);


protected:
    std::string resourceId_;
    bool resourceIdIsSet_;
    TagResourceReqBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    TagResourceRequest& dereference_from_shared_ptr(std::shared_ptr<TagResourceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ORGANIZATIONS_V1_MODEL_TagResourceRequest_H_
