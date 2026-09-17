
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemConfigsResponse_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemConfigsResponse_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ListWorkitemConfigsResponse
    : public ModelBase, public HttpResponse
{
public:
    ListWorkitemConfigsResponse();
    virtual ~ListWorkitemConfigsResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListWorkitemConfigsResponse members

    /// <summary>
    /// **参数解释：** 已关闭工作项只读模式。 **取值范围：** true：无法进行编辑或修改。 false：可以进行编辑或修改。
    /// </summary>

    bool isClosedWorkitemReadonlyMode() const;
    bool closedWorkitemReadonlyModeIsSet() const;
    void unsetclosedWorkitemReadonlyMode();
    void setClosedWorkitemReadonlyMode(bool value);


protected:
    bool closedWorkitemReadonlyMode_;
    bool closedWorkitemReadonlyModeIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ListWorkitemConfigsResponse_H_
