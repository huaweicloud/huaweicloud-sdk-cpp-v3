
#ifndef HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupSettingsInheritCfgRequest_H_
#define HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupSettingsInheritCfgRequest_H_


#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Request Object
/// </summary>
class HUAWEICLOUD_CODEARTSREPO_V4_EXPORT  ShowGroupSettingsInheritCfgRequest
    : public ModelBase
{
public:
    ShowGroupSettingsInheritCfgRequest();
    virtual ~ShowGroupSettingsInheritCfgRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowGroupSettingsInheritCfgRequest members

    /// <summary>
    /// **参数解释：** 代码组id，代码组首页，Group ID后的数字Id
    /// </summary>

    int32_t getGroupId() const;
    bool groupIdIsSet() const;
    void unsetgroupId();
    void setGroupId(int32_t value);


protected:
    int32_t groupId_;
    bool groupIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
public:
    ShowGroupSettingsInheritCfgRequest& dereference_from_shared_ptr(std::shared_ptr<ShowGroupSettingsInheritCfgRequest> ptr) {
        return *ptr;
    }
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSREPO_V4_MODEL_ShowGroupSettingsInheritCfgRequest_H_
