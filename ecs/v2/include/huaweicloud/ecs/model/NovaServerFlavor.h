
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerFlavor_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerFlavor_H_

#include <huaweicloud/ecs/EcsExport.h>

#include "huaweicloud/core/utils/ModelBase.h"
#include "huaweicloud/core/http/HttpResponse.h"

#include <string>
#include <map>
#include <vector>
#include "huaweicloud/ecs/model/NovaLink.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
///  
/// </summary>
class HUAWEICLOUD_ECS_EXPORT  NovaServerFlavor
    : public ModelBase
{
public:
    NovaServerFlavor();
    virtual ~NovaServerFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// NovaServerFlavor members

    /// <summary>
    /// 云服务器类型ID。  微版本2.47后不支持。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 云服务器类型相关标记快捷链接信息。  微版本2.47后不支持。
    /// </summary>

    std::vector<NovaLink>& getLinks();
    bool linksIsSet() const;
    void unsetlinks();
    void setLinks(const std::vector<NovaLink>& value);

    /// <summary>
    /// 该云服务器规格对应的CPU核数。  在微版本2.47后支持。
    /// </summary>

    int32_t getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(int32_t value);

    /// <summary>
    /// 该云服务器规格对应的内存大小，单位为MB。  在微版本2.47后支持。
    /// </summary>

    int32_t getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(int32_t value);

    /// <summary>
    /// 该云服务器规格对应要求系统盘大小，0为不限制。  在微版本2.47后支持。
    /// </summary>

    int32_t getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(int32_t value);

    /// <summary>
    /// 未使用。  在微版本2.47后支持。
    /// </summary>

    int32_t getEphemeral() const;
    bool ephemeralIsSet() const;
    void unsetephemeral();
    void setEphemeral(int32_t value);

    /// <summary>
    /// 未使用。  在微版本2.47后支持。
    /// </summary>

    int32_t getSwap() const;
    bool swapIsSet() const;
    void unsetswap();
    void setSwap(int32_t value);

    /// <summary>
    /// 云服务器规格名称。  在微版本2.47后支持。
    /// </summary>

    std::string getOriginalName() const;
    bool originalNameIsSet() const;
    void unsetoriginalName();
    void setOriginalName(const std::string& value);

    /// <summary>
    /// flavor扩展字段。  在微版本2.47后支持。
    /// </summary>

    std::map<std::string, std::string>& getExtraSpecs();
    bool extraSpecsIsSet() const;
    void unsetextraSpecs();
    void setExtraSpecs(const std::map<std::string, std::string>& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::vector<NovaLink> links_;
    bool linksIsSet_;
    int32_t vcpus_;
    bool vcpusIsSet_;
    int32_t ram_;
    bool ramIsSet_;
    int32_t disk_;
    bool diskIsSet_;
    int32_t ephemeral_;
    bool ephemeralIsSet_;
    int32_t swap_;
    bool swapIsSet_;
    std::string originalName_;
    bool originalNameIsSet_;
    std::map<std::string, std::string> extraSpecs_;
    bool extraSpecsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_NovaServerFlavor_H_
