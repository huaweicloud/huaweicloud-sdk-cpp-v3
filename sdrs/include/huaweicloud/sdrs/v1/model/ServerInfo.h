
#ifndef HUAWEICLOUD_SDK_SDRS_V1_MODEL_ServerInfo_H_
#define HUAWEICLOUD_SDK_SDRS_V1_MODEL_ServerInfo_H_

#include <huaweicloud/sdrs/v1/SdrsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量创建保护实例虚拟机信息
/// </summary>
class HUAWEICLOUD_SDRS_V1_EXPORT  ServerInfo
    : public ModelBase
{
public:
    ServerInfo();
    virtual ~ServerInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ServerInfo members

    /// <summary>
    /// 指定的生产站点云服务器ID。
    /// </summary>

    std::string getServerId() const;
    bool serverIdIsSet() const;
    void unsetserverId();
    void setServerId(const std::string& value);

    /// <summary>
    /// 指定的容灾站点云服务器的flavor ID。
    /// </summary>

    std::string getFlavorRef() const;
    bool flavorRefIsSet() const;
    void unsetflavorRef();
    void setFlavorRef(const std::string& value);


protected:
    std::string serverId_;
    bool serverIdIsSet_;
    std::string flavorRef_;
    bool flavorRefIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SDRS_V1_MODEL_ServerInfo_H_
