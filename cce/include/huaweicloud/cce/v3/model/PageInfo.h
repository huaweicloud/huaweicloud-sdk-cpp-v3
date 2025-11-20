
#ifndef HUAWEICLOUD_SDK_CCE_V3_MODEL_PageInfo_H_
#define HUAWEICLOUD_SDK_CCE_V3_MODEL_PageInfo_H_


#include <huaweicloud/cce/v3/CceExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CCE_V3_EXPORT  PageInfo
    : public ModelBase
{
public:
    PageInfo();
    virtual ~PageInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PageInfo members

    /// <summary>
    /// **参数解释：** 当前所有的插件检查任务数 **取值范围：** 不涉及 
    /// </summary>

    int32_t getCurrentCount() const;
    bool currentCountIsSet() const;
    void unsetcurrentCount();
    void setCurrentCount(int32_t value);


protected:
    int32_t currentCount_;
    bool currentCountIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_MODEL_PageInfo_H_
