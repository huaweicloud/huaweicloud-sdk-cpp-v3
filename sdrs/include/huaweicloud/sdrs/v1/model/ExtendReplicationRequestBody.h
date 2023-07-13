
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExtendReplicationRequestBody_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExtendReplicationRequestBody_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sdrs/v1/model/ExtendReplicationRequestParams.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 复制对扩容请求体
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ExtendReplicationRequestBody
    : public ModelBase
{
public:
    ExtendReplicationRequestBody();
    virtual ~ExtendReplicationRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ExtendReplicationRequestBody members

    /// <summary>
    /// 
    /// </summary>

    ExtendReplicationRequestParams getExtendReplication() const;
    bool extendReplicationIsSet() const;
    void unsetextendReplication();
    void setExtendReplication(const ExtendReplicationRequestParams& value);


protected:
    ExtendReplicationRequestParams extendReplication_;
    bool extendReplicationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ExtendReplicationRequestBody_H_
