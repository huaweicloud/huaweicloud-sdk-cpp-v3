
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_ProgressCompleteInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_ProgressCompleteInfo_H_


#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 全量迁移进度。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  ProgressCompleteInfo
    : public ModelBase
{
public:
    ProgressCompleteInfo();
    virtual ~ProgressCompleteInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ProgressCompleteInfo members

    /// <summary>
    /// 完成进度。
    /// </summary>

    std::string getCompleted() const;
    bool completedIsSet() const;
    void unsetcompleted();
    void setCompleted(const std::string& value);

    /// <summary>
    /// 预计剩余时间。
    /// </summary>

    std::string getRemainingTime() const;
    bool remainingTimeIsSet() const;
    void unsetremainingTime();
    void setRemainingTime(const std::string& value);


protected:
    std::string completed_;
    bool completedIsSet_;
    std::string remainingTime_;
    bool remainingTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_ProgressCompleteInfo_H_
