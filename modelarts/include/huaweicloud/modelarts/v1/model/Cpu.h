
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Cpu_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Cpu_H_


#include <huaweicloud/modelarts/v1/ModelArtsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// cpu规格信息。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Cpu
    : public ModelBase
{
public:
    Cpu();
    virtual ~Cpu();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Cpu members

    /// <summary>
    /// cpu架构。
    /// </summary>

    std::string getArch() const;
    bool archIsSet() const;
    void unsetarch();
    void setArch(const std::string& value);

    /// <summary>
    /// 核数。
    /// </summary>

    int32_t getCoreNum() const;
    bool coreNumIsSet() const;
    void unsetcoreNum();
    void setCoreNum(int32_t value);


protected:
    std::string arch_;
    bool archIsSet_;
    int32_t coreNum_;
    bool coreNumIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Cpu_H_
