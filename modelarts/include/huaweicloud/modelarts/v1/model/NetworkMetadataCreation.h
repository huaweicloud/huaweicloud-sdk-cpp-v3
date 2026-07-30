
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataCreation_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataCreation_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NetworkMetadataLabels.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络资源metadata信息创建请求体。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NetworkMetadataCreation
    : public ModelBase
{
public:
    NetworkMetadataCreation();
    virtual ~NetworkMetadataCreation();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NetworkMetadataCreation members

    /// <summary>
    /// 
    /// </summary>

    NetworkMetadataLabels getLabels() const;
    bool labelsIsSet() const;
    void unsetlabels();
    void setLabels(const NetworkMetadataLabels& value);


protected:
    NetworkMetadataLabels labels_;
    bool labelsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NetworkMetadataCreation_H_
