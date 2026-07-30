
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NetworkMetadataAnnotations.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 更新网络资源时的metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkMetadataUpdate
    : public ModelBase
{
public:
    NetworkMetadataUpdate();
    virtual ~NetworkMetadataUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkMetadataUpdate members

    /// <summary>
    /// 
    /// </summary>

    NetworkMetadataAnnotations getAnnotations() const;
    bool annotationsIsSet() const;
    void unsetannotations();
    void setAnnotations(const NetworkMetadataAnnotations& value);


protected:
    NetworkMetadataAnnotations annotations_;
    bool annotationsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataUpdate_H_
