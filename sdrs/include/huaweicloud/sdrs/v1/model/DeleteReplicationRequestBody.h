
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/DeleteReplicationRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 删除复制对请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  DeleteReplicationRequestBody
    : public ModelBase
{
public:
    DeleteReplicationRequestBody();
    virtual ~DeleteReplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DeleteReplicationRequestBody members

    /// <summary>
    /// 
    /// </summary>

    DeleteReplicationRequestParams getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const DeleteReplicationRequestParams& value);


protected:
    DeleteReplicationRequestParams replication_;
    bool replicationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_DeleteReplicationRequestBody_H_
