
#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTaskSettingRequestBody_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTaskSettingRequestBody_H_


#include <huaweicloud/cloudtest/v1/CloudtestExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  SaveTaskSettingRequestBody
    : public ModelBase
{
public:
    SaveTaskSettingRequestBody();
    virtual ~SaveTaskSettingRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SaveTaskSettingRequestBody members

    /// <summary>
    /// 自定义时长
    /// </summary>

    int32_t getMaxRunningTime() const;
    bool maxRunningTimeIsSet() const;
    void unsetmaxRunningTime();
    void setMaxRunningTime(int32_t value);

    /// <summary>
    /// 是否长期运行
    /// </summary>

    std::string getIsLongRun() const;
    bool isLongRunIsSet() const;
    void unsetisLongRun();
    void setIsLongRun(const std::string& value);


protected:
    int32_t maxRunningTime_;
    bool maxRunningTimeIsSet_;
    std::string isLongRun_;
    bool isLongRunIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_MODEL_SaveTaskSettingRequestBody_H_
