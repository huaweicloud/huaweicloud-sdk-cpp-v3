
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreHbaInfoRequestBody_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreHbaInfoRequestBody_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RestoreHbaInfoRequestBody
    : public ModelBase
{
public:
    RestoreHbaInfoRequestBody();
    virtual ~RestoreHbaInfoRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RestoreHbaInfoRequestBody members

    /// <summary>
    /// **参数解释**: 客户端接入认证修改历史记录ID。 **取值范围**: 传空时表示恢复默认。 
    /// </summary>

    std::string getHbaHistoryId() const;
    bool hbaHistoryIdIsSet() const;
    void unsethbaHistoryId();
    void setHbaHistoryId(const std::string& value);


protected:
    std::string hbaHistoryId_;
    bool hbaHistoryIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RestoreHbaInfoRequestBody_H_
