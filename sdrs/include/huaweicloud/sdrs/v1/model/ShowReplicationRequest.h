
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationRequest_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationRequest_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

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
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowReplicationRequest
    : public ModelBase
{
public:
    ShowReplicationRequest();
    virtual ~ShowReplicationRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowReplicationRequest members

    /// <summary>
    /// 复制对ID。
    /// </summary>

    std::string getReplicationId() const;
    bool replicationIdIsSet() const;
    void unsetreplicationId();
    void setReplicationId(const std::string& value);


protected:
    std::string replicationId_;
    bool replicationIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowReplicationRequest& dereference_from_shared_ptr(std::shared_ptr<ShowReplicationRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationRequest_H_
