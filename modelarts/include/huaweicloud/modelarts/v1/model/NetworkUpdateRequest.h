
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkUpdateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkUpdateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NetworkMetadataUpdate.h>
#include <huaweicloud/modelarts/v1/model/NetworkSpecUpdate.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkUpdateRequest
    : public ModelBase
{
public:
    NetworkUpdateRequest();
    virtual ~NetworkUpdateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkUpdateRequest members

    /// <summary>
    /// 
    /// </summary>

    NetworkMetadataUpdate getMetadata() const;
    bool metadataIsSet() const;
    void unsetmetadata();
    void setMetadata(const NetworkMetadataUpdate& value);

    /// <summary>
    /// 
    /// </summary>

    NetworkSpecUpdate getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NetworkSpecUpdate& value);


protected:
    NetworkMetadataUpdate metadata_;
    bool metadataIsSet_;
    NetworkSpecUpdate spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkUpdateRequest_H_
