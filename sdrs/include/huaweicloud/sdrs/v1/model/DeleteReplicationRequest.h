
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/DeleteReplicationRequestBody.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  DeleteReplicationRequest
    : public ModelBase
{
public:
    DeleteReplicationRequest();
    virtual ~DeleteReplicationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// DeleteReplicationRequest members

    /// <summary>
    /// 复制对的ID。
    /// </summary>

    std::string getReplicationId() const;
    bool replicationIdIsSet() const;
    void unsetreplicationId();
    void setReplicationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    DeleteReplicationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const DeleteReplicationRequestBody& value);


protected:
    std::string replicationId_;
    bool replicationIdIsSet_;
    DeleteReplicationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    DeleteReplicationRequest& dereference_from_shared_ptr(std::shared_ptr<DeleteReplicationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequest_H_
