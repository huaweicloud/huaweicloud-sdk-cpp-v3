
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateReplicationNameRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateReplicationNameRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/UpdateReplicationNameRequestBody.h>

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
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateReplicationNameRequest
    : public ModelBase
{
public:
    UpdateReplicationNameRequest();
    virtual ~UpdateReplicationNameRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// UpdateReplicationNameRequest members

    /// <summary>
    /// replication_id
    /// </summary>

    std::string getReplicationId() const;
    bool replicationIdIsSet() const;
    void unsetreplicationId();
    void setReplicationId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    UpdateReplicationNameRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const UpdateReplicationNameRequestBody& value);


protected:
    std::string replicationId_;
    bool replicationIdIsSet_;
    UpdateReplicationNameRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    UpdateReplicationNameRequest& dereference_from_shared_ptr(std::shared_ptr<UpdateReplicationNameRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateReplicationNameRequest_H_
