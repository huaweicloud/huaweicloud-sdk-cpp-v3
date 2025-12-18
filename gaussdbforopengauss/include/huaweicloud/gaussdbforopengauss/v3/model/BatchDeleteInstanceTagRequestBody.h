
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchDeleteInstanceTagRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchDeleteInstanceTagRequestBody_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  BatchDeleteInstanceTagRequestBody
    : public ModelBase
{
public:
    BatchDeleteInstanceTagRequestBody();
    virtual ~BatchDeleteInstanceTagRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDeleteInstanceTagRequestBody members

    /// <summary>
    /// **参数解释**: 需要删除的标签列表。
    /// </summary>

    std::vector<std::string>& getKeys();
    bool keysIsSet() const;
    void unsetkeys();
    void setKeys(const std::vector<std::string>& value);


protected:
    std::vector<std::string> keys_;
    bool keysIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_BatchDeleteInstanceTagRequestBody_H_
