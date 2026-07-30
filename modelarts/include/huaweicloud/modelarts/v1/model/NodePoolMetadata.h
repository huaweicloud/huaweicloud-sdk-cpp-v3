
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolMetadata_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolMetadata_H_


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
/// 节点池的metadata信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodePoolMetadata
    : public ModelBase
{
public:
    NodePoolMetadata();
    virtual ~NodePoolMetadata();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodePoolMetadata members

    /// <summary>
    /// **参数解释**： 节点池名称。用户可进行指定，若未指定将会使用默认名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodePoolMetadata_H_
