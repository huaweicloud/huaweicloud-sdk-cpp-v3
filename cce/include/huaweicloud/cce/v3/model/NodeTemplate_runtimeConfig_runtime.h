
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_runtimeConfig_runtime_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_runtimeConfig_runtime_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  NodeTemplate_runtimeConfig_runtime
    : public ModelBase
{
public:
    NodeTemplate_runtimeConfig_runtime();
    virtual ~NodeTemplate_runtimeConfig_runtime();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeTemplate_runtimeConfig_runtime members

    /// <summary>
    /// 
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

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_NodeTemplate_runtimeConfig_runtime_H_
