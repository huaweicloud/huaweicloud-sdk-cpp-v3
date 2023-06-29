
#ifndef HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ShowClusterSettingResponse_H_
#define HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ShowClusterSettingResponse_H_

#include <huaweicloud/cloudtable/v2/CloudTableExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/cloudtable/v2/model/ParameterInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtable {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_CLOUDTABLE_V2_EXPORT  ShowClusterSettingResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowClusterSettingResponse();
    virtual ~ShowClusterSettingResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowClusterSettingResponse members

    /// <summary>
    /// 集群参数生效状态：0、未更改 1、未应用 2、应用中 3、已应用 4、应用失败
    /// </summary>

    int32_t getParmStatus() const;
    bool parmStatusIsSet() const;
    void unsetparmStatus();
    void setParmStatus(int32_t value);

    /// <summary>
    /// 参数列表
    /// </summary>

    std::vector<ParameterInfo>& getParameterInfo();
    bool parameterInfoIsSet() const;
    void unsetparameterInfo();
    void setParameterInfo(const std::vector<ParameterInfo>& value);


protected:
    int32_t parmStatus_;
    bool parmStatusIsSet_;
    std::vector<ParameterInfo> parameterInfo_;
    bool parameterInfoIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CLOUDTABLE_V2_MODEL_ShowClusterSettingResponse_H_
