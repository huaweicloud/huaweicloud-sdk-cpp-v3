
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationResponse_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationResponse_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ShowReplicationParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ShowReplicationResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowReplicationResponse();
    virtual ~ShowReplicationResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowReplicationResponse members

    /// <summary>
    /// 
    /// </summary>

    ShowReplicationParams getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const ShowReplicationParams& value);


protected:
    ShowReplicationParams replication_;
    bool replicationIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ShowReplicationResponse_H_
