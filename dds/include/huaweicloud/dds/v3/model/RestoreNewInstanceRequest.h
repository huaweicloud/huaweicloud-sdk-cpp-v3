
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/RestoreNewInstanceRequestBody.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_DDS_V3_EXPORT  RestoreNewInstanceRequest
    : public ModelBase
{
public:
    RestoreNewInstanceRequest();
    virtual ~RestoreNewInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// RestoreNewInstanceRequest members

    /// <summary>
    /// 
    /// </summary>

    RestoreNewInstanceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const RestoreNewInstanceRequestBody& value);


protected:
    RestoreNewInstanceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    RestoreNewInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<RestoreNewInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_RestoreNewInstanceRequest_H_
