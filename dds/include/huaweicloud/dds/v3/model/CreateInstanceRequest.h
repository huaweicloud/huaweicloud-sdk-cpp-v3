
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/CreateInstanceRequestBody.h>

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
class HUAWEICLOUD_DDS_V3_EXPORT  CreateInstanceRequest
    : public ModelBase
{
public:
    CreateInstanceRequest();
    virtual ~CreateInstanceRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// CreateInstanceRequest members

    /// <summary>
    /// 
    /// </summary>

    CreateInstanceRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const CreateInstanceRequestBody& value);


protected:
    CreateInstanceRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    CreateInstanceRequest& dereference_from_shared_ptr(std::shared_ptr<CreateInstanceRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_CreateInstanceRequest_H_
