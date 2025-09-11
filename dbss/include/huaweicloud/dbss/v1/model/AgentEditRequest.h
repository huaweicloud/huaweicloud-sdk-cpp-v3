
#ifndef HUAWEICLOUD_SDK_DBSS_V1_MODEL_AgentEditRequest_H_
#define HUAWEICLOUD_SDK_DBSS_V1_MODEL_AgentEditRequest_H_


#include <huaweicloud/dbss/v1/DbssExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>


namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_DBSS_V1_EXPORT  AgentEditRequest
    : public ModelBase
{
public:
    AgentEditRequest();
    virtual ~AgentEditRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AgentEditRequest members

    /// <summary>
    /// CPU阈值,0-100之间
    /// </summary>

    int32_t getCpuThreshold() const;
    bool cpuThresholdIsSet() const;
    void unsetcpuThreshold();
    void setCpuThreshold(int32_t value);

    /// <summary>
    /// 内存阈值，0-100之间
    /// </summary>

    int32_t getMemThreshold() const;
    bool memThresholdIsSet() const;
    void unsetmemThreshold();
    void setMemThreshold(int32_t value);


protected:
    int32_t cpuThreshold_;
    bool cpuThresholdIsSet_;
    int32_t memThreshold_;
    bool memThresholdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_DBSS_V1_MODEL_AgentEditRequest_H_
