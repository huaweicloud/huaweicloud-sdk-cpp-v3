
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogDir_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogDir_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/modelarts/v1/model/PFSSummary.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 训练作业可视化日志输出，log_type非空时必填。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  LogDir
    : public ModelBase
{
public:
    LogDir();
    virtual ~LogDir();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// LogDir members

    /// <summary>
    /// 
    /// </summary>

    PFSSummary getPfs() const;
    bool pfsIsSet() const;
    void unsetpfs();
    void setPfs(const PFSSummary& value);


protected:
    PFSSummary pfs_;
    bool pfsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_LogDir_H_
