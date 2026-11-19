
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DecServiceFlavorItemDetail_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DecServiceFlavorItemDetail_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  DecServiceFlavorItemDetail
    : public ModelBase
{
public:
    DecServiceFlavorItemDetail();
    virtual ~DecServiceFlavorItemDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// DecServiceFlavorItemDetail members

    /// <summary>
    /// **参数解释**: 类型编码。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTypeCode() const;
    bool typeCodeIsSet() const;
    void unsettypeCode();
    void setTypeCode(const std::string& value);

    /// <summary>
    /// **参数解释**: 规格编码。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(const std::string& value);


protected:
    std::string typeCode_;
    bool typeCodeIsSet_;
    std::string code_;
    bool codeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_DecServiceFlavorItemDetail_H_
