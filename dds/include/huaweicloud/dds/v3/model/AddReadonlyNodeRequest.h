
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/dds/v3/model/AddReadonlyNodeRequestBody.h>
#include <string>

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
class HUAWEICLOUD_DDS_V3_EXPORT  AddReadonlyNodeRequest
    : public ModelBase
{
public:
    AddReadonlyNodeRequest();
    virtual ~AddReadonlyNodeRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AddReadonlyNodeRequest members

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

    AddReadonlyNodeRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AddReadonlyNodeRequestBody& value);


protected:
    std::string instanceId_;
    bool instanceIdIsSet_;
    AddReadonlyNodeRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AddReadonlyNodeRequest& dereference_from_shared_ptr(std::shared_ptr<AddReadonlyNodeRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AddReadonlyNodeRequest_H_