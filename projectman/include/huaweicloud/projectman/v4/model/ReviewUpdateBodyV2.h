
#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewUpdateBodyV2_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewUpdateBodyV2_H_


#include <huaweicloud/projectman/v4/ProjectManExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ReviewUpdateBodyV2
    : public ModelBase
{
public:
    ReviewUpdateBodyV2();
    virtual ~ReviewUpdateBodyV2();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReviewUpdateBodyV2 members

    /// <summary>
    /// 评审单更新前状态。 0~32个字符。
    /// </summary>

    std::string getOldStatus() const;
    bool oldStatusIsSet() const;
    void unsetoldStatus();
    void setOldStatus(const std::string& value);

    /// <summary>
    /// 评审单目标流转状态。 0~32个字符。
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 计划完成时间，unix时间戳，单位：毫秒，示例：\&quot;1759420799999\&quot;。
    /// </summary>

    std::string getPlanEndDate() const;
    bool planEndDateIsSet() const;
    void unsetplanEndDate();
    void setPlanEndDate(const std::string& value);


protected:
    std::string oldStatus_;
    bool oldStatusIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string planEndDate_;
    bool planEndDateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_MODEL_ReviewUpdateBodyV2_H_
