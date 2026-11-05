
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/NodeconfigUpdate_spec.h>

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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  NodeconfigUpdate
    : public ModelBase
{
public:
    NodeconfigUpdate();
    virtual ~NodeconfigUpdate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeconfigUpdate members

    /// <summary>
    /// 
    /// </summary>

    NodeconfigUpdate_spec getSpec() const;
    bool specIsSet() const;
    void unsetspec();
    void setSpec(const NodeconfigUpdate_spec& value);


protected:
    NodeconfigUpdate_spec spec_;
    bool specIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_NodeconfigUpdate_H_
