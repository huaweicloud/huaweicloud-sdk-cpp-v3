
#ifndef HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponseBody_H_
#define HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponseBody_H_

#include <huaweicloud/ims/v2/ImsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/ims/v2/model/OsVersionInfo.h>
#include <string>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 查询操作系统列表响应体
/// </summary>
class HUAWEICLOUD_IMS_V2_EXPORT  ListOsVersionsResponseBody
    : public ModelBase
{
public:
    ListOsVersionsResponseBody();
    virtual ~ListOsVersionsResponseBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListOsVersionsResponseBody members

    /// <summary>
    /// 操作系统的平台值，如RedHat等
    /// </summary>

    std::string getPlatform() const;
    bool platformIsSet() const;
    void unsetplatform();
    void setPlatform(const std::string& value);

    /// <summary>
    /// 操作系统的详情值
    /// </summary>

    std::vector<OsVersionInfo>& getVersionList();
    bool versionListIsSet() const;
    void unsetversionList();
    void setVersionList(const std::vector<OsVersionInfo>& value);


protected:
    std::string platform_;
    bool platformIsSet_;
    std::vector<OsVersionInfo> versionList_;
    bool versionListIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_MODEL_ListOsVersionsResponseBody_H_
