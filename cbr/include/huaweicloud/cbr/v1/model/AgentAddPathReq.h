
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentAddPathReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentAddPathReq_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/cbr/v1/model/ExcludePath.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cbr {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  AgentAddPathReq
    : public ModelBase
{
public:
    AgentAddPathReq();
    virtual ~AgentAddPathReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AgentAddPathReq members

    /// <summary>
    /// 增加备份路径详情
    /// </summary>

    std::vector<std::string>& getAddPath();
    bool addPathIsSet() const;
    void unsetaddPath();
    void setAddPath(const std::vector<std::string>& value);

    /// <summary>
    /// 增加排除目录 &gt; 该特性目前处于公测阶段，部分region可能无法使用。
    /// </summary>

    std::vector<ExcludePath>& getExcludePath();
    bool excludePathIsSet() const;
    void unsetexcludePath();
    void setExcludePath(const std::vector<ExcludePath>& value);


protected:
    std::vector<std::string> addPath_;
    bool addPathIsSet_;
    std::vector<ExcludePath> excludePath_;
    bool excludePathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentAddPathReq_H_
