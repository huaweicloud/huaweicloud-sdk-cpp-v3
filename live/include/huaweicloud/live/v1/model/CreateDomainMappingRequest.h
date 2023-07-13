
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateDomainMappingRequest_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateDomainMappingRequest_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/live/v1/model/DomainMapping.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  CreateDomainMappingRequest
    : public ModelBase
{
public:
    CreateDomainMappingRequest();
    virtual ~CreateDomainMappingRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateDomainMappingRequest members

    /// <summary>
    /// 
    /// </summary>

    DomainMapping getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DomainMapping& value);


protected:
    DomainMapping body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateDomainMappingRequest& dereference_from_shared_ptr(std::shared_ptr<CreateDomainMappingRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_CreateDomainMappingRequest_H_
