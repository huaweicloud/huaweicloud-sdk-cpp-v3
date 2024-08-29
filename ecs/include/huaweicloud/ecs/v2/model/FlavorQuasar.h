
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorQuasar_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorQuasar_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <map>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 云服务器规格信息。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  FlavorQuasar
    : public ModelBase
{
public:
    FlavorQuasar();
    virtual ~FlavorQuasar();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FlavorQuasar members

    /// <summary>
    /// 云服务器类型ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器规格名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 该云服务器规格对应的CPU核数。
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);

    /// <summary>
    /// 该云服务器规格对应的内存大小，单位为MB.
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 该云服务器规格对应要求系统盘大小，0为不限制。
    /// </summary>

    int32_t getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getRootGb() const;
    bool rootGbIsSet() const;
    void unsetrootGb();
    void setRootGb(int32_t value);

    /// <summary>
    /// 
    /// </summary>

    int32_t getEphemeralGb() const;
    bool ephemeralGbIsSet() const;
    void unsetephemeralGb();
    void setEphemeralGb(int32_t value);

    /// <summary>
    /// flavor扩展字段。
    /// </summary>

    std::map<std::string, std::string>& getExtraSpecs();
    bool extraSpecsIsSet() const;
    void unsetextraSpecs();
    void setExtraSpecs(const std::map<std::string, std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    int32_t disk_;
    bool diskIsSet_;
    int32_t rootGb_;
    bool rootGbIsSet_;
    int32_t ephemeralGb_;
    bool ephemeralGbIsSet_;
    std::map<std::string, std::string> extraSpecs_;
    bool extraSpecsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_FlavorQuasar_H_