
#ifndef HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipRequest_H_
#define HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipRequest_H_

#include <huaweicloud/dds/v3/DdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/dds/v3/model/AttachEipRequestBody.h>

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
class HUAWEICLOUD_DDS_V3_EXPORT  AttachEipRequest
    : public ModelBase
{
public:
    AttachEipRequest();
    virtual ~AttachEipRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AttachEipRequest members

    /// <summary>
    /// 需要绑定公网IP的节点ID。集群实例选择mongos节点，副本集实例选择primary或者secondary节点。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AttachEipRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const AttachEipRequestBody& value);


protected:
    std::string nodeId_;
    bool nodeIdIsSet_;
    AttachEipRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    AttachEipRequest& dereference_from_shared_ptr(std::shared_ptr<AttachEipRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DDS_V3_MODEL_AttachEipRequest_H_
