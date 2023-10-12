
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExpandReplicationRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExpandReplicationRequest_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/sdrs/v1/model/ExtendReplicationRequestBody.h>

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
class HUAWEICLOUD_SDRS_V1_EXPORT  ExpandReplicationRequest
    : public ModelBase
{
public:
    ExpandReplicationRequest();
    virtual ~ExpandReplicationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ExpandReplicationRequest members

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

    ExtendReplicationRequestBody getBody() const;
    bool bodyIsSet() const;
    void unsetbody();
    void setBody(const ExtendReplicationRequestBody& value);


protected:
    std::string replicationId_;
    bool replicationIdIsSet_;
    ExtendReplicationRequestBody body_;
    bool bodyIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ExpandReplicationRequest& dereference_from_shared_ptr(std::shared_ptr<ExpandReplicationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExpandReplicationRequest_H_
