
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupCreateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupCreateRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HyperinstanceGroupCreateRequest
    : public ModelBase
{
public:
    HyperinstanceGroupCreateRequest();
    virtual ~HyperinstanceGroupCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperinstanceGroupCreateRequest members

    /// <summary>
    /// **参数解释**：hyperinstance-group名称。 **默认取值**：不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：超节点集群ID。 **默认取值**：不涉及。
    /// </summary>

    std::string getHyperinstanceClusterId() const;
    bool hyperinstanceClusterIdIsSet() const;
    void unsethyperinstanceClusterId();
    void setHyperinstanceClusterId(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string hyperinstanceClusterId_;
    bool hyperinstanceClusterIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperinstanceGroupCreateRequest_H_
