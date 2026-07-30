
#ifndef HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqAssociatedResourceOpenStatus_H_
#define HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqAssociatedResourceOpenStatus_H_


#include <huaweicloud/tms/v1/TmsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 开通或关闭关联资源标签继承能力
/// </summary>
class HUAWEICLOUD_TMS_V1_EXPORT  ReqAssociatedResourceOpenStatus
    : public ModelBase
{
public:
    ReqAssociatedResourceOpenStatus();
    virtual ~ReqAssociatedResourceOpenStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReqAssociatedResourceOpenStatus members

    /// <summary>
    /// 状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);


protected:
    std::string status_;
    bool statusIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_MODEL_ReqAssociatedResourceOpenStatus_H_
