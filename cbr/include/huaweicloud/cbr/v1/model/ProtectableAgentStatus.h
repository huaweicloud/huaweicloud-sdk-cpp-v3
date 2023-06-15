
#ifndef HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableAgentStatus_H_
#define HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableAgentStatus_H_

#include <huaweicloud/cbr/v1/CbrExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

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
class HUAWEICLOUD_CBR_V1_EXPORT  ProtectableAgentStatus
    : public ModelBase
{
public:
    ProtectableAgentStatus();
    virtual ~ProtectableAgentStatus();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ProtectableAgentStatus members

    /// <summary>
    /// agent无法连接的错误码
    /// </summary>

    int32_t getCode() const;
    bool codeIsSet() const;
    void unsetcode();
    void setCode(int32_t value);

    /// <summary>
    /// agent是否安装
    /// </summary>

    bool isInstalled() const;
    bool installedIsSet() const;
    void unsetinstalled();
    void setInstalled(bool value);

    /// <summary>
    /// agent是否为老版本
    /// </summary>

    bool isIsOld() const;
    bool isOldIsSet() const;
    void unsetisOld();
    void setIsOld(bool value);

    /// <summary>
    /// agent无法连接的错误信息
    /// </summary>

    std::string getMessage() const;
    bool messageIsSet() const;
    void unsetmessage();
    void setMessage(const std::string& value);

    /// <summary>
    /// 资源ID
    /// </summary>

    std::string getResourceId() const;
    bool resourceIdIsSet() const;
    void unsetresourceId();
    void setResourceId(const std::string& value);

    /// <summary>
    /// agent版本号
    /// </summary>

    std::string getVersion() const;
    bool versionIsSet() const;
    void unsetversion();
    void setVersion(const std::string& value);


protected:
    int32_t code_;
    bool codeIsSet_;
    bool installed_;
    bool installedIsSet_;
    bool isOld_;
    bool isOldIsSet_;
    std::string message_;
    bool messageIsSet_;
    std::string resourceId_;
    bool resourceIdIsSet_;
    std::string version_;
    bool versionIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_CBR_V1_MODEL_ProtectableAgentStatus_H_
