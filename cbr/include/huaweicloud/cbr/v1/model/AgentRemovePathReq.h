
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRemovePathReq_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRemovePathReq_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
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
class HUAWEICLOUD_CBR_V1_EXPORT  AgentRemovePathReq
    : public ModelBase
{
public:
    AgentRemovePathReq();
    virtual ~AgentRemovePathReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// AgentRemovePathReq members

    /// <summary>
    /// 移除备份路径详情 
    /// </summary>

    std::vector<std::string>& getRemovePath();
    bool removePathIsSet() const;
    void unsetremovePath();
    void setRemovePath(const std::vector<std::string>& value);


protected:
    std::vector<std::string> removePath_;
    bool removePathIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_AgentRemovePathReq_H_
