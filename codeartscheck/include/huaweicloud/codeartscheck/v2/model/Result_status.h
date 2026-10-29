
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_Result_status_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_Result_status_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// **参数解释：** 接口响应状态。 **取值范围：** - success：接口响应成功。 - error：接口响应失败。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  Result_status
    : public ModelBase
{
public:
    Result_status();
    virtual ~Result_status();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Result_status members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_Result_status_H_
