
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateReplicationRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateReplicationRequestBody_H_


#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/CreateReplicationRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 创建复制对请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  CreateReplicationRequestBody
    : public ModelBase
{
public:
    CreateReplicationRequestBody();
    virtual ~CreateReplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateReplicationRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateReplicationRequestParams getReplication() const;
    bool replicationIsSet() const;
    void unsetreplication();
    void setReplication(const CreateReplicationRequestParams& value);


protected:
    CreateReplicationRequestParams replication_;
    bool replicationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_CreateReplicationRequestBody_H_
