
#ifndef HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasklogResponse_H_
#define HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasklogResponse_H_


#include <huaweicloud/codeartscheck/v2/CodeArtsCheckExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/codeartscheck/v2/model/LogInfo.h>
#include <huaweicloud/codeartscheck/v2/model/ParamInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CODEARTSCHECK_V2_EXPORT  ShowTasklogResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowTasklogResponse();
    virtual ~ShowTasklogResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowTasklogResponse members

    /// <summary>
    /// 
    /// </summary>

    ParamInfo getParamInfo() const;
    bool paramInfoIsSet() const;
    void unsetparamInfo();
    void setParamInfo(const ParamInfo& value);

    /// <summary>
    /// 日志信息
    /// </summary>

    std::vector<LogInfo>& getLogInfo();
    bool logInfoIsSet() const;
    void unsetlogInfo();
    void setLogInfo(const std::vector<LogInfo>& value);


protected:
    ParamInfo paramInfo_;
    bool paramInfoIsSet_;
    std::vector<LogInfo> logInfo_;
    bool logInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CODEARTSCHECK_V2_MODEL_ShowTasklogResponse_H_
