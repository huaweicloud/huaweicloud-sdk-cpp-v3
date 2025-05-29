
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteMongosNodeRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteMongosNodeRequest_H_


#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/DeleteMongosNodeRequestBody.h>

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
class HUAWEICLOUD_DDS_V3_EXPORT  DeleteMongosNodeRequest
    : public ModelBase
{
public:
    DeleteMongosNodeRequest();
    virtual ~DeleteMongosNodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteMongosNodeRequest members

    /// <summary>
    /// 实例ID。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteMongosNodeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteMongosNodeRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    DeleteMongosNodeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteMongosNodeRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteMongosNodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_DeleteMongosNodeRequest_H_
