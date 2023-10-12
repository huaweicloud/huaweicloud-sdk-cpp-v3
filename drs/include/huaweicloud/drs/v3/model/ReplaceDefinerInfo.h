
#ifndef HUAWEICLOUD_SDK_DRS_V3_MODEL_ReplaceDefinerInfo_H_
#define HUAWEICLOUD_SDK_DRS_V3_MODEL_ReplaceDefinerInfo_H_


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
/// 设置replaceDefiner信息
/// </summary>
class HUAWEICLOUD_DRS_V3_EXPORT  ReplaceDefinerInfo
    : public ModelBase
{
public:
    ReplaceDefinerInfo();
    virtual ~ReplaceDefinerInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ReplaceDefinerInfo members

    /// <summary>
    /// 任务id
    /// </summary>

    std::string getJobId() const;
    bool jobIdIsSet() const;
    void unsetjobId();
    void setJobId(const std::string& value);

    /// <summary>
    /// 是否使用目标库的用户替换掉definer
    /// </summary>

    bool isReplaceDefiner() const;
    bool replaceDefinerIsSet() const;
    void unsetreplaceDefiner();
    void setReplaceDefiner(bool value);


protected:
    std::string jobId_;
    bool jobIdIsSet_;
    bool replaceDefiner_;
    bool replaceDefinerIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DRS_V3_MODEL_ReplaceDefinerInfo_H_
