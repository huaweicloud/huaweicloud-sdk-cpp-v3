
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountResourceInstanceByTagRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountResourceInstanceByTagRequest_H_


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
class HUAWEICLOUD_DBSS_V1_EXPORT  CountResourceInstanceByTagRequest
    : public ModelBase
{
public:
    CountResourceInstanceByTagRequest();
    virtual ~CountResourceInstanceByTagRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CountResourceInstanceByTagRequest members

    /// <summary>
    /// 资源类型。 - auditInstance
    /// </summary>

    std::string getResourceType() const;
    bool resourceTypeIsSet() const;
    void unsetresourceType();
    void setResourceType(const std::string& value);

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
    ResourceInstanceTagRequest body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CountResourceInstanceByTagRequest& dereference_from_shared_ptr(std::shared_ptr<CountResourceInstanceByTagRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_CountResourceInstanceByTagRequest_H_
