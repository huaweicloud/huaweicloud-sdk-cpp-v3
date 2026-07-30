
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperClusterCreateRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperClusterCreateRequest_H_


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  HyperClusterCreateRequest
    : public ModelBase
{
public:
    HyperClusterCreateRequest();
    virtual ~HyperClusterCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// HyperClusterCreateRequest members

    /// <summary>
    /// **参数解释**：hyper cluster的名称。 **取值范围**：^[-_.a-zA-Z0-9]{1,64}$。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// **参数解释**：hyper cluster的ID。 **取值范围**：^[0-9a-f]{8}-[0-9a-f]{4}-[1-5][0-9a-f]{3}-[89ab][0-9a-f]{3}-[0-9a-f]{12}$。
    /// </summary>

    std::string getHyperClusterSubnetId() const;
    bool hyperClusterSubnetIdIsSet() const;
    void unsethyperClusterSubnetId();
    void setHyperClusterSubnetId(const std::string& value);

    /// <summary>
    /// **参数解释**：服务器类型。 **约束限制**：不涉及。 **取值范围**： - HPS：超节点服务 - ECS：弹性云服务 **默认取值**：不涉及。
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string hyperClusterSubnetId_;
    bool hyperClusterSubnetIdIsSet_;
    std::string type_;
    bool typeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_HyperClusterCreateRequest_H_
