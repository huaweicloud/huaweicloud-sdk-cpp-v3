
#ifndef HUAWEICLOUD_SDK_EIP_V3_MODEL_EipResourcesAvailableV3RequestBody_H_
#define HUAWEICLOUD_SDK_EIP_V3_MODEL_EipResourcesAvailableV3RequestBody_H_


#include <huaweicloud/eip/v3/EipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// This is a auto create Body Object
/// </summary>
class HUAWEICLOUD_EIP_V3_EXPORT  EipResourcesAvailableV3RequestBody
    : public ModelBase
{
public:
    EipResourcesAvailableV3RequestBody();
    virtual ~EipResourcesAvailableV3RequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EipResourcesAvailableV3RequestBody members

    /// <summary>
    /// 公共池类型
    /// </summary>

    std::string getType() const;
    bool typeIsSet() const;
    void unsettype();
    void setType(const std::string& value);

    /// <summary>
    /// 查询的公共池数量
    /// </summary>

    int32_t getLimit() const;
    bool limitIsSet() const;
    void unsetlimit();
    void setLimit(int32_t value);


protected:
    std::string type_;
    bool typeIsSet_;
    int32_t limit_;
    bool limitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_EIP_V3_MODEL_EipResourcesAvailableV3RequestBody_H_
