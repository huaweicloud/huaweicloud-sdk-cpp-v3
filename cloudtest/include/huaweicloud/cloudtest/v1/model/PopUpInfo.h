
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PopUpInfo_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PopUpInfo_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  PopUpInfo
    : public ModelBase
{
public:
    PopUpInfo();
    virtual ~PopUpInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PopUpInfo members

    /// <summary>
    /// 是否弹窗
    /// </summary>

    bool isPopup() const;
    bool popupIsSet() const;
    void unsetpopup();
    void setPopup(bool value);

    /// <summary>
    /// 包周期计费时长上限
    /// </summary>

    Object getTimeLimit() const;
    bool timeLimitIsSet() const;
    void unsettimeLimit();
    void setTimeLimit(const Object& value);


protected:
    bool popup_;
    bool popupIsSet_;
    Object timeLimit_;
    bool timeLimitIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_PopUpInfo_H_
