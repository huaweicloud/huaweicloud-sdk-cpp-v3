
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateReplicationNameRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateReplicationNameRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/UpdateReplicationNameRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新复制对名称请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  UpdateReplicationNameRequestBody
    : public ModelBase
{
public:
    UpdateReplicationNameRequestBody();
    virtual ~UpdateReplicationNameRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateReplicationNameRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateReplicationNameRequestParams getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const UpdateReplicationNameRequestParams& value);


protected:
    UpdateReplicationNameRequestParams replication_;
    bool replicationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_UpdateReplicationNameRequestBody_H_
