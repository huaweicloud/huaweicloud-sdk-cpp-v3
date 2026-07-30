
#ifndef HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Value_H_
#define HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Value_H_


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
/// 资源量。
/// </summary>
class HUAWEICLOUD_MODELARTS_V1_EXPORT  Value
    : public ModelBase
{
public:
    Value();
    virtual ~Value();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Value members

    /// <summary>
    /// cpu量，即计算资源量。
    /// </summary>

    std::string getCpu() const;
    bool cpuIsSet() const;
    void unsetcpu();
    void setCpu(const std::string& value);

    /// <summary>
    /// 内存。
    /// </summary>

    std::string getMemory() const;
    bool memoryIsSet() const;
    void unsetmemory();
    void setMemory(const std::string& value);

    /// <summary>
    /// GPU卡的数量。
    /// </summary>

    std::string getTnt004() const;
    bool tnt004IsSet() const;
    void unsettnt004();
    void setTnt004(const std::string& value);


protected:
    std::string cpu_;
    bool cpuIsSet_;
    std::string memory_;
    bool memoryIsSet_;
    std::string tnt004_;
    bool tnt004IsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MODELARTS_V1_MODEL_Value_H_
