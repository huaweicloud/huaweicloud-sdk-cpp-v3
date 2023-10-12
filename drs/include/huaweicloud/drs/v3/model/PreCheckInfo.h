
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_PreCheckInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_PreCheckInfo_H_


#include <huaweicloud/drs/v3/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 预检查信息体
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  PreCheckInfo
    : public ModelBase
{
public:
    PreCheckInfo();
    virtual ~PreCheckInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// PreCheckInfo members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 预检查模式
    /// </summary>

    std::string getPrecheckMode() const;
    bool precheckModeIsSet() const;
    void unsetprecheckMode();
    void setPrecheckMode(const std::string& value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    std::string precheckMode_;
    bool precheckModeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_PreCheckInfo_H_
