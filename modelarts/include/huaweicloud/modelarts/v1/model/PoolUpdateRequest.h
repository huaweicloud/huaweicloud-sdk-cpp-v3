
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolUpdateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PoolSpecUpdate.h>
#include <huaweicloud/modelarts/v1/model/PoolMetadataUpdate.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新网络资源的请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  PoolUpdateRequest
    : public ModelBase
{
public:
    PoolUpdateRequest();
    virtual ~PoolUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PoolUpdateRequest members

    /// <summary>
    /// 
    /// </summary>

    PoolMetadataUpdate getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const PoolMetadataUpdate& value);

    /// <summary>
    /// 
    /// </summary>

    PoolSpecUpdate getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const PoolSpecUpdate& value);


protected:
    PoolMetadataUpdate metadata_;
    bool metadataIsSet_;
    PoolSpecUpdate spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_PoolUpdateRequest_H_
