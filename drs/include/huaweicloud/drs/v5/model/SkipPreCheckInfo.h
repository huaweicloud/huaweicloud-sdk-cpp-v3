
#ifndef HUAWEICLOUD_SDK_DRS_V5_MODEL_SkipPreCheckInfo_H_
#define HUAWEICLOUD_SDK_DRS_V5_MODEL_SkipPreCheckInfo_H_

#include <huaweicloud/drs/v5/DrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 跳过预检查项参数。
/// </summary>
class HUAWEICLOUD_DRS_V5_EXPORT  SkipPreCheckInfo
    : public ModelBase
{
public:
    SkipPreCheckInfo();
    virtual ~SkipPreCheckInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// SkipPreCheckInfo members

    /// <summary>
    /// 跳过的预检查项。
    /// </summary>

    std::vector<std::string>& getSkippedPrecheckList();
    bool skippedPrecheckListIsSet() const;
    void unsetskippedPrecheckList();
    void setSkippedPrecheckList(const std::vector<std::string>& value);

    /// <summary>
    /// 跳过预检查原因。
    /// </summary>

    std::string getSkipReason() const;
    bool skipReasonIsSet() const;
    void unsetskipReason();
    void setSkipReason(const std::string& value);


protected:
    std::vector<std::string> skippedPrecheckList_;
    bool skippedPrecheckListIsSet_;
    std::string skipReason_;
    bool skipReasonIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V5_MODEL_SkipPreCheckInfo_H_
