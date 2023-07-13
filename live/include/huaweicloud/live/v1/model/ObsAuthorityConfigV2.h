
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_ObsAuthorityConfigV2_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_ObsAuthorityConfigV2_H_

#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  ObsAuthorityConfigV2
    : public ModelBase
{
public:
    ObsAuthorityConfigV2();
    virtual ~ObsAuthorityConfigV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ObsAuthorityConfigV2 members

    /// <summary>
    /// OBS桶名
    /// </summary>

    std::string getBucket() const;
    bool bucketIsSet() const;
    void unsetbucket();
    void setBucket(const std::string& value);

    /// <summary>
    /// 操作 - 1：授权 - 0：取消授权
    /// </summary>

    int32_t getOperation() const;
    bool operationIsSet() const;
    void unsetoperation();
    void setOperation(int32_t value);


protected:
    std::string bucket_;
    bool bucketIsSet_;
    int32_t operation_;
    bool operationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_ObsAuthorityConfigV2_H_
