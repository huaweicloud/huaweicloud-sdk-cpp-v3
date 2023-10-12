
#ifndef HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerFlavor_H_
#define HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerFlavor_H_


#include <huaweicloud/ecs/v2/EcsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 弹性云服务器规格信息。
/// </summary>
class HUAWEICLOUD_ECS_V2_EXPORT  ServerFlavor
    : public ModelBase
{
public:
    ServerFlavor();
    virtual ~ServerFlavor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ServerFlavor members

    /// <summary>
    /// 弹性云服务器规格ID。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 弹性云服务器规格名称。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 该云服务器规格对应要求系统盘大小，0为不限制。此字段在本系统中无效。
    /// </summary>

    std::string getDisk() const;
    bool diskIsSet() const;
    void unsetdisk();
    void setDisk(const std::string& value);

    /// <summary>
    /// 该云服务器规格对应的CPU核数。
    /// </summary>

    std::string getVcpus() const;
    bool vcpusIsSet() const;
    void unsetvcpus();
    void setVcpus(const std::string& value);

    /// <summary>
    /// 该云服务器规格对应的内存大小，单位为MB。
    /// </summary>

    std::string getRam() const;
    bool ramIsSet() const;
    void unsetram();
    void setRam(const std::string& value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string name_;
    bool nameIsSet_;
    std::string disk_;
    bool diskIsSet_;
    std::string vcpus_;
    bool vcpusIsSet_;
    std::string ram_;
    bool ramIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_ECS_V2_MODEL_ServerFlavor_H_
