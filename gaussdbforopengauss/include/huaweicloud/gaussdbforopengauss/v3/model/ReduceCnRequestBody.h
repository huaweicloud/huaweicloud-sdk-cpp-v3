
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ReduceCnRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ReduceCnRequestBody_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  ReduceCnRequestBody
    : public ModelBase
{
public:
    ReduceCnRequestBody();
    virtual ~ReduceCnRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReduceCnRequestBody members

    /// <summary>
    /// **参数解释**： 缩容节点ID集合。 **约束限制**： 不涉及。
    /// </summary>

    std::vector<std::string>& getNodeIdList();
    bool nodeIdListIsSet() const;
    void unsetnodeIdList();
    void setNodeIdList(const std::vector<std::string>& value);


protected:
    std::vector<std::string> nodeIdList_;
    bool nodeIdListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_ReduceCnRequestBody_H_
