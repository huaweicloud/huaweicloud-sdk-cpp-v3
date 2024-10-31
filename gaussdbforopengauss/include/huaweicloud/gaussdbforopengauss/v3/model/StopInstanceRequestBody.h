
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StopInstanceRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StopInstanceRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  StopInstanceRequestBody
    : public ModelBase
{
public:
    StopInstanceRequestBody();
    virtual ~StopInstanceRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// StopInstanceRequestBody members

    /// <summary>
    /// 需要停止的节点的ID，取值不能为null，如果为空列表则停止整个实例
    /// </summary>

    std::vector<std::string>& getNodeIds();
    bool nodeIdsIsSet() const;
    void unsetnodeIds();
    void setNodeIds(const std::vector<std::string>& value);


protected:
    std::vector<std::string> nodeIds_;
    bool nodeIdsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_StopInstanceRequestBody_H_
