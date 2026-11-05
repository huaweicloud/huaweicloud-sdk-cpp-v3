
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthGrantRequest_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthGrantRequest_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


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
class HUAWEICLOUD_MODELARTS_V1_EXPORT  AuthGrantRequest
    : public ModelBase
{
public:
    AuthGrantRequest();
    virtual ~AuthGrantRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AuthGrantRequest members

    /// <summary>
    /// **参数解释**：是否重置授权。 **约束限制**：不涉及。 **取值范围**： - true：重置已有委托（先删除再创建）。 - false：普通授权。 **默认取值**：false。
    /// </summary>

    bool isIsReset() const;
    bool isResetIsSet() const;
    void unsetisReset();
    void setIsReset(bool value);


protected:
    bool isReset_;
    bool isResetIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_AuthGrantRequest_H_
