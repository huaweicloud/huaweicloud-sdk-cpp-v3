
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMetadataResponse_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMetadataResponse_H_


#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_CBR_V1_EXPORT  ShowMetadataResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowMetadataResponse();
    virtual ~ShowMetadataResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowMetadataResponse members

    /// <summary>
    /// 备份ID
    /// </summary>

    std::string getBackupId() const;
    bool backupIdIsSet() const;
    void unsetbackupId();
    void setBackupId(const std::string& value);

    /// <summary>
    /// 云服务器备份信息
    /// </summary>

    std::string getBackups() const;
    bool backupsIsSet() const;
    void unsetbackups();
    void setBackups(const std::string& value);

    /// <summary>
    /// 云服务器规格信息
    /// </summary>

    std::string getFlavor() const;
    bool flavorIsSet() const;
    void unsetflavor();
    void setFlavor(const std::string& value);

    /// <summary>
    /// 云服务器浮动IP信息
    /// </summary>

    std::vector<std::string>& getFloatingips();
    bool floatingipsIsSet() const;
    void unsetfloatingips();
    void setFloatingips(const std::vector<std::string>& value);

    /// <summary>
    /// 云服务器接口信息
    /// </summary>

    std::string getInterface() const;
    bool interfaceIsSet() const;
    void unsetinterface();
    void setInterface(const std::string& value);

    /// <summary>
    /// 云服务器端口信息
    /// </summary>

    std::vector<std::string>& getPorts();
    bool portsIsSet() const;
    void unsetports();
    void setPorts(const std::vector<std::string>& value);

    /// <summary>
    /// 云服务器信息
    /// </summary>

    std::string getServer() const;
    bool serverIsSet() const;
    void unsetserver();
    void setServer(const std::string& value);

    /// <summary>
    /// 云服务器卷信息
    /// </summary>

    std::vector<std::string>& getVolumes();
    bool volumesIsSet() const;
    void unsetvolumes();
    void setVolumes(const std::vector<std::string>& value);


protected:
    std::string backupId_;
    bool backupIdIsSet_;
    std::string backups_;
    bool backupsIsSet_;
    std::string flavor_;
    bool flavorIsSet_;
    std::vector<std::string> floatingips_;
    bool floatingipsIsSet_;
    std::string interface_;
    bool interfaceIsSet_;
    std::vector<std::string> ports_;
    bool portsIsSet_;
    std::string server_;
    bool serverIsSet_;
    std::vector<std::string> volumes_;
    bool volumesIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ShowMetadataResponse_H_
