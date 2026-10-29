
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_OldTaskIdInResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_OldTaskIdInResponse_H_


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
/// **参数解释：** 旧版任务ID。即新建检查任务接口的返回值，每个代码检查任务及其下的分支任务、通过API创建的增量任务都有唯一的任务ID。 **取值范围：** 不涉及。
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  OldTaskIdInResponse
    : public ModelBase
{
public:
    OldTaskIdInResponse();
    virtual ~OldTaskIdInResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OldTaskIdInResponse members


protected:

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_OldTaskIdInResponse_H_
